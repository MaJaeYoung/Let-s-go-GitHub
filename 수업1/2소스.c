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
//		printf("500원입니다.");
//		break;
//	case'1':
//		printf("750원입니다.");
//			break;
//	case'2':
//		printf("1000원입니다.");
//		break;
//	case'3':
//		printf("0원입니다.");
//		break;
//		default:
//		}
//	printf("최종요금%d원\n", a);
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
//	printf("당신의 평균 : %.2f\n", q);
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


//#define _CRT_SECURE_NO_WARNINGS //시간 더하기 (분)
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
//	int num = 0;            //초기화
//	while (1)                //무한반복
//	{
//		if (num >= 5)	   //반복을 멈추기 위한조건
//			break;
//		num++;	       //반복을 멈추는데 영향을 주는 연산
//		printf("while 내부실행 : %d\n", num);
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
//	printf("\n프로그램 종료\n");
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

//#define _CRT_SECURE_NO_WARNINGS // 5입력 =  1~5까지 전부 더한다.
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
//		printf("while 문 내부 %d 번 실행\n", i);
//		
//		i++;
//		
//	}
//	printf("프로그램 종료\n");
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS  // 친구들과 푼 문제 
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
//	printf("\n프로그램	종료\n");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS  // 코드업 1258
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

//#define _CRT_SECURE_NO_WARNINGS  // 코드업1265
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

//#define _CRT_SECURE_NO_WARNINGS // 3번 코드업 1259 
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

//#define _CRT_SECURE_NO_WARNINGS // 4의 배수 더하기
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

//#define _CRT_SECURE_NO_WARNINGS   //홀짝 0초기화
//#include<stdio.h> 
//int main(void)
//{
//	int a;
//	while (1)
//	{
//		scanf("%d", &a);
//		printf("자연수를 입력하세요(종료는 0) : %d\n",a);
//		if (a == 0)break;
//		else if (a % 2 == 0)
//		printf("%d 는 짝수", a);
//		else
//		printf("%d 는 홀수", a);
//	}
//		return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS   //평균값
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

//#define _CRT_SECURE_NO_WARNINGS  //코드업 1274
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
//		printf("소수아님");
//		break;
//	}
//	}
//	if (c == b - 2)
//	{
//		printf("소수");
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS //코드업 1277
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
//		printf("자연수를	입력하세요(종료는	0):");
//		scanf("%d", &num);
//		if (num % 2)
//		{
//			printf("%d	는	홀수!\n", num);
//		}
//		else
//		{
//			printf("%d	는	짝수!\n", num);
//		}
//	} while (num != 0);
//	printf("종료합니다!\n");
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


//#define _CRT_SECURE_NO_WARNINGS  //1358 피라미드
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

//#define _CRT_SECURE_NO_WARNINGS  //1358 피라미드 
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

//#define _crt_secure_no_warnings //역피라미드 160쪽
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

//int main(void)    //  160 역삼각형
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

//#define _CRT_SECURE_NO_WARNINGS //162 자가진단
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
//	for (k = i * 2 - 1; k > 0; k--)    // i=n 인데 n*2-1 은 마지막 줄  예: 3은 5가됨(마지막 줄)
//		printf("*");
//		printf("\n");
//	}                             // 역삼각형
//	for (i = 1; i <= n - 1; i++)
//	{
//		for (j = n - 2; j >= i; j--)
//			printf(" ");
//		for (k = 0; k < i * 2 + 1; k++)
//			printf("*");
//			printf("\n");
//	}                                // 삼각형
//	return 0;
//}

//int main()    // nArr = number Array
//{
//	int nArr[5];
//	int i, sum = 0;
//
//	nArr[0] = 10, nArr[1] = 20, nArr[2] = 30, nArr[3] = 40, nArr[4] = 50; // nArr[] = {10,20,30,40,50};도 가능
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("nArr[%d] = %d\n", i, nArr[i]);
//	}
//	printf("배열요소에 저장된  값의 합 : %d\n", sum);
//	return 0;
//}


//int main(void) //코드업 1074
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

//int main(void)  // 171 - 자가1 
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


//int main(void)  //287 자가2
//{
//	char arr[10];
//	scanf("%s", arr);
//	printf("%s%s", arr, arr);
//
//	return 0;
//}                      // ++i = i값 (자체에) 더하기 i+1은 아님


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
//	printf("문자입력 : ");
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
//	printf("이름을 영어로 입력하세요 : ");
//	scanf("%s", sName);
//	printf("학번을 입력하세요 : ");
//	scanf("%s", sNum);
//
//	while (sName[cut] != '\0')
//		cut++;
//
//	printf("당신의 이름은 %s(%d글자 이고 학번은 %s입니다\n", sName,cut,sNum);
//
//	return 0;
//}


//int main(void)
//{
//	char str[50] = "I Like C Programming!!";
//	printf("string : %s\n", str);
//
//	str[8] = '\0';               //	인덱스	8번	널	문자로	저장
//	printf("string : %s\n", str);
//
//	str[6] = '\0';                //	인덱스	6번	널	문자로	저장
//	printf("string : %s\n", str);
//
//	str[1] = 0;         //	인덱스	1번	문자를	널	문자로	저장(아스키	코드로	널문자	저장)
//	printf("string : %s\n", str);
//
//
//	return 0;
//}

//int main(void)   //합계 평균
//{
//	int n[10];
//	int sum=0, avg=0,i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &n[i]);
//			sum = sum + n[i];
//	}
//	avg = sum / 10;
//	printf("입력한 수의 합계 : %d\n", sum);
//	printf("입력한 수의 평균 : %d", avg);
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
//	int i, j, temp,min;                 //temp 임시로 저장
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


//int main(void)   //코드업 1990
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


//int main(void)  // 196 자가진단 1
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

//int main(void)     //198 자가진단2
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
                                                                          
//int main(void)   //202 자가진단 - 4 어떻게 푸는지
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
//int main(void)  202 자가진단 -4
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

//int main(void)   //205자가진단 -5
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

//int main(void)   //두번째 숫자 출력
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

//int main(void)    //함수 반복하는 부분은?
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
////	함수	선언	: 반환자료형, 함수이름,매개변수 등을기술하여	함수의 외형적 특징을	기술
//void printStar();   //<-- 함수원형정의
// 
// 
//int main(void)
//{
//    printStar();	//	함수	호출
//    printStar();	//	함수	호출
//    return 0;
//}
//    //함수	정의                   //반환형 함수 이름(매개변수)
//void printStar()                //{
//{                               //    함수 몸체
//    printf("  *\n");            //}   
//    printf(" ***\n");
//    printf("*****\n");
//}

//void Area(float R)          //221 자가진단 2
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
//int GetMax(int num1, int num2, int num3); //가장 큰 수
//int GetMin(int num1, int num2, int num3);//가장 작은 수
//int main()
//{
//    int num1, num2, num3;
//    printf("세 개의 정수 입력 : ");
//    scanf("%d %d %d", &num1, &num2, &num3);
//    printf("가장 큰 수 : %d\n", GetMax(num1, num2, num3));
//    printf("가장 작은 수 : %d\n", GetMin(num1, num2, num3));
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
