#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    char* title;
    char* studentName;
    int grade;
} aR; // assignmentRecord

// prototype
void dockpts(aR* score, int dayslate);

#define PENALTY 3

int main(void)
{
    aR Susie = {
        "Research Paper", 
        "Susie Slacker", 
        94
    };


   printf("Susie got a score of %i on the assignment. But you say she turned it in late?\n", Susie.grade);
   
   printf("How many days late? ");
   int dayslate;
   scanf("%i", &dayslate);
   
   dockpts(&Susie, dayslate);
   
   printf("Susie's PERMANENT RECORD has been updated to reflect the late submission.\n");
   printf("Her new score for the assignment is %i\n", Susie.grade);
}

void dockpts(aR* score, int dayslate)
{
    int pointsOff = dayslate * PENALTY;
    score->grade = score->grade - pointsOff;
    //(*score).grade = (*score).grade - pointsOff
}
