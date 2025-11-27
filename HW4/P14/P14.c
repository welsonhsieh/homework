#include<stdio.h>
#include<stdlib.h>
#define STUDENTS 3
#define EXAMS 4
double average(const int setOfGrades[])
{
    int total=0;
    for(int i=0;i<EXAMS;i++)
    {
        total += setOfGrades[i];
    }
    return (double)total/EXAMS;
}
int maximum(const int grades[][EXAMS])
{
    int high=0;
    for(int i=0;i<STUDENTS;i++)
    {
        for(int j=0;j<EXAMS;j++)
        {
            if(grades[i][j]>high) high=grades[i][j];
        }
    }
    return high;
}
int minimum(const int grades[][EXAMS])
{
    int low=100;
    for(int i=0;i<STUDENTS;i++)
    {
        for(int j=0;j<EXAMS;j++)
        {
            if(grades[i][j]<low) low=grades[i][j];
        }
    }
    return low;
}
void printArray(const int grades[][EXAMS])
{
    printf("                 [0]  [1]  [2]  [3]");
    for(int i=0;i<STUDENTS;i++)
    {
        printf("\nstudentGrades[%d] ",i);
        for(int j=0;j<EXAMS;j++)
        {
            printf("%-5d",grades[i][j]);
        }
    }
}
int main()
{
    const int studentGrades[STUDENTS][EXAMS] =
    {   {77,68,86,73},
        {96,87,89,78},
        {70,90,86,81} };

    printf("The array is:\n");
    printArray(studentGrades);

    printf("\n\nLowest grade: %d\nHighest grade: %d\n",
           minimum(studentGrades),
           maximum(studentGrades));

    for(int i=0;i<STUDENTS;i++)
    {
        printf("The average grade for student %d is %.2f\n",
               i,average(studentGrades[i]));
    }

    system("pause");
    return 0;
}
