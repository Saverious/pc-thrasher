/*
A C program to cause pc thrashing

NOTE: To prevent thrashing(pc damage), include the function free(ptr) as shown in the code(line 37). 
exclude free(ptr) to thrash pc (this will damage the pc).

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char *ptr=NULL;
    int init=1;

    //compute to obtain 1GB of memory
    unsigned int _1GB;
    int base=10;
    int exponent=9;
    _1GB=pow(base,exponent);

    //allocate memory using an endless loop
    while(init<10)
    {
        //allocate 1GB for each execution of loop
        ptr=malloc(_1GB * sizeof(*ptr));
        if(ptr != NULL)
        {
            printf("Warning...\n");
        }
        else
        {
            printf("could not allocate memory");
        }
       free(ptr);
    }
}