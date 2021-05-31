#include <stdio.h>
#include <string.h>

// Header for isupper() and tolower():
#include <ctype.h>

// Solution to exercise:
void stringToLower(char *a) {
    for(size_t i=0; i < strlen(a); i++) {
        if( isupper(a[i]) ) {
            a[i] = tolower(a[i]);
        }
    }
}

// Bonus challenge solution not using tolower():
void stringToLowerBonus(char *a) {
    for(size_t i=0; i < strlen(a); i++) {
        if( isupper(a[i]) ) {
            
            a[i] = a[i] + ('a' - 'A');

        }
    }
}


// Main program to test it:
int main() {
    char capstring[] = "The Guardians of the Galaxy";

    printf("Original string:  %s\n", capstring);
    stringToLower(capstring);
    printf("Modified string:  %s\n", capstring);
}
