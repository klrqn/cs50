#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "student.h"

#define STUDENTS 3

int main(void)
{
    // struct student, array named students[3]
    student students[STUDENTS];
    
    for (int i=0; i < STUDENTS; i++)
    {
        printf("student's name: ");
        students[i].name = GetString();
        printf("student's house: ");
        students[i].house = GetString();
    }
    
    for (int i = 0; i < STUDENTS; i++)
    {
        printf("%s is in %s\n", students[i].name, students[i].house);
    }
    
    FILE* file = fopen("students.csv", "w");
    if (file != NULL)
    {
        for (int i = 0; i < STUDENTS; i++)
        {
            fprintf(file, "%s, %s\n", students[i].name, students[i].house);
        }
    }
    
    for (int i=0; i < STUDENTS; i++)
    {
        free(students[i].name);
        free(students[i].house);
    }
}