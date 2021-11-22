#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
    char str[30] = "string study, this is strstr";
    char* findStr = "str";
    char* ptr = strstr(str, findStr);

    while (ptr != NULL) { // &str[0], &str[23], &str[26]
        puts(ptr);
        strcpy(str, ptr + strlen(findStr));
        ptr = strstr(str, findStr);
    }
}