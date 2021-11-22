#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() {
    char str[] = "Hello C World!";
    char* s = str;
    int len;

    printf("원래 문자열 : %s\n", str);
    len = strlen(str);
    /*
    for (int i = 0; i < len; i++) {
        str[i] = toupper(str[i]);
        // tolower(str[i]);
    }
    */

    while (*s != EOF) { // *(str++) : Error!
        // str은 배열의 첫 번째 주소를 가리키는 상수 포인터이기 때문에 값을 수정할 수 없다!!
        *(s++) = toupper(*s);
        // tolower(str[i]);
    }
 
    printf("바뀐 문자열 : %s\n", str);
}