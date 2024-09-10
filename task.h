#include <stdio.h>
#include <stdlib.h>

typedef struct 
{ 
    char name[20];
    char lastname[20];
    int  avg[10];
    int grade;
    
}Student;

void average(Student** arr, int size)
{
    for(int i =0; i<size; ++i)
    {
        int sum =0;
        for(int j=0; j<10; ++j)
        {
            sum += arr[i]->avg[j];
        }
        arr[i]-> grade = sum/10;
    }
}

