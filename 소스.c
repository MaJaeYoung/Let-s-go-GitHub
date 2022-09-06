#define _CRT_SECURE_NO_WARNINGS

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int Fun1(int A, int B, int C);	//	(A+B)%C	값 반환    
//int Fun2(int A, int B, int C);	//	((A%C) + (B%C)) %C 값반환
//int Fun3(int A, int B, int C);	//	(A×B)%C	값 반환
//int Fun4(int A, int B, int C);	//	((A%C) × (B%C)) %C 값반환
//int main()
//{
//	int A, B, C;
//	scanf("%d	%d	%d", &A, &B, &C);
//	printf("%d\n", Fun1(A, B, C));
//	printf("%d\n", Fun2(A, B, C));
//	printf("%d\n", Fun3(A, B, C));
//	printf("%d\n", Fun4(A, B, C));
//	return 0;
//}
//int Fun1(int A, int B, int C)
//{
//	return((A + B) %C);
//}
//int Fun2(int A, int B, int C)
//{
//	return(((A % C) + (B % C)) %C);
//}
//int Fun3(int A, int B, int C)
//{
//	return((A*B) % C);
//}
//int Fun4(int A, int B, int C)
//{
//	return(((A % C) * (B % C)) %C);
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int GCD(int A, int B);	// a 와	b의	최대	공약수 반환
////	                       두 수	a와	b의	최대	공약수는	a와	b의	공통된 약수 중에서 가장 큰 수이다.
//int LCM(int A, int B);	// a 와	b의	최소	공배수 반환
//   //	                   두 수	a와	b의	최소	공배수는	a와	b의	공통된 배수 중에서 가장 작은 수이다.
//int main()
//{
//	int A, B;
//	scanf("%d %d", &A, &B);
//	printf("%d\n", GCD(A, B));
//	printf("%d\n", LCM(A, B));
//	return 0;
//}
//int GCD(int A, int B)
//{
//	int num = 0;
//	for (int i = 1; i < A + B; i++)
//	{
//		int num1 = A % i, num2 = B % i;
//		if (num1 == 0 && num2 == 0)
//		{
//			num = i;
//		}
//	}
//	return num;
//}
//int LCM(int A, int B)
//{
//	for (int i = 1; i < A + B; i++)
//	{
//		int num = A * i;
//		for (int j = 1; j < A + B; j++)
//		{
//			int num1 = B * j;
//			if (num == num1)
//			{
//				return num;
//				break;
//			}
//		}
//	}
//}

//11주차pdf
//#define CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int square(int num)
//{
//	int b = num * num;
//	return b;
//}
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	printf("%d", square(num));
//	return 0;
//}


//#define CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int plus(int num)
//{
//	int a = num + 10;
//	return a;
//}
//int minus(int num)
//{
//	int a = num - 10;
//	return a;
//}
//int main(void)
//{
//	int num;
//	scanf("%d", &num);
//	printf("정수 입력 : %d\n", num);
//	printf("10 더한 값 : %d\n", plus(num));
//	printf("10 뺀 값 : %d\n", minus(num));
//	return 0;
//}


//#define CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main() {
//	int i = 10;
//	char	c = 69;
//	double	f = 12.3;
//	//	변수에	들어있는	값을	출력
//	printf("%d	%c	%f\n", i, c, f);
//	//	변수	nData의	메모리	주소를	출력
//	printf("%p	%p	%p\n", &i, &c, &f);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int nData = 10;
//	int* pData = &nData;
//	//	변수	nData에	들어있는	값을	출력
//	printf("nData	:	%d\n", nData);
//	//	변수	nData의	메모리	주소를	출력
//	printf("&nData	:	%p\n", &nData);
//	//	변수	pData에	들어있는	값을	출력
//	printf("pData	:	%p\n", pData);
//	return 0;
//}


//#include<stdio.h>
//int main() {
//	int num1 = 20;
//	int num2 = 30;
//	int* pnum1 = &num1;
//	int* pnum2 = &num2;
//	printf("  num1 value	:	%8d,  &num1	:	%p\n", num1, &num1);
//	printf("  num2 value	:	%8d,  &num2	:	%p\n", num2, &num2);
//	printf("  pnum1 value : % p, &pnum1 : % p\n", pnum1, &pnum1);
//	printf("  pnum2 value	:	%p,	&pnum2	:	%p\n", pnum2, &pnum2);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("sizeof(char)		:	%d,	sizeof(char*)			:	%d\n", sizeof(char), sizeof(char*));
//	printf("sizeof(short)		:	%d,	sizeof(short*)			:	%d\n", sizeof(short), sizeof(short*));
//	printf("sizeof(int)			:	%d,	sizeof(int*)			:	%d\n", sizeof(int), sizeof(int*));
//	printf("sizeof(double)		:	%d,	sizeof(double*)			:	%d\n", sizeof(double), sizeof(double*));
//	printf("sizeof(long	long)	:	%d,	sizeof(long	long*)		:	%d\n", sizeof(long long), sizeof(long long*));
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr1[3] = { 1,	2,	3 };
//	double arr2[3] = { 1.1,	2.2,	3.3 };
//	printf("arr[0]	: %d, arr2[0]	: %lf\n", arr1[0], arr2[0]);
//	printf("*arr1	: %d, *arr2	: %lf\n", *arr1, *arr2);
//	
//	*arr1 += 100;
//	*arr2 += 100.0;
//
//	printf("arr[0]	: %d, arr2[0] : %lf\n", arr1[0], arr2[0]);
//	printf("*arr1	: %d, *arr2	: %lf\n", *arr1, *arr2);
//	
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a[] = { 10,	20,	30,	40,	50 };
//	int* p = a;	//	a는	&a[0]과	동일
//	printf("a	=	%p	=	%p\n", a, p);
//	printf("a+1	=	%p	=	%p\n", a + 1, p + 1);
//	printf("*a	=	%d	=	%d\n", *a, *p);
//	printf("*(a+1)	=	%d	=	%d", *(a + 1), *(p + 1));
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[3] = { 15,	25,	35 };
//	int* ptr = arr;	//	int	*ptr	=	&arr[0];과	동일한	문장
//	printf(" ptr : %p, arr	:	%p,	&arr[0]	:	%p\n", ptr, arr, &arr[0]);
//	printf(" ptr+1	:	%p,	arr+1	:	%p,	&arr[1]	:	%p\n", ptr + 1, arr + 1, &arr[1]);
//	printf(" ptr+2	:	%p,	arr+2	:	%p,	&arr[2]	:	%p\n", ptr + 2, arr + 2, &arr[2]);
//	printf("\n");
//
//	*ptr = 20;
//	
//	printf("arr[0]	:	%d,	ptr[0]	: %d,	*(ptr+0) :	%d\n", arr[0], ptr[0], *(ptr + 0));
//	printf("arr[1]	:	%d,	ptr[1]	: %d,	*(ptr+1) :	%d\n", arr[1], ptr[1], *(ptr + 1));
//	printf("arr[2]	:	%d,	ptr[2]	: %d,	*(ptr+2) :	%d\n", arr[2], ptr[2], *(ptr + 2));
//	return 0;
//}


//#include <stdio.h>
//void Input(char*);
//void Upper(char*);
//int main()
//{
//	char buffer[1025] = { 0 };
//	Input(buffer);
//	Upper(buffer);
//	printf("%s\n", buffer);
//	return 0;
//}
//void Input(char buffer[])
//{
//	
//}
//void Upper(char buffer[])
//{
//	
//}


//int main()
//{
//	int a, b,c;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		printf("%d", c = a - b);
//	}
//	else
//		printf("%d", c = b - a);
//	return 0;
//}


//int main() 
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("짝수");
//	}
//	else
//		printf("홀수");
//	
//	return 0;
//}


//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		if (a > c)
//		{
//			printf("%d", a);
//		}
//		else {
//
//			printf("%d", c);
//		}
//	}
//	else
//	{
//		if (b > c)
//		{
//			printf("%d", b);
//		}
//		else
//			printf("%d", c);
//	}
//	return 0;
//}



//int main()
//{
//	int n,i=0;
//	scanf("%d", &n);
//	while (i < n)
//	{
//		i++;
//		printf("%d\n", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i=1, n;
//	scanf("%d", &n);
//	while(1)
//	{
//		if (n%i == 0)
//		{
//			printf("%d\n", i);
//		}
//		i++;
//	}
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//struct Person	//	struct	Person	구조체	선언
//{
//	double height;
//	double weight;
//	char name[10];
//	short grade;
//};
//int main()
//{
//	struct Person person;	//	struct	Person	구조체	변수	person	선언
//	//	구조체	멤버	접근	및	값	채우기
//	person.height = 174.2;
//	person.weight = 67.8;
//	person.grade = 1;
//	strcpy(person.name, "홍길동");
//				
//
//	//	구조체	멤버	접근	및	출력
//	printf("person.height	:	%.1lf\n", person.height);
//	printf("person.weight	:	%.1lf\n", person.weight);
//	printf("person.name	:	%s\n", person.name);
//	printf("person.grade	:	%d\n", person.grade);
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//
//typedef struct employee
//{
//	char name[10];
//	char number[15];
//	int pay;
//}emp;
//	
//int main()
//{
//	emp em;
//	scanf("%s", &em.name);
//	scanf("%s", &em.number);
//	scanf("%d", &em.pay);
//
//	printf("%s\n", em.name);
//	printf("%s\n",em.number);
//	printf("%d\n",em.pay);
//	return 0;
//}

//#include<stdio.h>    //15-2pdf 예제3
//#include<math.h> //sqrt를	사용하기	위한	헤더파일
//struct  point
//{
//	double x;
//	double y;
//};						
//
//int main()
//{
//	struct point n1, n2;
//	double d;
//	scanf("%lf %lf", &n1.x, &n1.y);
//	scanf("%lf %lf", &n2.x, &n2.y);
//
//	d = (n1.x - n2.x) * (n1.x - n2.x) + (n1.y - n2.y) * (n1.y - n2.y);
//	printf("%lf", sprt(d));
//
//	return 0;
//}


//#include <stdio.h>
//#include<stdlib.h>
//struct point
//{
//	int xpox;
//	int ypox;
//};
//
//int main()
//{
//	struct point arr[3];
//	for (int i = 0; i < 3; i++)
//	{
//		printf("점의 좌표 입력 : ");
//		scanf("%d %d", &arr[i].xpox, &arr[i].ypox);
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		printf("[%d, %d] ", arr[i].xpox, arr[i].ypox);
//	}
//	return 0;
//}


//콜바이 벨류
//#include <stdio.h>
//void swap(int n1, int n2);
//int main()
//{
//	int num1 = 10, num2 = 20;
//	printf("	num1	:	%d,	num2	:	%d\n", num1, num2);
//	swap(num1, num2);
//	printf("	num1	:	%d,	num2	:	%d\n", num1, num2);
//	return 0;
//}
//void swap(int n1, int n2)
//{
//	int tmp;
//	tmp = n1;
//	n1 = n2;
//	n2 = tmp;
//}


//콜바이 레퍼런스
//#include <stdio.h>
//void swap(int* p1, int* p2);
//int main()
//{
//	int num1 = 30, num2 = 40;
//	printf("	num1	:	%d,	num2	:	%d\n", num1, num2);
//	swap(&num1, &num2);
//	printf("	num1	:	%d,	num2	:	%d\n", num1, num2);
//	return 0;
//}
//void swap(int* p1, int* p2)
//{
//	int tmp;
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}


//#include <stdio.h>
//typedef struct point{
//	int xpox;
//	int ypos;
//}Point;
//
//typedef struct circle {
//	double radius;
//	Point* center;
//}Circle;
//
//int main()
//{
//	Point cen = { 30,100 };
//	double rad = 5.5;
//	Circle ring = { rad,&cen };
//	printf("원의 반지름 : %lf\n", ring.radius);
//	printf("%원의 중심 : [%d %d]\n", ring.center->xpox, ring.center->ypos);
//
//	return 0;
//}


//#include <stdio.h>
//typedef struct point
//{
//	int xpos;
//	int ypos;
//
//}Point;
//
//void SwapPoint(Point * po1, Point * po2)
//{
//	Point swap = *po1;
//	*po1 = *po2;
//	*po2 = swap;
//}
//
//int main()
//{
//	Point p1 = { 2,4 };
//	Point p2 = { 5,7 };
//
//
//	printf("함수 실행전 : p1[%d %d], p2[%d %d]\n", p1.xpos, p1.ypos, p2.xpos, p2.ypos);
//	SwapPoint(&p1, &p2);
//	printf("함수 실행후 : p1[%d %d], p2[%d %d]\n", p1.xpos, p1.ypos, p2.xpos, p2.ypos);
//
//}



//동적 메모리 할당

//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	char* pc;
//	pc = (char*)malloc(sizeof(char) + 3);// 동적 메모리 3바이트 할당받기
//	if (pc == NULL)
//	{
//		printf("메모리 할당 오류!");
//		return 0;
//	};
//	*pc = 'a';		// 첫 번째 주소에 a 저장
//	*(pc + 1) = 'b';	// 두 번째 주소에 b 저장
//	*(pc + 2) = 'c';	// 세 번째 주소에 c 저장
//	for (int i = 0; i < 3; i++) {
//		printf("%c ", *(pc + i)); // == printf("%c ", pc[i]); 
//	}
//	free(pc);		// 메모리 반환
//	return 0;
//}

//문자열을 저장할 수 있는 메모리 공간을 동적으로 할당받고 문자를 저장해보자. 
//100바이트를 할당받아서 !가 입력될 때까지 알파벳 대문자를 입력하여 
//저장한 뒤 출력하자.
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char* pc;
//	pc = (char*)malloc(sizeof(char) + 99);// 100바이트 크기 할당 받기
//	int i = 0;
//
//	if (pc == NULL) {
//		printf("메모리 할당 오류!");
//		return 0;
//	}
//
//	while (1) {
//		// pc를 활용해서 입력받기
//		if (// 입력받은 문자가 !면 )
//			//멈추기
//			i++;
//	}
//
//	for (int j = 0; j < i; j++) {
//		// 입력받은 문자 그대로 출력하기
//	}
//	// 메모리 반납하기
//	return 0;
//}