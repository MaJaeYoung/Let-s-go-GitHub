#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int i;

struct product {
	int barcode;				//상품 바코드 정수형 변수 선언
	char name[100];			//상품 이름 문자 배열 선언(크기 100)
	int count;		//상품 개수 정수형 변수 선언
}list[100] = { 0 };

void input()
{
	printf("상품 바코드 번호 : ");
	scanf("%d", &list->barcode);		//상품 바코드 번호 입력
	printf("상품 이름 : ");
	scanf(" %s", &list->name);		//상품 이름 입력
	printf("상품 개수 : ");
	scanf("%d", &list->count);//상품 개수 입력
	i++;
}

void show()
{
	for(int j = 0; j < i;j++) {		//반복문 선언(저장된 상품 정보 출력할 수 있도록 반복할 것) 
		printf("%d\t%s\t%d\n", list[j].barcode, list[j].name, list[j].count);
	}
}

void sold()
{
	int code, cnt;
	printf("판매할 상품 바코드 번호 입력 : ");
	scanf("%d", &code);
	printf("판매할 상품의 개수 입력 : ");
	scanf("%d", &cnt);

	for (int j = 0; j < i; j++) {
		if (code == list[j].barcode) {
			if (cnt > list[j].count) {							//if문 작성 
				printf("재고가 부족합니다.\n");
			}
			else {
				list[j].count = list[j].count - cnt;				//현재 가지고 있는 상품 개수에서 판매할 상품 개수 빼기
				printf("%d\t%s\t%d\n", list[j].barcode, list[j].name, list[j].count);
				break;
			}
		}
	}
}


int main()
{
	int n;
	int* p = &n;
	while (1) {
		printf("1. 상품 추가\t2. 상품 보여주기\t3. 판매할 상품\t0. 종료\n");
		scanf("%d", p);
		if (1 == *p) {			//포인터 변수를 사용할 것
			input();			//상품 추가 함수 호출
		}
		else if (2 == *p){		//포인터 변수를 사용할 것
		show();					//상품 보여주기 함수 호출
		}
		else if (3 == *p){		//포인터 변수를 사용할 것
			sold();				//판매할 상품 함수 호출
		}
		else if (0 == *p){		//포인터 변수를 사용할 것
		printf("프로그램 종료\n");
		break;
		}
		else {
		printf("번호가 없습니다. 다시 입력하세요.\n");
		}
	}

	return 0;
}

