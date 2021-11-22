#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<string.h> 
#define ENTRIES 5 

void menuselect(int *); //메뉴 출력 및 선택 함수 
void addword(struct entry dictionary[ENTRIES], int); //단어 추가 함수 
void readword(char *); //입력할 단어 받는 함수 
void insertword(struct entry dictionary[ENTRIES], int count, char *, char *); //단어 삽입 함수 
void findword(struct entry dictionary[ENTRIES], char *); //단어 검색 함수 
int findindex(struct entry dictionary[ENTRIES], char *); // 단어의 위치 index 반환 함수 
void showdictionary(struct entry dictionary[ENTRIES], int); // 사전 출력 함수 

struct entry{
		char engword[20];
		char korword[20];
	};

void main(){ 
	int menu, count=0;
	
	struct entry dictionary[ENTRIES];
	char word[30];
	
	do{
		menuselect(&menu); 
		switch(menu){
		case 0 : puts("종료 ."); break; 
		case 1 : addword(dictionary,count++); break; 
		case 2 : findword(dictionary,word); break; 
		case 3 : showdictionary(dictionary,count); break; 
		default : puts("재입력."); break; 
		} 
	}while(menu); 
} 

void menuselect(int *menu){ 
	printf("(0)끝내기 (1)사전등록 (2)사전찾기 (3)사전목록보기 // 선택하시오 >> "); 
	scanf("%d",menu); 
} 

void addword(struct entry dictionary[ENTRIES], int count){
	char eng[30], kor[30]; 
	if(count<5){ 
		printf("영어"); readword(eng); 
		printf("한글"); readword(kor); 
		insertword(dictionary,count,eng,kor);
	}
	else 
		puts("사전이 꽉 찼습니다!"); 
} 

void readword(char word[30]){ 
	printf("단어 입력 : "); 
	scanf("%s",word);
} 

void insertword(struct entry dictionary[ENTRIES], int count, char *eng, char *kor){ 
	strcpy(dictionary[count].engword,eng);
	strcpy(dictionary[count].korword,kor);
}

void findword(struct entry dictionary[ENTRIES], char *word){ 
	int index; 

	printf("찾을"); readword(word); 
	if((index=findindex(dictionary,word))<0) 
		puts("사전에서 발견되지 않았습니다."); 
	else 
		printf("%s: %s \n",word,dictionary[index].korword); 
} 

int findindex(struct entry dictionary[ENTRIES], char *word){ 
	int i; 

	for(i=0; i<ENTRIES; i++) 
		if(!strcmp(dictionary[i].engword,word)) 
			return i; 
	return -1; 
} 

void showdictionary(struct entry dictionary[ENTRIES], int count){ 
	int i; 
	
	if(count>4) count=5; 
	if(count){ 
		for(i=0; i<count; i++){
			printf("%s : %s\n",dictionary[i].engword,dictionary[i].korword);
		}
	} 
	else 
		puts("단어가 없습니다."); 
}