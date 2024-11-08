/** lab27-2.c
* ===========================================================
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Progamming Assessment 2 Practice
* ===========================================================  */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int myNum;
    int endNum;
    char myFile[50];
    int i;

    printf("Enter an integer to generate a table for: ");
    scanf(" %d", &myNum);
    printf("Enter an integer to end the table at: ");
    scanf(" %d", &endNum);

    printf("Enter the name of the file you with to print the table to: ");
    scanf(" %s", myFile);

    FILE* outFile = fopen(myFile, "w");  

    // Check if file exists  
    if (outFile == NULL) {  
        fprintf(stderr, "Could not open file %s", myFile);  
        fprintf(stderr, " - terminating\n");  
        exit(1); 
    }  

    for (i = 0; i <= endNum; ++i) {
        fprintf(outFile, "%d * %d = %d\n", myNum, i, myNum * i);
    }

    return 0;
}

