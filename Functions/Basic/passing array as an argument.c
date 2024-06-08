#include<stdio.h>

int avg(int[], int);

void main()
{
    int average;
    int marks[5]= {10,15,20,30,40};
    average= avg(marks,5); //call by referance
    printf("AVG is %d", average);
}

int avg(int marks[], int a)
{
    int i, sum=0, average=0;
    for(i=0; i<5; i++)
    {
        sum= sum+ marks[i];
    }
    average= sum/a;
    return average;
}
