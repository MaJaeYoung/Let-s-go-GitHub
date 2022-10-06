

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


//void insertion_sort(int arr[], int n) {
//	int i, j, key;
//	for (i = 1; i <= n - 1; i++) {
//		key = arr[i];
//		for (j = i - 1; j >= 0 && key < arr[j]; i--) {
//			arr[j + 1] = arr[j];
//			arr[j + 1] = key;
//		}
//	}
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


//�� ����
//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//
//void insertion_sort(int arr[], int first, int last, int gap) {
//	int i, j, key;
//	for (i = first + gap; i <= last; i= i+gap ) { /*i�� ��� �����ؾ� �ұ�� ?*/
//		key = arr[i];
//		for (j = i - gap; j >= 0 && arr[j] > key; j = j - gap) {
//			arr[j+gap] = arr[j];					//������ j+1�� j�� �־����� ������ gap��ŭ �ڷ� �и� ���� �����ؾ��Ѵ�.
//		}
//		arr[j+gap] = key;						//���������� j+1�� key�� �ִ� ���� �ƴ� gap��ŭ ���� ���� �����ؾ��Ѵ�.
//	}
//}
//
//void shell_sort(int arr[], int n) {
//	int i, gap;
//	for (gap = n / 2; gap>=1; gap = gap/2)	 /*//���� ���ϱ� gap ���� Ȱ��*/ {
//		if (gap % 2 == 0) {
//				gap++;						//gap�� ¦���� �� 1�� ���ϴ� ���� ���� ������ �м��Ǿ���.
//		}
//		for (i = 0; i < gap; i++) {
//			insertion_sort(arr, i, n-1, gap);
//		}
//	}
//}
//
//int main() {
//	int n = MAX_SIZE;
//	srand(time(NULL));
//	for (int i = 0; i < n; i++) {
//		arr[i] = rand() % 100;
//	}
//
//	shell_sort(arr, n);
//
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//���� 
//#include<stdio.h>
//#define MAX_STACK_SIZE 100
//
//int stack[MAX_STACK_SIZE];
//int top = -1;
//
////��ȭ���� Ȯ��
//int is_full() {
//    if (top == (MAX_STACK_SIZE - 1)) return 1;
//    else return 0;	// ������ ���� ���ִ��� �˻�
//}
//
////������� Ȯ��
//int is_empty() {
//    if (top == -1) return 1;
//    else return 0;	// ������ ����ִ��� �˻�
//}
//
//void push(int n) {
//    if (is_full() == 0) {
//        top += 1;
//        stack[top] = n;
//        /*printf("%d\n", stack[top]);*/
//    }
//    else printf("stack overflow");
//	// ���ÿ� ���ο� ��Ҹ� ����, �� ���� ������ ���� ���� �ʾҴ��� �˻�
//}
//
//int pop() {
//    if (is_empty() == 0) {
//        int n = stack[top];
//        top -= 1;
//        return n;
//    }
//    else printf("stack underflow");
//    // ���ÿ� �ϳ��� ��Ҹ� ����, �� ���� ������ ����ִ��� �˻�
//}
//
//int main() {
//    push(1);
//    push(2);
//    push(3);
// 
//    printf("%d\n", pop());
//    printf("%d\n", pop());
//    printf("%d\n", pop());
//
//    return 0;
//}


//������ �迭 ����
#include<stdio.h>
#define MAX_STACK_SIZE 100
struct StackType {
	int data[MAX_STACK_SIZE];
	int top;
};

// ���� �ʱ�ȭ �Լ�
void init_stack(struct StackType* p)
{
	p->top = -1;
}

// ���� ���� ���� �Լ�
int is_empty(struct StackType* p)
{
	return p->top == -1 ? 1 : 0;
}

// ��ȭ ���� ���� �Լ�
int is_full(struct StackType* p)
{
	return p->top == MAX_STACK_SIZE - 1 ? 1 : 0;
}

// �����Լ�
void push(struct StackType* p, int item)
{
	if (is_full(p)) {
		printf("overflow");
	}
	else {
		p->data[++p->top] = item;
	}
}

// �����Լ�
int pop(struct StackType* p)
{
	if (is_empty(p)) {
		printf("error");
	}
	else {
		return p->data[p->top--];
	}
}

int main(void)
{
	struct StackType s;  // ������ �������� ����

	init_stack(&s);   // �Լ��� ȣ���� �� �Ű������� ������ �ּҸ� ����
	push(&s, 1);
	push(&s, 2);
	push(&s, 3);

	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));
}
