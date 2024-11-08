/** lab27functs.c
* ===========================================================
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Progamming Assessment 2 Practice
* ===========================================================  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "lab27functs.h"

void encrypt(char* text, int key) {
    int i;
    for (i = 0; i < strlen(text); ++i) {
        text[i] += key;
    }
}

void decrypt(char* text, int key) {
    int i;
    for (i = 0; i < strlen(text); ++i) {
        text[i] -= key;
    }
}

