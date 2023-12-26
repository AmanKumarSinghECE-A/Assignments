#include <stdio.h>
//USING CHAR FUNCTION
int compareStrings(const char *str3, const char *str4) {
    while (*str3 != '\0' && *str4 != '\0' && *str3 == *str4) {
        str3++;
        str4++;
    }

    if (*str3 == *str4) {
        return 0; 
    } else if (*str3 < *str4) {
        return -1; 
    } else {
        return 1; 
    }
}

//function to concatenate two strings
void concatenateStrings(char *dest, const char *src) {
    while (*dest != '\0') {
        dest++;
    }

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
}

//function to reverse a string
void reverseString(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    int start = 0;
    int end = length - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

//function to compare lengths of two strings
int compareLengths(const char *str3, const char *str4) {
    int len1 = 0, len2 = 0;

    while (*str3 != '\0') {
        len1++;
        str3++;
    }

    while (*str4 != '\0') {
        len2++;
        str4++;
    }

    if (len1 == len2) {
        return 0; 
    } else if (len1 < len2) {
        return -1; 
    } else {
        return 1; 
    }
}
int main(){
    char str3[100], str4[100], result[200];

    printf("Enter the first string for char func: ");
    scanf("%s", str3);

    // Input second string
    printf("Enter the second string for char func: ");
    scanf("%s", str4);

    int cmpResult = compareStrings(str3, str4);
    printf("String Comparison: %d\n", cmpResult);

    concatenateStrings(result, str3);
    concatenateStrings(result, str4);
    printf("String Concatenation: %s\n", result);

    reverseString(str3);
    printf("String Reversal (1st string): %s\n", str3);
    reverseString(str4);
    printf("String Reversal (1st string): %s\n", str4);
    int lenCmpResult = compareLengths(str3, str4);
    printf("Length Comparison: %d\n", lenCmpResult);

}
