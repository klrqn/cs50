/**
 * whodunit.c
 *
 * cs50 LaunchCode
 * Problem Set 4
 *
 * un-obfuscates a scrambled image for clarity's sake
 * 
 */
       
#include <stdio.h>
#include <stdlib.h>

#include "bmp.h"

int main(int argc, char* argv[])
{
    // ensure proper usage
    if (argc != 3)
    {
        printf("Usage: ./copy infile outfile\n");
        return 1;
    }

    // command line args to variables
    char* infile = argv[1];
    char* outfile = argv[2];

    // open input file 
    FILE* inputfile = fopen(infile, "r");
    if (inputfile == NULL)
    {
        printf("Couldn't Open %s.\n", infile);
        return 2;
    }

    // open output file
    FILE* outputfile = fopen(outfile, "w");
    if (outputfile == NULL)
    {
        fclose(inputfile);
        fprintf(stderr, "Could not create %s.\n", outfile);
        return 3;
    }

    // read infile's BITMAPFILEHEADER
    BITMAPFILEHEADER bf;
    fread(&bf, sizeof(BITMAPFILEHEADER), 1, inputfile);

    // read infile's BITMAPINFOHEADER
    BITMAPINFOHEADER bi;
    fread(&bi, sizeof(BITMAPINFOHEADER), 1, inputfile);

    // ensure infile is (likely) a 24-bit uncompressed BMP 4.0
    if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 || 
        bi.biBitCount != 24 || bi.biCompression != 0)
    {
        fclose(outputfile);
        fclose(inputfile);
        fprintf(stderr, "Unsupported file format.\n");
        return 4;
    }

    // write outfile's BITMAPFILEHEADER
    fwrite(&bf, sizeof(BITMAPFILEHEADER), 1, outputfile);

    // write outfile's BITMAPINFOHEADER
    fwrite(&bi, sizeof(BITMAPINFOHEADER), 1, outputfile);

    // determine padding for scanlines
    int padding =  (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;

    // iterate over infile's scanlines
    for (int i = 0, biHeight = abs(bi.biHeight); i < biHeight; i++)
    {
        // iterate over pixels in scanline
        for (int j = 0; j < bi.biWidth; j++)
        {
            // temporary storage
            RGBTRIPLE triple;
            
            // white filter
            RGBTRIPLE filter;
            triple.rgbtRed = 0x00;
            triple.rgbtBlue = 0x00;
            triple.rgbtGreen = 0x00;
            
            // read RGB triple from infile
            fread(&triple, sizeof(RGBTRIPLE), 1, inputfile);
            
            // filter out the red for white
            if (triple.rgbtRed == 0xff)
                triple = filter;
            
            // write RGB triple to outfile
            fwrite(&triple, sizeof(RGBTRIPLE), 1, outputfile);
        }

        // skip over padding, if any
        fseek(inputfile, padding, SEEK_CUR);

        // then add it back (to demonstrate how)
        for (int k = 0; k < padding; k++)
        {
            fputc(0x00, outputfile);
        }
    }

    // close infile
    fclose(inputfile);

    // close outfile
    fclose(outputfile);

    // that's all folks
    return 0;
}