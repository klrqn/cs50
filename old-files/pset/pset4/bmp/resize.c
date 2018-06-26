/**
 * Resizes 24-bit uncompressed BMPS by a factor of n.
 */
       
#include <stdio.h>
#include <stdlib.h>

#include "bmp.h"

int main(int argc, char* argv[])
{
    // ensure proper usage
    if (argc != 4)
    {
        printf("Usage: ./resize n infile outfile\n");
        return 1;
    }

    //converts n into an integer
    int n = atoi(argv[1]);
    
    if (n > 100 || n < 1) {
        printf("Retry with a positive integer less than or equal to 100. Thanks!\n");
        return 1;
    }
    
    // remember filenames
    char* infile = argv[2];
    char* outfile = argv[3];

        // open input file 
    FILE* inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        printf("Could not open %s.\n", infile);
        return 2;
    }

    // open output file
    FILE* outptr = fopen(outfile, "w");
    if (outptr == NULL)
    {
        fclose(inptr);
        fprintf(stderr, "Could not create %s.\n", outfile);
        return 3;
    }

    // read infile's BITMAPFILEHEADER
    BITMAPFILEHEADER bf;
    fread(&bf, sizeof(BITMAPFILEHEADER), 1, inptr);

    // read infile's BITMAPINFOHEADER
    BITMAPINFOHEADER bi;
    fread(&bi, sizeof(BITMAPINFOHEADER), 1, inptr);

    // ensure infile is (likely) a 24-bit uncompressed BMP 4.0
    if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 || 
        bi.biBitCount != 24 || bi.biCompression != 0)
    {
        fclose(outptr);
        fclose(inptr);
        fprintf(stderr, "Unsupported file format.\n");
        return 4;
    }
    
    // make new headers for outfile
	BITMAPFILEHEADER newBf = bf;
	BITMAPINFOHEADER newBi = bi;	
	newBi.biWidth = bi.biWidth * n;
	newBi.biHeight = bi.biHeight * n;
	   
	// determine padding for scanlines (including outfile's padding)
    int padding =  (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;
    int newPadding = (4 - (newBi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;

    // determine the outfile image sizes
    newBi.biSizeImage = ((newBi.biWidth * sizeof(RGBTRIPLE)) + newPadding) * abs(newBi.biHeight);
    newBf.bfSize = (bf.bfSize - bi.biSizeImage) + newBi.biSizeImage;
    
    // write outfile's BITMAPFILEHEADER
    fwrite(&newBf, sizeof(BITMAPFILEHEADER), 1, outptr);

    // write outfile's BITMAPINFOHEADER
    fwrite(&newBi, sizeof(BITMAPINFOHEADER), 1, outptr);
    
    for (int i = 0, biHeight = abs(bi.biHeight); i < biHeight; i++)
    {
        // read lines n-times
        for (int j = 0; j < n; j++)
        {
            // iterate over pixels in scanline
            for (int k = 0; k < bi.biWidth; k++)
            {
                // temporary storage
                RGBTRIPLE triple;

                // read RGB triple from infile
                fread(&triple, sizeof(RGBTRIPLE), 1, inptr);
            
                // write RGB triple to outfile
                for (int l = 0; l < n; l++) fwrite(&triple, sizeof(RGBTRIPLE), 1, outptr);
            }

            // add new padding
            for (int m = 0; m < newPadding; m++) fputc(0x00, outptr);
        
            // error-checks
            if (j < n - 1) fseek(inptr, -bi.biWidth * sizeof(RGBTRIPLE), SEEK_CUR);
        }
        
        // skip over padding, if any
        fseek(inptr, padding, SEEK_CUR);
    }

    // close infile
    fclose(inptr);

    // close outfile
    fclose(outptr);

    return 0;
}
