#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<string.h> 
#define ENTRIES 5 

void menuselect(int *); //�޴� ��� �� ���� �Լ� 
void addword(struct entry dictionary[ENTRIES], int); //�ܾ� �߰� �Լ� 
void readword(char *); //�Է��� �ܾ� �޴� �Լ� 
void insertword(struct entry dictionary[ENTRIES], int count, char *, char *); //�ܾ� ���� �Լ� 
void findword(struct entry dictionary[ENTRIES], char *); //�ܾ� �˻� �Լ� 
int findindex(struct entry dictionary[ENTRIES], char *); // �ܾ��� ��ġ index ��ȯ �Լ� 
void showdictionary(struct entry dictionary[ENTRIES], int); // ���� ��� �Լ� 

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
		case 0 : puts("���� ."); break; 
		case 1 : addword(dictionary,count++); break; 
		case 2 : findword(dictionary,word); break; 
		case 3 : showdictionary(dictionary,count); break; 
		default : puts("���Է�."); break; 
		} 
	}while(menu); 
} 

void menuselect(int *menu){ 
	printf("(0)������ (1)������� (2)����ã�� (3)������Ϻ��� // �����Ͻÿ� >> "); 
	scanf("%d",menu); 
} 

void addword(struct entry dictionary[ENTRIES], int count){
	char eng[30], kor[30]; 
	if(count<5){ 
		printf("����"); readword(eng); 
		printf("�ѱ�"); readword(kor); 
		insertword(dictionary,count,eng,kor);
	}
	else 
		puts("������ �� á���ϴ�!"); 
} 

void readword(char word[30]){ 
	printf("�ܾ� �Է� : "); 
	scanf("%s",word);
} 

void insertword(struct entry dictionary[ENTRIES], int count, char *eng, char *kor){ 
	strcpy(dictionary[count].engword,eng);
	strcpy(dictionary[count].korword,kor);
}

void findword(struct entry dictionary[ENTRIES], char *word){ 
	int index; 

	printf("ã��"); readword(word); 
	if((index=findindex(dictionary,word))<0) 
		puts("�������� �߰ߵ��� �ʾҽ��ϴ�."); 
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
		puts("�ܾ �����ϴ�."); 
}