#include <stdio.h>

int toint(char* str) {
    int num = 0;

    while (*str != '\0') {
        num *= 10;
        num += *str++ - '0';
    }

    return num;
}

void main(int argc, char* argv[]) {
    printf("argc : %d개\nargv[0] : %s\nargv[1] : %s\nargv[2] : %s\n", argc, argv[0], argv[1], argv[2]);

    for (int i = 1; i < argc; i++) {
        printf("변환한 값 : %d\n", toint(argv[i]));
    }
}