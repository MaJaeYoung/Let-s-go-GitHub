#define _CRT_SECURE_NO_WARNINGS

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int Fun1(int A, int B, int C);	//	(A+B)%C	�� ��ȯ    
//int Fun2(int A, int B, int C);	//	((A%C) + (B%C)) %C ����ȯ
//int Fun3(int A, int B, int C);	//	(A��B)%C	�� ��ȯ
//int Fun4(int A, int B, int C);	//	((A%C) �� (B%C)) %C ����ȯ
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
//int GCD(int A, int B);	// a ��	b��	�ִ�	����� ��ȯ
////	                       �� ��	a��	b��	�ִ�	�������	a��	b��	����� ��� �߿��� ���� ū ���̴�.
//int LCM(int A, int B);	// a ��	b��	�ּ�	����� ��ȯ
//   //	                   �� ��	a��	b��	�ּ�	�������	a��	b��	����� ��� �߿��� ���� ���� ���̴�.
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

//11����pdf
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
//	printf("���� �Է� : %d\n", num);
//	printf("10 ���� �� : %d\n", plus(num));
//	printf("10 �� �� : %d\n", minus(num));
//	return 0;
//}


//#define CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main() {
//	int i = 10;
//	char	c = 69;
//	double	f = 12.3;
//	//	������	����ִ�	����	���
//	printf("%d	%c	%f\n", i, c, f);
//	//	����	nData��	�޸�	�ּҸ�	���
//	printf("%p	%p	%p\n", &i, &c, &f);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int nData = 10;
//	int* pData = &nData;
//	//	����	nData��	����ִ�	����	���
//	printf("nData	:	%d\n", nData);
//	//	����	nData��	�޸�	�ּҸ�	���
//	printf("&nData	:	%p\n", &nData);
//	//	����	pData��	����ִ�	����	���
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
//	int* p = a;	//	a��	&a[0]��	����
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
//	int* ptr = arr;	//	int	*ptr	=	&arr[0];��	������	����
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
//		printf("¦��");
//	}
//	else
//		printf("Ȧ��");
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
//struct Person	//	struct	Person	����ü	����
//{
//	double height;
//	double weight;
//	char name[10];
//	short grade;
//};
//int main()
//{
//	struct Person person;	//	struct	Person	����ü	����	person	����
//	//	����ü	���	����	��	��	ä���
//	person.height = 174.2;
//	person.weight = 67.8;
//	person.grade = 1;
//	strcpy(person.name, "ȫ�浿");
//				
//
//	//	����ü	���	����	��	���
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

//#include<stdio.h>    //15-2pdf ����3
//#include<math.h> //sqrt��	����ϱ�	����	�������
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
//		printf("���� ��ǥ �Է� : ");
//		scanf("%d %d", &arr[i].xpox, &arr[i].ypox);
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		printf("[%d, %d] ", arr[i].xpox, arr[i].ypox);
//	}
//	return 0;
//}


//�ݹ��� ����
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


//�ݹ��� ���۷���
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
//	printf("���� ������ : %lf\n", ring.radius);
//	printf("%���� �߽� : [%d %d]\n", ring.center->xpox, ring.center->ypos);
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
//	printf("�Լ� ������ : p1[%d %d], p2[%d %d]\n", p1.xpos, p1.ypos, p2.xpos, p2.ypos);
//	SwapPoint(&p1, &p2);
//	printf("�Լ� ������ : p1[%d %d], p2[%d %d]\n", p1.xpos, p1.ypos, p2.xpos, p2.ypos);
//
//}



//���� �޸� �Ҵ�

//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	char* pc;
//	pc = (char*)malloc(sizeof(char) + 3);// ���� �޸� 3����Ʈ �Ҵ�ޱ�
//	if (pc == NULL)
//	{
//		printf("�޸� �Ҵ� ����!");
//		return 0;
//	};
//	*pc = 'a';		// ù ��° �ּҿ� a ����
//	*(pc + 1) = 'b';	// �� ��° �ּҿ� b ����
//	*(pc + 2) = 'c';	// �� ��° �ּҿ� c ����
//	for (int i = 0; i < 3; i++) {
//		printf("%c ", *(pc + i)); // == printf("%c ", pc[i]); 
//	}
//	free(pc);		// �޸� ��ȯ
//	return 0;
//}

//���ڿ��� ������ �� �ִ� �޸� ������ �������� �Ҵ�ް� ���ڸ� �����غ���. 
//100����Ʈ�� �Ҵ�޾Ƽ� !�� �Էµ� ������ ���ĺ� �빮�ڸ� �Է��Ͽ� 
//������ �� �������.
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char* pc;
//	pc = (char*)malloc(sizeof(char) + 99);// 100����Ʈ ũ�� �Ҵ� �ޱ�
//	int i = 0;
//
//	if (pc == NULL) {
//		printf("�޸� �Ҵ� ����!");
//		return 0;
//	}
//
//	while (1) {
//		// pc�� Ȱ���ؼ� �Է¹ޱ�
//		if (// �Է¹��� ���ڰ� !�� )
//			//���߱�
//			i++;
//	}
//
//	for (int j = 0; j < i; j++) {
//		// �Է¹��� ���� �״�� ����ϱ�
//	}
//	// �޸� �ݳ��ϱ�
//	return 0;
//}