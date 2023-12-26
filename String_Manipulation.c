#include <stdio.h>
#include <string.h>

int main() {
char str1[100], str2[100];
printf("Enter the first string: ");
fgets(str1, sizeof(str1), stdin);

// Input the second string
printf("Enter the second string: ");
fgets(str2, sizeof(str2), stdin);

//compare two strings
int result = strcmp(str1, str2);

if (result == 0) {
printf("Strings are equal.\n");
} else if (result < 0) {
printf("String 1 is less than String 2.\n");
} else {
printf("String 1 is greater than String 2.\n");
}



//concatenate the strings
strcat(str1, str2);
printf("Concatenated string: %s\n", str1);
//reversing str1ring
int length = strlen(str1);

for (int i = 0, j = length - 1; i < j; ++i, --j) {
char temp = str1[i];
str1[i] = str1[j];
str1[j] = temp;
    }
printf("Reversed strring: %s\n", str1);

//length comparision
int len1 = strlen(str1);
int len2 = strlen(str2);

if (len1 == len2) {
    printf("Both strings have the same length: %d\n", len1);
} else if (len1 < len2) {
	printf("The second string is longer: %d vs %d\n", len1, len2);
} else {
	printf("The first string is longer: %d vs %d\n", len1, len2);
}


}
