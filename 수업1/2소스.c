//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//	int a;
//	scanf("%d", &a);
//	if (a >= 50 && a <= 70 || a % 6 == 0)
//	{
//		printf("win");
//	}

//	else
//	{
//		printf("lose");
//	}
//		return 0;
//}

//	#define _CRT_SECURE_NO_WARNINGS
//	#include<stdio.h>
//	int main(void)
//{    
//		int a,b,c;
//		scanf("%d %c %b", &a,&b,&c);
//		
//		switch ((char)b)
//	{	
//		case'+':
//
//			printf("%d", a + c);
//		break;
//		case'-':
//
//			printf("%d", a - c);
//			break;
//		case'*':
//
//			printf("%d", a * c);
//			break;
//		case'/':
//
//			printf("%d", a / c);
//			break;
//		default:
//		case'%':
//
//			printf("%d", a % c);
//			break;
//	}
//		return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//	int a;
//	printf("0. 1. 2. 3.");
//	scanf("%d", a);
//	switch (a/10)
//	{
//	case'0':
//		printf("500���Դϴ�.");
//		break;
//	case'1':
//		printf("750���Դϴ�.");
//			break;
//	case'2':
//		printf("1000���Դϴ�.");
//		break;
//	case'3':
//		printf("0���Դϴ�.");
//		break;
//		default:
//		}
//	printf("�������%d��\n", a);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//	int a, b, abs;
//	scanf("%d %d",  &a, &b);
//	
//	abs = (a > b) ? a : b;
//
//	printf("%d", abs);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//	float a, b, c, q;
//	scanf("%f %f %f", &a, &b, &c);
//
//	q = (a + b + c) / 3;
//	
//	printf("%.1f\n", a);
//	printf("%.1f\n", b);
//	printf("%.1f\n", c);
//	printf("����� ��� : %.2f\n", q);
//	(q >= 80.5) ? printf("O") : printf("X");
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//	int a, b, c, num1, num2; 
//	scanf("%d %d %d", &a, &b, &c);
//
//	num1 = (a > b) ? a : b;
//	num2 = (num1 > c) ? num1 : c;
//	printf("%d", num2);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//	int h, m, num;
//	scanf("%d %d", &h, &m);
//	num = h * 60 + m;
//	num -= 30;
//	if (num < 0)
//	{
//		num += 1440;
//	}
//	h = num / 60;
//	m = num % 60;
//
//	printf("%d %d", h, m);
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS //�ð� ���ϱ� (��)
//#include<stdio.h>                
//int main(void)
//{
//	int h, m, s, num;
//	scanf("%d %d %d", &h, &m, &s);
//	num = h * 60 + m + s;
//	
//	h = (num / 60) % 24;
//	m = num % 60;
//	printf("%d %d", h, m);
//
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int num = 0;            //�ʱ�ȭ
//	while (1)                //���ѹݺ�
//	{
//		if (num >= 5)	   //�ݺ��� ���߱� ��������
//			break;
//		num++;	       //�ݺ��� ���ߴµ� ������ �ִ� ����
//		printf("while ���ν��� : %d\n", num);
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int fact(fa) {
//	if (fa <= 1)
//		return 1;
//	return fa * fact(fa - 1);
//}
//int main()
//{
//	int a = 0, b = 0;
//	int n, k;
//	int arr[10];
//	scanf("%d %d", &n, &k);
//	if (2 <= n && n <= 10) {
//		if (1 <= k && k <= 200) {
//			for (int i = 0; i < n; i++) {
//				scanf("%d", &arr[i]);
//			}
//			for (int j = 0; j < n; j++) {
//				if (arr[j] >= k) {
//					a++;
//				}
//				else {
//					b++;
//				}
//			}
//		}
//	}
//	printf("%d", fact(a) * fact(b));
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h> 
//int main(void)
//{
//	int i = 1, num;
//	scanf("%d", &num);
//	
//	while (1)
//	{
//		printf("%d ", i);
//		if (i >= num) break;
//		i++;
//	}
//	printf("\n���α׷� ����\n");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h> 
//int main(void)
//{
//	int alpha = 65;
//	int num;
//	scanf("%d", &num);
//
//	while (1)
//	{
//		if (alpha <= num)
//		{
//			printf("%c ", alpha);
//			alpha = alpha + 1;
//		}
//	}
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h> 
//int main(void)
//{
//	int a,b, c;
//	scanf("%d", &a);
//	b = 1;
//	c = 0;
//	while (1)
//	{
//		if (a == b) break;
//		c = c + b;
//		b++;
//	}	
//	printf("%d ", c);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h> 
//int main(void)
//{
//	unsigned char a = 2;
//	unsigned char b = 4;
//
//
//	printf("%d\n", a & b);
//	printf("%d\n", a | b);
//	printf("%d\n", a ^ b);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS // 5�Է� =  1~5���� ���� ���Ѵ�.
//#include<stdio.h> 
//int main(void) 
//{
//	int a=0, b, c=0;
//		scanf("%d", &b);
//
//	while (a < b)
//	{
//		a++;
//		c = c + a;       //c=c+a
//	}
//
//	printf("%d", c);
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h> 
//int main(void)
//{
//	int i = 1, num;
//	scanf("%d", &num);
//	
//	while (i <= num)
//	{
//		printf("while �� ���� %d �� ����\n", i);
//		
//		i++;
//		
//	}
//	printf("���α׷� ����\n");
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS  // ģ����� Ǭ ���� 
//#include<stdio.h> 
//int main(void)
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	scanf("%d %d", &a, &b);
//
//	if (a > b)
//	{
//		d = a;
//		c = b;
//	}
//	else {
//		c = a;
//		d = b;
//	}
//
//	while (c <= d)
//	{
//		printf("%d ", c);
//
//		++c;
//
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h> 
//int main(void)
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a > b && b<c && a>c)
//	{
//		printf("%d %d %d", a, b, c);
//	}
//	else if (b > a && b > c && a > c)
//	{
//		printf("%d %d %d", b, a, c);
//	}
//	else if (c > a && c > b && a > b)
//	{
//		printf("%d %d %d", c, a, b);
//	}
//	else if
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h> 
//int main(void)
//{
//	int a;
//	scanf("%d", &a);
//	if(a % 2 == 1)
//		printf("oh my god");
//	else
//		printf("enjoy");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h> 
//int main(void)
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//
//	while (a <= b)
//	{
//		if (a % 2 != 0)
//		printf("%d ", a);
//		a++;
//		
//	}
//	
//	
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h> 
//int main(void)
//{
//	while (1)
//	{
//		int a, b, c;
//		scanf("%d %d", &a, &b);
//		c = a + b;
//		printf("%d\n", c);
//		
//		if (a == 0 && b == 0)
//			break;
//	}
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h> 
//int main(void)
//{
//	int i, num;
//	scanf("%d", &num);
//
//	for(i = num; i >= 1; i--)
//	{
//		printf("%d ", i);
//	}
//	printf("\n���α׷�	����\n");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS  // �ڵ�� 1258
//#include<stdio.h> 
//int main(void)
//{
//	int a, b, c = 0;
//	scanf("%d", &a);
//
//	for (b = 1; b <= a; b++)
//	{
//		c = c + b;
//	}
//	printf("%d", c);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS  // �ڵ��1265
//#include<stdio.h> 
//int main(void)
//{
//	int a, b;
//	scanf("%d", &a);
//	for (b = 1; b <= 9; b++)
//	{
//		printf("%d * %d = %d\n", a, b, a * b);
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS // 3�� �ڵ�� 1259 
//#include<stdio.h> 
//int main(void)
//{
//	int a, b, sum = 0;
//	scanf("%d", &a);
//	for (b=1; b <= a; b++)
//	{
//		if (b % 2 == 0)
//		{
//			sum = sum + b;
//		}
//	}
//	printf("%d", sum);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS // 4�� ��� ���ϱ�
//#include<stdio.h> 
//int main(void)
//{
//	int a, b,i,c=0;
//	scanf("%d %d", &a, &b);
//	for (i =a; i <=b; i++)
//	{
//		if (i % 4 == 0)
//			c = c + i;
//	}
//
//	printf("%d", c);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS   //Ȧ¦ 0�ʱ�ȭ
//#include<stdio.h> 
//int main(void)
//{
//	int a;
//	while (1)
//	{
//		scanf("%d", &a);
//		printf("�ڿ����� �Է��ϼ���(����� 0) : %d\n",a);
//		if (a == 0)break;
//		else if (a % 2 == 0)
//		printf("%d �� ¦��", a);
//		else
//		printf("%d �� Ȧ��", a);
//	}
//		return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS   //��հ�
//#include<stdio.h> 
//int main(void)
//{
//	double a= 0 , n= 0, c;
//	for (c = -1; a >= 0; c++)
//	{
//		scanf("%lf", &a);
//		if (a >= 0)
//		{
//			n += a;
//		}
//	}
//	printf("%.2lf", n / c);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h> 
//int main(void)
//{
//	int n, k = 0, i;
//	scanf("%d", &n);
//	for (i = 1; k <= n; i++)
//	{
//		k += i;
//	}
//	printf("%d %d", i - 1, k);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS  //�ڵ�� 1274
//#include<stdio.h> 
//int main(void)
//{
//	int a, b, c =0;
//	scanf("%d", &a);
//	for (b = 2; b < a; b++)
//	{
//		c++;
//	if (a % b == 0)
//	{
//		printf("�Ҽ��ƴ�");
//		break;
//	}
//	}
//	if (c == b - 2)
//	{
//		printf("�Ҽ�");
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS //�ڵ�� 1277
//#include<stdio.h> 
//int main(void)
//{
//	int a, c;
//	scanf("%d", &a);
//	for (int i = 1; i <= a; i++)
//	{
//		scanf("%d", &c);
//		if (i == 1)
//			printf("%d", c);
//
//		if (a / 2 + 1 == i)
//			printf("%d", c);
//
//		if (i == a)
//			printf("%d", c);
//	}
//
//
//	return 0;
//}

//#include<stdio.h>
//int main() 
//{
//	int i;
//
//	for (i = 1; i <= 10; i++)
//	{
//		if (i % 2 != 0)
//
//			continue;
//
//		printf("%d ", i);
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int num;
//	do {
//		printf("�ڿ�����	�Է��ϼ���(�����	0):");
//		scanf("%d", &num);
//		if (num % 2)
//		{
//			printf("%d	��	Ȧ��!\n", num);
//		}
//		else
//		{
//			printf("%d	��	¦��!\n", num);
//		}
//	} while (num != 0);
//	printf("�����մϴ�!\n");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h> 
//int main(void)
//{
//	int i, j;
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= 5; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS // 1352
//#include<stdio.h> 
//int main(void)
//{
//	int i, j,n;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//			printf("*");
//		printf("\n");
//	}
//	
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS // 1353
//#include<stdio.h>
//int main(void)
//{
//	int n, i, j;
//	scanf("%d", &n);
//	for (i = 1;i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		printf("*");
//		printf("\n");
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS  //1354
//#include<stdio.h>
//int main(void)
//{
//	int n, i, j;
//	scanf("%d", &n);
//	for (i = n; i >= 0; i--)
//	{
//		for (j = 1; j <= i; j++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS  //1355
//#include<stdio.h> 
//int main(void)
//{
//	int i, j, n, k;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = n;j >= i; j--)
//		printf("*");
//		printf("\n");
//		for (k = 1; k <= i; k++)
//			printf(" ");
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS //1357
//#include<stdio.h> 
//int main(void)
//{
//	int i, j, n;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//	for (j = 1; j <= i; j++)
//		printf("*");
//		printf("\n");
//	}
//	for (i = n-1; i > 0; i--)
//	{
//	for (j = 1; j <= i; j++)
//		printf("*");
//		printf("\n");
//	}
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS  //1358 �Ƕ�̵�
//#include<stdio.h> 
//int main(void)
//{
//	int i, j, n;
//	scanf("%d", &n);
//	for(i=1;i>=n;i++)
//	{
//	for (j=1;j<=i; j++)
//		printf("*");
//		printf("\n");
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS  //1358 �Ƕ�̵� 
//#include<stdio.h>
//int main()
//{
//	int i, j, n;
//	scanf("%d", &n);
//	n = (n + 1) / 2;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n-i ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <=2*i-1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#define _crt_secure_no_warnings //���Ƕ�̵� 160��
//#include<stdio.h> 
//int main(void)
//{
//	int i, j, n;
//	scanf("%d", &n);
//	for (;;)
//	{
//		for (;;)
//		{
//			printf("");
//		}  
//		for (;;)
//		{
//			printf("");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main(void)    //  160 ���ﰢ��
//{
//	int n,i,j,k;
//	scanf("%d", &n);
//	for (i = n; i > 0; i--)
//	{
//	for (j = n; j > i; j--)
//		printf(" ");
//	for (k = i * 2 - 1; k > 0; k--)
//		printf("*");
//		printf("\n");
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS // 161
//#include<stdio.h>
//int main(void)
//{
//	int i, j;
//	int n1, n2 = 1;
//	scanf("%d",&n1);
//	for (i = 1; i <= n1; i++) {
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d ", n2++);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS //162 �ڰ�����
//#include<stdio.h>
//int main(void)
//{
//	int n;
//	int i, j;
//	char alpha = 'A';
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) 
//	{
//		for (j = i ; j <= n; j++)
//		{
//			printf("%c ", alpha++);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS  //165 (1)
//#include<stdio.h>
//int main(void)
//{
//	int a,b=0,c=0,i;
//	for (i=1;i<=20; i++)
//	{
//		scanf("%d", &a);
//		if (a == 0)break;
//		b += a;
//		c = b / i;
//	}
//	
//	printf("%d %d", b, c);
//	return 0;
//}


//int main(void) //2
//{
//	int a,i,result;
//	
//	scanf("%d", &a);
//	for (i = 1; ; i++)
//	{
//		result = a * i;
//		printf("%d ", result);
//		
//		if (result % 10 == 0)
//			break;
//	}
//	return 0;
//}


//int main(void)  //165 3
//{
//	int n,i,j;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = n-1; i > 0 ; i--)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main(void)    // 165 4
//{
//	int n,i,j,k;     //n == a , i=i , j =k, k =j
//	scanf("%d", &n);
//	for (i = n; i > 0; i--)
//	{
//	for (j = n; j > i; j--)
//		printf(" ");
//	for (k = i * 2 - 1; k > 0; k--)    // i=n �ε� n*2-1 �� ������ ��  ��: 3�� 5����(������ ��)
//		printf("*");
//		printf("\n");
//	}                             // ���ﰢ��
//	for (i = 1; i <= n - 1; i++)
//	{
//		for (j = n - 2; j >= i; j--)
//			printf(" ");
//		for (k = 0; k < i * 2 + 1; k++)
//			printf("*");
//			printf("\n");
//	}                                // �ﰢ��
//	return 0;
//}

//int main()    // nArr = number Array
//{
//	int nArr[5];
//	int i, sum = 0;
//
//	nArr[0] = 10, nArr[1] = 20, nArr[2] = 30, nArr[3] = 40, nArr[4] = 50; // nArr[] = {10,20,30,40,50};�� ����
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("nArr[%d] = %d\n", i, nArr[i]);
//	}
//	printf("�迭��ҿ� �����  ���� �� : %d\n", sum);
//	return 0;
//}


//int main(void) //�ڵ�� 1074
//{
//	int a;
//	scanf("%d", &a);
//	while (1)
//	{
//		if (a == 0)
//		{
//			break;
//		}
//		printf("%d\n", a);
//		a--;
//	}
//
//	return 0;
//}

//int main(void) //1075
//{
//	int a;
//	scanf("%d", &a);
//	while (1)
//	{
//		printf("%d\n", --a);
//		if (a == 0) break;
//		
//	}
//
//	return 0;
//}

//int main(void) //1076
//{
//	char a,i;
//	i = 'a';
//	scanf("%c", &a);
//	while (1)
//	{
//		if (i <= a)
//		{
//			printf("%c ", i);
//			i++;
//		}
//		if (i > a)break;
//	}
//
//	return 0;
//}

//int main(void) //1251
//{
//	int a;
//	a = 1;
//	while (1)
//	{
//		printf("%d ", a++);
//		if (a > 100)break;
//	}
//	return 0;
//}

//int main(void) //1252
//{
//	int n,i = 1;
//	scanf("%d", &n);
//	while (1)
//	{
//		printf("%d ", i);
//		i++;
//		if (i > n)break;
//	}
//
//	return 0;
//}

//int main(void)  // 171 - �ڰ�1 
//{
//	int i, j;
//	char arr[10];
//	for (i = 1; i <= 10; i++)
//		scanf(" %c", &arr[i]);
//	for (j = 1; j <= 10; j++)
//		printf("%c", arr[j]);
//
//	return 0;
//}


//int main(void)  //287 �ڰ�2
//{
//	char arr[10];
//	scanf("%s", arr);
//	printf("%s%s", arr, arr);
//
//	return 0;
//}                      // ++i = i�� (��ü��) ���ϱ� i+1�� �ƴ�


//int main(void)
//{
//	int num[10];
//	for (int i = 0; i < 10; i++)
//	{
//		num[i] = i+1;
//	}
//	for (int j = 0; j <= 9; j++)
//	{
//		printf("%d ", num[j]);
//	}   
//	printf("\n");
//	return 0;
//}


//int main(void)
//{
//	char n[5];
//	printf("�����Է� : ");
//	for (int i = 0; i < 5; i++)
//		scanf(" %c", &n[i]);
//	for (int i = 0; i < 5; i++)
//		printf("%c ", n[i]);
// 
//
//	return 0;
//}


//int main(void)
//{
//	int cut = 0;
//	char sName[100], sNum[10];
//
//	printf("�̸��� ����� �Է��ϼ��� : ");
//	scanf("%s", sName);
//	printf("�й��� �Է��ϼ��� : ");
//	scanf("%s", sNum);
//
//	while (sName[cut] != '\0')
//		cut++;
//
//	printf("����� �̸��� %s(%d���� �̰� �й��� %s�Դϴ�\n", sName,cut,sNum);
//
//	return 0;
//}


//int main(void)
//{
//	char str[50] = "I Like C Programming!!";
//	printf("string : %s\n", str);
//
//	str[8] = '\0';               //	�ε���	8��	��	���ڷ�	����
//	printf("string : %s\n", str);
//
//	str[6] = '\0';                //	�ε���	6��	��	���ڷ�	����
//	printf("string : %s\n", str);
//
//	str[1] = 0;         //	�ε���	1��	���ڸ�	��	���ڷ�	����(�ƽ�Ű	�ڵ��	�ι���	����)
//	printf("string : %s\n", str);
//
//
//	return 0;
//}

//int main(void)   //�հ� ���
//{
//	int n[10];
//	int sum=0, avg=0,i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &n[i]);
//			sum = sum + n[i];
//	}
//	avg = sum / 10;
//	printf("�Է��� ���� �հ� : %d\n", sum);
//	printf("�Է��� ���� ��� : %d", avg);
//	return 0;
//}

//int main(void)
//{
//	int a[50], i, b = 0;
//	for (i = 0; i < 50; i++)
//	{
//		scanf("%d", &a[i]);
//		if (a[i] >= 1000)
//		{
//			b = a[i];
//			while (i != 0)
//			{
//				i--;
//				if (a[i] < b)
//					b = a[i];
//			}
//			break;
//		}
//	}
//	printf("%d", b);
//	return 0;
//}


//int main(void)
//{
//	int n[10];
//	int i, max = 0, min = 10000;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &n[i]);
//			if (n[i] < 100)
//			{
//				if (n[i] >= max)
//					max = n[i];
//			}
//			else if (n[i] >= 100)
//			{
//				if (n[i] <= min)
//					min = n[i];
//			}
//	}
//	if (max < 1)
//		printf("%d ", 100);
//	else
//		printf("%d ", max);
//
//	if (min >= 10000)
//		printf("%d ", 100);
//	else
//		printf("%d ", min);
//	return 0;
//}


//int main(void)
//{
//	int n[10]={0};
//	int sum = 0, avg = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &n[i]);
//		if (i % 2 == 0)
//			avg += n[i];
//		else if (i % 2 != 0)
//			sum += n[i];
//	}
//	printf("sum : %d\n", sum);
//	printf("aavg : %.1f", avg / 5.0);
//
//
//	return 0;
//}


//int main(void)
//{
//	int a[5] = { 95, 75, 85, 100, 50 };
//	int i, j, temp,min;                 //temp �ӽ÷� ����
//	for (i = 0; i <= 3; i++)
//	{
//		min = i;
//		for (j = i + 1; j <= 4; j++)
//		{
//			if (a[min] > a[j])
//				min = j;
//		}
//		if (i != min)
//		{
//			temp = a[i];
//			a[i] = a[min];
//			a[min] = temp;
//		}
//	}
//	for (i = 0; i < 5; i++)
//		printf("%d ", a[i]);
//
//	return 0;
//}


//int main(void)   //�ڵ�� 1990
//{
//	char a[501];
//	int sum = 0;
//	scanf("%s", a);
//	for (int i = 0; a[i] != 0; i++)
//	{
//		sum += (int)a[i] - 48;
//	}
//	if(sum % 3 == 0)
//		printf("1");
//	else
//	printf("0");
//
//
//	return 0;
//}


//int main(void)  // 196 �ڰ����� 1
//{
//	char t;
//	int n[26] = { 0 };
//	int i = 0;
//	while (1)
//	{
//		scanf(" %c", &t);
//		if (t > 90 || t < 65) break;
//		n[t - 65]++;
//	}
//	while (1)
//	{
//		if (n[i] > 0)
//		{
//			printf("%c : %d\n", i + 65, n[i]);
//		}
//		i++;
//		if (i > 25)break;
//	}
//	return 0;
//}

//int main(void)     //198 �ڰ�����2
//{
//	int num, i;
//	int n[100] = { 0 };
//	while (1)
//	{
//		scanf(" %d", &num);
//		if (num == 0)break;
//		n[num / 10]++;
//	}
//	for (i = 0; i <= 99; i++)
//	{
//		if (n[i] > 0)
//		{
//			printf("%d : %d\n", i, n[i]);
//		}
//	}
//
//	return 0;
//}
                                                                          
//int main(void)   //202 �ڰ����� - 4 ��� Ǫ����
//{
//	int i, j;
//	int n[3][5]={1,2,3};
//	
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%2d ", n[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
//int main(void)  202 �ڰ����� -4
//{
//    int i, j;
//    int n[3][5] = { {5, 8, 10, 6, 4}, {11, 20, 1, 13, 2}, {7, 9, 14, 22, 3} };
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 5; j++)
//        {
//            printf("%2d ", n[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//int main(void)   //205�ڰ����� -5
//{
//    int i, j;
//    int a[2][4], b[2][4];
//    printf("first array\n");
//    for (i = 0; i < 2; i++)
//    {
//        for (j = 0; j < 4; j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    printf("second array\n");
//    for (i = 0; i < 2; i++)
//    {
//        for (j = 0; j < 4; j++)
//        {
//            scanf("%d", &b[i][j]);
//        }
//    }
//    printf("\n");
//    for (i = 0; i < 2; i++)
//    {
//        for (j = 0; j < 4; j++)
//        {
//            printf("%2d ", a[i][j] * b[i][j]);
//        }
//        printf("\n");
//    }
//
//
//    return 0;
//}

//int main(void)   //�ι�° ���� ���
//{ 
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a > b && b > c || c > b && b > a)
//        printf("%d", b);
//    else if (b > c && c > a || a > c && c > b)
//        printf("%d", c);
//    else if (b > a && a > c || c > a && a > b)
//        printf("%d", a);
//
//
//    return 0;
//}

//int main(void)    //�Լ� �ݺ��ϴ� �κ���?
//{
//    printf("  *\n");
//    printf(" ***\n");
//    printf("*****\n");
//
//    printf("  *\n");
//    printf(" ***\n");
//    printf("*****\n");
// 
//    return 0;
//}

//#include <stdio.h>
////	�Լ�	����	: ��ȯ�ڷ���, �Լ��̸�,�Ű����� ��������Ͽ�	�Լ��� ������ Ư¡��	���
//void printStar();   //<-- �Լ���������
// 
// 
//int main(void)
//{
//    printStar();	//	�Լ�	ȣ��
//    printStar();	//	�Լ�	ȣ��
//    return 0;
//}
//    //�Լ�	����                   //��ȯ�� �Լ� �̸�(�Ű�����)
//void printStar()                //{
//{                               //    �Լ� ��ü
//    printf("  *\n");            //}   
//    printf(" ***\n");
//    printf("*****\n");
//}

//void Area(float R)          //221 �ڰ����� 2
//{
//    printf("%.2f\n", R*R*3.14);
//}
//
//int main()
//{
//    float a;
//    scanf("%f", &a);
//
//    Area(a);
//    return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int GetMax(int num1, int num2, int num3); //���� ū ��
//int GetMin(int num1, int num2, int num3);//���� ���� ��
//int main()
//{
//    int num1, num2, num3;
//    printf("�� ���� ���� �Է� : ");
//    scanf("%d %d %d", &num1, &num2, &num3);
//    printf("���� ū �� : %d\n", GetMax(num1, num2, num3));
//    printf("���� ���� �� : %d\n", GetMin(num1, num2, num3));
//    return 0;
//}
//int GetMax(int num1, int num2, int  num3)
//{
//    int sum;
//    sum = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
//    return sum;
//}
//int GetMin(int num1, int num2, int  num3)
//{
//    int sum;
//    sum = num1 < num2 ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);
//    return sum;
//}
