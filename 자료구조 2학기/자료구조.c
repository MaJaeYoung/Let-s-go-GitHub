

//for (int i = 1; i <= 2 * n; i++)    //�ð����⵵ 4n ���ǥ��� O(n)
//sum = sum + i;

//for (int i = 1; i <= 2 ^ n; i++)   //�ú� 2^n+1  ��ǥ O(2^n)
//sum = sum + i;                      // ^�� ����ǥ�� 

//for (int i = 1; i <= 2 ^ n; i = i*2)   // �ú� 2n  ��ǥ O(n)
//sum = sum + i;
// i = 1(2^0)   2^1 2^3 2^4 --- 2^n �������� 0���ͽ����ؼ� n+1


//#define _CRT_SECURE_NO_WARNINGS    //2���� ���� ��ȯ
//#include<stdio.h>
//int main(void) {
//	int a=1, b=2;
//	int temp;
//	printf("%d %d\n", a, b);
//	temp = a;
//	a = b;
//	b = temp;
//	printf("%d %d", a, b);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS //�� ū��
//#include<stdio.h>
//int main(void) {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	if (a > b) {
//		printf("%d", a);
//	}
//	else
//		printf("%d", b);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS   // 1���� n���� ��
//#include<stdio.h>
//int main(void) {
//	int n , add=0;
//	scanf("%d", &n);
//	for(int i=1; i <= n; i++) {
//		add += i;
//	}
//	printf("%d", add);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS  �迭 n�� ����
//#include<stdio.h>
//
//int main(void) {
//	int arr[3] ={1,2,3};
//	int n;
//
//	scanf("%d", &n);
//	printf("%d", arr[n-1]);
//
//	return 0;
//}



//#define _crt_secure_no_warnings        //�迭dp ��� ���� ���ϱ�
//#include<stdio.h>
//
//int main(void) {
//	int arr[3] ={1,2,3};
//	int n=0;
//	 for(int i=0;i<3;i++){
//		n += arr[i];
//	}
//
//	printf("%d", n);
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS   // ���丮�� ���ϱ�
//#include<stdio.h>
//
//int fac(int n) {
//	if (n == 1)
//		return 1;
//	else
//	return n * fac(n - 1);   // 5 * 4������ 4��Ʈ�� �𸣴ϱ� 4ȣ�� 4*3��Ʈ
//}							 //�̷������� ��� ȣ���ؼ� �������� 1������ 1���� ���Ѵ�
//
//
//int main() {
//	int num;
//	scanf("%d", &num);
//	printf("%d", fac(num));
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS   // 
//#include<stdio.h>
//
//int fibo(int n) {
//	if (n ==1 || n==2)    // ���� ����
//		return 1;
//	else
//		return fibo(n-1)+ fibo(n-2);
//}							
//
//
//int main(void) {
//	int num;
//	scanf("%d", &num);
//	printf("%d", fibo(num));
//
//	return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS   // �ϳ���ž
//#include<stdio.h>
//
//void hanoi_tower(int n, char start, char mid, char end) {
//	if (n == 1) {
//		//1.
//			printf("%d�� ������ %c���� %c�� �ű��\n", n, start, end);
//	}
//	else {
//		/*2.*/   hanoi_tower(n - 1, start, end, mid);
//		/*3.*/	 printf("%d�� ������ %c���� %c�� �ű��\n", n, start, end);
//		/*4.*/   hanoi_tower(n - 1, mid, start, end);
//	}
//}
//
//int main(void) {
//	int num;
//	char a = 'A', b = 'B', c = 'C';
//	scanf("%d", &num);
//	hanoi_tower(num, a, b, c);
//	
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS   // �˰��� 9�� ��ȯ�� 3
//#include<stdio.h>
//
//int recursive(int n) {
//	printf("%d\n", n);
//	if (n < 1) {
//		return -1;
//	}
//		
//	else {
//		return(recursive(n - 3)+1);
//	}
//		
//}
//
//int main(void) {
//
//	recursive(10);
//	
//	return 0;
//}


//#define _crt_secure_no_warnings   //
//#include<stdio.h>
//int i = 1;
//addplus(int n) {
//	if (n == 1) {
//		return 0;
//	}
//	else {
//		
//		return(addplus(n - 1) + i);
//		i++;
//	}
//}
//int main() {
//	int num;
//	scanf("%d", &num);
//	addplus(num);
//
//	return 0;
//}



//#include <stdio.h>          //������ ���� �߰�
//#include<stdlib.h>
////#include<time.h>     // �ð�����
//int main() {
//	int arr[10];
//	srand(time(null));
//	for (int i = 0; i < 10; i++) {
//		arr[i] = rand()%100;
//	}
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//���� ���� �˰���
//#include<stdio.h>                
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//
//int n = 10;;							// ������ ������ ����
//int list[10];
//void selection_sort(int list[], int n) {
//	int min, temp;
//	for (int i = 0; i < n-1; i++) {		// �������� �˰���
//		for (int j = i; j < n - 2; j++) {
//				min = j;
//				if (min > list[j])
//					min = j;
//			}
//		}
//		
//	}			
//}
//int main() {
//	srand(time(NULL));					// ���� ���� �Լ�
//	for (int i = 0; i < 10; i++)
//		list[i] = rand() % 100;			// ������ ��ȯ �Լ�
//	selection_sort(list, n);
//	for (int i = 0; i < 10; i++)
//		printf("%d ", list[i]);
//}


 //���� ���� �˰���
//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//
//int n = 10;							// ������ ������ ����
//int arr[10];
//
//void selection_sort(void) {
//	int  least;							//�迭�� �ּҰ��� �ε���
//	int tmp;							//�ӽ� ���� ����
//	
//	for (int i = 0; i <= 8; i++)
//	{
//		least = i;
//		for (int j = i + 1; j <= 9; j++) {
//			if (arr[j] < arr[least]) {
//				least = j;
//			}
//		}
//
//		tmp = arr[i];
//		arr[i] = arr[least];
//		arr[least] = tmp;
//	}
//}
//
//
//int main() {
//	srand(time(NULL));				// ���� ���� �Լ�
//	int n = MAX_SIZE;
//
//	for (int i = 0; i < n; i++) {
//		arr[i] = rand() % 100;		// ������ ��ȯ �Լ�
//	}
//
//	selection_sort();
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


// ���� ���� �˰���
//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//
//int n= 10;
//int arr[10];
//void insertion_sort() {
//	int key;
//	int j;
//
//	for (int i = 1; i < n; i++) 
//	{
//		key = arr[i];
//		for (j = i - 1; j >= 0 && arr[j] > key; j--) {
//			arr[j + 1] = arr[j];
//		}
//		/*j = i - 1;
//		for()
//
//		while (j>=0 && arr[j] > key)
//		{
//			arr[j + 1] = arr[j];
//			j -= 1;
//		}*/
//		arr[j + 1] = key;
//	}
//}
//
//int main() {
//	srand(time(NULL));
//	int n = MAX_SIZE;
//	for (int i = 0; i < n; i++) {
//		arr[i] = rand() % 100;
//	}
//
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	insertion_sort();
//
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}



//���� ���� �˰���
//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//int n = 10;
//
//void Bubble_sort(){
//	int temp;
//	for (int i = n-1; i >= 1; i--) {				//  === for (int i = 9; i > 0; i--) 
//		for (int j = 0; j <= i - 1; j++) {			// === for (int j = 0; j < i ; j++) 
//			if (arr[j] > arr[j + 1]) {
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main(){
//	srand(time(NULL));
//	int n = MAX_SIZE;
//	for (int i = 0; i < n; i++) {
//		arr[i] = rand() % 100;
//	}
//
//	Bubble_sort();
//
//	//���ĵ� �迭 ���
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


