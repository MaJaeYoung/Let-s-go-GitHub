

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
//#include<stdio.h>
//#define MAX_STACK_SIZE 100
//struct StackType {
//	int data[MAX_STACK_SIZE];
//	int top;
//};
//
//// ���� �ʱ�ȭ �Լ�
//void init_stack(struct StackType* p)
//{
//	p->top = -1;
//}
//
//// ���� ���� ���� �Լ�
//int is_empty(struct StackType* p)
//{
//	return p->top == -1 ? 1 : 0;
//}
//
//// ��ȭ ���� ���� �Լ�
//int is_full(struct StackType* p)
//{
//	return p->top == MAX_STACK_SIZE - 1 ? 1 : 0;
//}
//
//// �����Լ�
//void push(struct StackType* p, int item)
//{
//	if (is_full(p)) {
//		printf("overflow");
//	}
//	else {
//		p->data[++p->top] = item;
//	}
//}
//
//// �����Լ�
//int pop(struct StackType* p)
//{
//	if (is_empty(p)) {
//		printf("error");
//	}
//	else {
//		return p->data[p->top--];
//	}
//}
//
//int main(void)
//{
//	struct StackType s;  // ������ �������� ����
//
//	init_stack(&s);   // �Լ��� ȣ���� �� �Ű������� ������ �ּҸ� ����
//	push(&s, 1);
//	push(&s, 2);
//	push(&s, 3);
//
//	printf("%d\n", pop(&s));
//	printf("%d\n", pop(&s));
//	printf("%d\n", pop(&s));
//}

//��ȣ �˻� ���α׷�
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MAX_STACK_SIZE 100
//typedef struct StackType {
//	char data[MAX_STACK_SIZE];
//	int top;
//}StackType;
//void init_stack(struct StackType* p)
//{
//	p->top = -1;
//}
//int is_empty(struct StackType* p)
//{
//	if (p->top == -1)
//		return 1;
//	else return 0;
//
//}
//int is_full(struct StackType* p)
//{
//	if (p->top == MAX_STACK_SIZE - 1)
//		return 1;
//	else return 0;
//}
//void push(struct StackType* p, int item)
//{
//	if (is_full(p))
//		printf("�����÷ο�");
//	else
//		p->data[++(p->top)] = item;
//}
//int pop(struct StackType* p)
//{
//	if (is_empty(p))
//		printf("����÷ο�");
//	else
//		return p->data[(p->top)--];
//}
//int check_matching(char in[])
//{
//	StackType s;
//	char ch, open_ch;
//	int i, n = strlen(in);  	// n���� ���ڿ��� ���̰� �Էµ�
//	init_stack(&s);			// ������ �ʱ�ȭ
//
//	for (i = 0; i < n; i++) {
//		ch = in[i];		// ch = ���� ����
//		if (ch == '(' || ch == '[' || ch == '{')
//			push(&s, ch);
//		else if (ch == ')' || ch == ']' || ch == '}') {
//			if (is_empty(&s) == 1) {
//				printf("���� 2 ����\n");
//				return 0;
//			}
//			else {
//				open_ch = pop(&s);
//				if (((ch == ')' && open_ch == '(') ||
//					(ch == ']' && open_ch == '[') ||
//					(ch == '}' && open_ch == '{')) == 0) {
//					printf("���� 3 ����\n");
//					return 0;
//				}
//			}
//		}
//	}
//
//	if (is_empty(&s) == 0) {   // ���ÿ� ���������� ����, ����1 �Ǵ�
//		printf("����1 ����\n");
//		return 0;
//	}
//	else return 1;
//}
//int main(void)
//{
//	char p[] = "}{ A+[B-C] }";
//	if (check_matching(p) == 1)
//		printf("%s ��ȣ�˻缺��\n", p);
//	else
//		printf("%s ��ȣ�˻����\n", p);
//	return 0;
//}


//���� --> ����
//#include<stdio.h>
//#include<string.h>
//#define MAX_STACK_SIZE 100
//
//struct stacks {
//    char stack[MAX_STACK_SIZE];
//    int top;
//};
//
//void init_stack(struct stacks* s) {
//    s->top = -1;
//}
//
//char peek(struct stacks* s) {
//    if (is_empty(s)) printf("error");
//    else return s->stack[s->top];
//}
//
//
////���ð� ���õ� �Լ� ��� �ۼ�
//
//// ���� ���� ���� �Լ�
//int is_empty(struct stacks* st)
//{
//    return st->top == -1 ? 1 : 0; 
//}
//
//// ��ȭ ���� ���� �Լ�
//int is_full(struct stacks* st)
//{
//    return st->top == MAX_STACK_SIZE - 1 ? 1 : 0; 
//}
//
//// �����Լ�
//void push(struct stacks* st, int item)
//{
//    if (is_full(st)) printf("overflow");
//    else st->stack[++st->top] = item;
//}
//
//// �����Լ�
//int pop(struct stacks* st)
//{
//    if (is_empty(st)) printf("underflow");
//    else return st->stack[st->top--];
//}
//
//
////������ �켱���� �����ϴ� �Լ�
//int rank(char c) {
//    if (c == '(' || c == ')')
//        return 0;
//    else if (c == '+' || c == '-')
//        return 1;
//    else if (c == '/' || c == '*')
//        return 2;
//    else return -1;
//}
//
////���� -> ����
//void infix_to_postfix(char* s) {
//    struct stacks st;
//        char ch, c;
//        int length = strlen(s);
//        init_stack(&st);
//        for (int i = 0; i < length; i++) {
//            ch = s[i];
//
//            //�������϶�
//            if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
//                while (is_empty(&st)==0 && rank(ch) <= rank(peek(&st)) ) {
//                    printf("%c", pop(&st));
//                }
//                push(&st, ch);
//            }
//
//            //���� ��ȣ�϶� (
//            else if (ch == '(') {
//                push(&st, ch);
//            }
//
//            //������ ��ȣ�϶� )
//            else if (ch == ')') {
//                char c = pop(&st);
//                while (c != '(') {
//                    printf("%c", c);
//                    c = pop(&st);
//                }
//            }
//
//            //������(�ǿ������϶�)
//            else {
//                printf("%c", ch);
//            }
//        }
//
//    //���ÿ� �����ִ� �͵� ��� ���
//        while (is_empty(&st) == 0) {
//            printf("%c", pop(&st));
//        }
//}
//
//int main() {
//    char* s = "(2+3)*4+9";
//    printf("����ǥ����� %s\n", s);
//    printf("����ǥ����� ");
//    infix_to_postfix(s);
//    return 0;
//}


//���� ǥ�� ������ ���
//#include<stdio.h>
//#include<string.h>
//#define MAX_STACK_SIZE 100
//
//// ���� �ڵ� �߰�, ���� ����ü���� �迭�� -int-������!
//struct StackType {
//	int data[MAX_STACK_SIZE];
//	int top;
//};
//
//// ���� �ʱ�ȭ �Լ�
//void init_stack(struct StackType* p)
//{
//	p->top = -1;
//}
//
//// ���� ���� ���� �Լ�
//int is_empty(struct StackType* p)
//{
//	return (p->top == -1);
//}
//
//// ��ȭ ���� ���� �Լ�
//int is_full(struct StackType* p)
//{
//	return (p->top == (MAX_STACK_SIZE - 1));
//}
//
//// �����Լ�
//void push(struct StackType* p, int item)
//{
//	if (is_full(p)) {
//		printf("��ȭ����\n");
//		return;
//	}
//	else p->data[++(p->top)] = item;
//}
//
//// �����Լ�
//int pop(struct StackType* p)
//{
//	if (is_empty(p)) {
//		printf("�������\n");
//		return 1;
//	}
//	else return p->data[(p->top)--];
//}
//
//int peek(struct StackType* p)
//{
//	if (is_empty(p)) {
//		printf("�������\n");
//		return 1;
//	}
//	else return p->data[p->top];
//}
//
//
//int evaluate(char exp[]) {
//	int op1, op2, value, i = 0;
//	int length = strlen(exp);
//	char ch;
//
//	struct StackType s;
//	init_stack(&s);
//
//	for (i = 0; i < length; i++) {
//		ch = exp[i];
//		// ch�� �������� ��� �ǿ����ڸ� ���ÿ��� pop�� �� ��� �� push
//		if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
//			op2 = pop(&s);
//			op1 = pop(&s);
//
//			switch(ch) {
//			case '+': push(&s, op1 + op2); break;
//			case '-': push(&s, op1 - op2); break;
//			case '*': push(&s, op1 * op2); break;
//			case '/': push(&s, op1 / op2); break;
//			}// ������ ������ �� ���ÿ� ������� push�Ѵ�.
//		}
//
//		// ch�� �ǿ������� ���
//		else {
//			value = ch - '0';
//			push(&s, value);
//		}
//	}
//	return pop(&s);
//}
//
//int main(void) {
//	char p[] = "82/3-32*+";    //������ ���ٸ� char�տ� const�߰�
//	int result;
//	printf("���� ǥ����� %s\n", p);
//	result = evaluate(p);
//	printf("������� %d\n", result);
//	return 0;
//}



// ť ����

// ����ť
//#include <stdio.h>
//#include <stdlib.h>
//#define MAX_QUEUE_SIZE 5
//
//typedef struct queue { 				// ť Ÿ��
//	int front;
//	int rear;
//	int  data[MAX_QUEUE_SIZE];
//} QueueType;
//
//
//void init_queue(QueueType* q)
//{
//	q->rear = -1;  // �ʱ�ȭ ����?
//	q->front = -1; // �ʱ�ȭ ����?
//}
//int is_full(QueueType* q)
//{
//	if (q->rear == MAX_QUEUE_SIZE-1) //ť�� �����ִ� ������?
//		return 1;
//	else
//		return 0;
//}
//int is_empty(QueueType* q)
//{
//	if (q->front == q->rear)	//ť�� ����ִ� ������?
//		return 1;
//	else
//		return 0;
//}
//void enqueue(QueueType* q, int item)
//{
//	if (is_full(q) == 1 ) {     //���� �� �˻��ؾ� �� �Լ���? 
//		printf("ť�� ��ȭ�����Դϴ�.");
//		return;
//}
//	return q->data[ ++(q->rear)] = item;  // ť�� item �����ϴ� ��ɾ��?
//}
//
//int dequeue(QueueType* q)
//{
//	if (is_empty(q) ==1 ) {  //���� �� �˻��ؾ� �� �Լ���? 
//		printf("ť�� ��������Դϴ�.");
//		return -1;
//}
//	return q->data[ ++(q->front) ]; 			// ť�� �ִ� ���� �����ϴ� ��ɾ��?
//}
//void queue_print(QueueType* q) {  // ť �ȿ� �ִ� �����͸� ����ϴ� �Լ�
//	for (int i = 0; i < MAX_QUEUE_SIZE; i++) {
//		if (i <= q->rear && i > q->front)
//			printf("%d ", q->data[i]);
//	}
//	printf("\n");
//}
//int main(void)
//{
//	int item = 0;
//	QueueType q;
//
//	init_queue(&q);
//
//	enqueue(&q, 10);  //10 ����
//	queue_print(&q);
//	enqueue(&q, 20);   //20 ����
//	queue_print(&q);
//	enqueue(&q, 30); //30 ����
//	queue_print(&q);
//
//	dequeue(&q); // ��ť(ť �ȿ� �ִ� �� ����)
//	queue_print(&q);
//
//	dequeue(&q); // ��ť(ť �ȿ� �ִ� �� ����)
//	queue_print(&q);
//
//	return 0;
//}



// ����ť
//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_QUEUE_SIZE 5
//typedef struct queue { // ť Ÿ��
//	int  data[MAX_QUEUE_SIZE];
//	int  front, rear;
//} QueueType;
//
//// �ʱ�ȭ �Լ�
//void init_queue(QueueType* q)
//{
//	q->front = q->rear = 0;
//}
//
//// ���� ���� ���� �Լ�
//int is_empty(QueueType* q)
//{
//	if (q->front == q->rear)
//		return 1;
//	else
//		return 0;
//}
//
//// ��ȭ ���� ���� �Լ�
//int is_full(QueueType* q)
//{
//	if ((q->rear + 1) % MAX_QUEUE_SIZE == q->front)
//		return 1;
//	else
//		return 0;
//}
//
//
//// ���� �Լ�
//void enqueue(QueueType* q, int item)
//{
//	if (is_full(q))
//		printf("ť�� ��ȭ�����Դϴ�");
//	// ����ť�� item ���� ��ɾ��?
//	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
//	q->data[q->rear] = item;
//}
//
//// ���� �Լ�
//int dequeue(QueueType* q)
//{
//	if (is_empty(q))
//		printf("ť�� ��������Դϴ�");
//	// ����ť�� ���� ��ɾ��?
//	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
//	return q->data[q->front];
//}
//// ����ť ��� �Լ�
//void queue_print(QueueType* q)
//{
//	for (int i = q->front; i != q->rear; ) {
//		i = (i + 1) % (MAX_QUEUE_SIZE);
//		printf("%d ", q->data[i]);
//	}
//	printf("\n");
//}
//int main(void)
//{
//	QueueType q;
//	int num;
//
//	init_queue(&q);
//
//	enqueue(&q, 10);
//	queue_print(&q);
//	enqueue(&q, 20);
//	queue_print(&q);
//	enqueue(&q, 30);
//	queue_print(&q);
//
//	dequeue(&q);
//	queue_print(&q);
//	dequeue(&q);
//	queue_print(&q);
//
//	return 0;
//}


// ��ť
//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_QUEUE_SIZE 5
//typedef struct dequeue { // ť Ÿ��
//	int  data[MAX_QUEUE_SIZE];
//	int  front, rear;
//} DequeType;
//
//// �ʱ�ȭ �Լ�
//void init_deque(DequeType* q)
//{
//	q->front = q->rear = 0;
//}
//
//// ���� ���� ���� �Լ�
//int is_empty(DequeType* q)
//{
//	if (q->rear == q->front)
//		return 1;
//	else
//		return 0;
//}
//
//// ��ȭ ���� ���� �Լ�
//int is_full(DequeType* q)
//{
//	if ((q->rear + 1) % MAX_QUEUE_SIZE == q->front)
//		return 1;
//	else
//		return 0;
//}
//
//// �Ĵ� ���� �Լ�(���� push)
//void add_rear(DequeType* q, int item)
//{
//	if (is_full(q))
//		printf("ť�� ��ȭ�����Դϴ�");
//	// ������ item ���� ��ɾ��?
//	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
//	q->data[q->rear] = item;
//}
//
//// �Ĵ� ���� �Լ�(���� pop)
//int delete_rear(DequeType* q)
//{
//	if (is_empty(q))
//		printf("ť�� ��������Դϴ�");
//	// ������ ���� ��ɾ��?
//	int tmp = q->data[q->rear];
//	/*if (q->rear != 0)
//		q->rear = q->rear - 1;
//	else
//		q->rear = q->rear - 1 + MAX_QUEUE_SIZE;*/
//
//	q->rear = (q->rear - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
//	return tmp;
//}
//
//// ���� ���� �Լ�(���� pop)
//int delete_front(DequeType* q)
//{
//	if (is_empty(q))
//		printf("ť�� ��������Դϴ�");
//	// ������ ���� ��ɾ��?
//	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
//	return q->data[q->front];
//}
//// ���� ���� �Լ�(���� push)
//void add_front(DequeType* q, int item)
//{
//	if (is_full(q))
//		printf("ť�� ��ȭ�����Դϴ�");
//	// ������ item ���� ��ɾ��?
//	q->data[q->front] = item;
//	q->front = (q->front -1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
//}
//// �� ��� �Լ�
//void deque_print(DequeType* q)
//{
//	for (int i = q->front; i != q->rear; ) {
//		i = (i + 1) % (MAX_QUEUE_SIZE);
//		printf("%d ", q->data[i]);
//	}
//	printf("\n");
//}
//int main(void)
//{
//	DequeType q;
//	int num;
//
//	init_deque(&q);
//
//	add_rear(&q, 10);
//	deque_print(&q);
//	add_front(&q, 20);
//	deque_print(&q);
//	add_rear(&q, 30);
//	deque_print(&q);
//
//	delete_front(&q);
//	deque_print(&q);
//	delete_rear(&q);
//	deque_print(&q);
//
//	return 0;
//}



//�迭�� ������ ����Ʈ ���α׷�
//#include<stdio.h>
//#define MAX_LIST_SIZE 100 // ����Ʈ�� �ִ�ũ��
//
//typedef struct {
//	int array[MAX_LIST_SIZE]; // �迭 ����
//	int size; // ���� ����Ʈ�� ����� �׸���� ����
//} ArrayListType;
//
//// ����Ʈ �ʱ�ȭ �Լ�
//void init(ArrayListType* L)
//{
//	L->size = 0;
//}
//// ����Ʈ�� ��� ������ 1�� ��ȯ
//// �׷��� ������ 0�� ��ȯ
//int is_empty(ArrayListType* L)
//{
//	return L->size == 0;
//}
//// ����Ʈ�� ���� �� ������ 1�� ��ȯ
//// �׷��� ������ 0�� ��ȯ
//int is_full(ArrayListType* L)
//{
//	return L->size == MAX_LIST_SIZE; // �� MAX_LIST_SIZE -1�� �ƴұ�?
//}
//// ����Ʈ ���
//void print_list(ArrayListType* L)
//{
//	int i;
//	// ����Ʈ�� �ִ� ��� ��� ����ұ�?
//	for (i = 0; i < (L->size); i++) {
//		printf("%d->", L->array[i]);
//	}
//	printf("\n");
//}
//void insert_last(ArrayListType* L, int item)
//{
//	if (is_full(L) == 1) {
//		printf("����Ʈ �����÷ο�");
//	}
//	// �������� �����ϴ� ��ɾ��?
//	else {
//		L->array[L->size++] = item;
//	}
//}
//void insert(ArrayListType* L, int pos, int item)
//{
//	if (!is_full(L) && (pos >= 0) && (pos <= L->size)) {
//		// �����ϴ� ��ɾ��?
//		for (int i = (L->size - 1); i >= pos; i--) {
//			L->array[i + 1] = L->array[i];
//		}
//		L->array[pos] = item;
//		L->size= L->size+1;
//	}
//}
//int delete(ArrayListType* L, int pos)
//{
//	int item;
//	if (is_empty(L) == 1 && pos < 0 || pos >= L->size) {
//		printf("����");
//		return -1;
//	}
//	//�����ϴ� ��ɾ��?
//	item = L->array[pos];
//	for (int i = pos; i < (L->size - 1); i++) {
//		L->array[i] = L->array[i + 1];
//		L->size--;
//		return item;
//	}
//}
//
//int main(void)
//{
//	ArrayListType list;
//
//	init(&list);
//	insert(&list, 0, 30);	// 0��° ��ġ�� 30 �߰�
//	print_list(&list);
//	insert(&list, 0, 10);	// 0��° ��ġ�� 10 �߰�
//	print_list(&list);
//	insert(&list, 1, 20);	// 1��° ��ġ�� 20 �߰�
//	print_list(&list);
//	insert_last(&list, 40);	// �� ���� 40 �߰�
//	print_list(&list);
//	delete(&list, 0);		// 0��° �׸� ����
//	print_list(&list);
//	return 0;
//}



//���Ḯ��Ʈ C��� ���α׷� �����ϱ�
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct ListNode { 	// ��� Ÿ���� ����ü�� �����Ѵ�.
//	int data;
//	struct ListNode* link;
//} ListNode;
//
//ListNode* insert_first(ListNode* head, int value)
//{
//	ListNode *p = (ListNode*)malloc(sizeof(ListNode));
//	p->data = value;
//	p->link = head;
//	head = p;
//		return head;
//}
//
//// ��� pre �ڿ� ���ο� ��� ����
//ListNode* insert(ListNode* head, ListNode* pre, int value)
//{
//	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
//	p->data = value;
//	p->link = pre->link;
//	pre->link = p;
//		return head;
//}
//
//ListNode* delete_first(ListNode* head)
//{
//	ListNode* removed = head;
//	if (head == NULL) return NULL;
//	head = head->link;
//	free(removed);
//	return head;
//}
//
//// pre�� ����Ű�� ����� ���� ��带 �����Ѵ�. 
//ListNode* delete(ListNode* head, ListNode* pre)
//{
//	ListNode* removed;
//	
//}
//
//void print_list(ListNode* head)
//{
//	for (ListNode* p = head; p != NULL; p = p->link)
//		printf("%d->", p->data);
//		printf("NULL \n");
//}
//
//int main() {
//	ListNode* head = NULL;
//
//	for (int i = 5; i >= 1; i--) {
//		head = insert_first(head, i * 10);
//		print_list(head);
//	}
//
//	for (int i = 1; i <= 2; i++) {
//		head = delete_first(head);
//		print_list(head);
//	}
//
//	return 0;
//}

//���� Ʈ�� ��ȸ
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct TreeNode {
//	int data;
//	struct TreeNode* left, * right;
//} TreeNode;
////		 15
////	 4		 20
//// 	1	 	 16 25
//TreeNode n1 = { 1, NULL, NULL };
//TreeNode n2 = { 4, &n1, NULL };
//TreeNode n3 = { 16, NULL, NULL };
//TreeNode n4 = { 25, NULL, NULL };
//TreeNode n5 = { 20, &n3, &n4 };
//TreeNode n6 = { 15, &n2, &n5 };
//TreeNode* root = &n6;
//
//// ���� ��ȸ
//void preorder(TreeNode* root) {
//	if (root != NULL ) {				// ���� ����
//		printf("[%d] ", root->data); 	// ��� �湮(���⼭ �湮�� ����ϴ� ������ ��������. �湮�� ���뿡 ���� �ǹ̰� �޶��� �� �ִ�.)
//		preorder(root->left);			// ���ʼ���Ʈ�� ��ȸ
//		preorder(root->right);			// �����ʼ���Ʈ�� ��ȸ
//	}
//}
//
//// ���� ��ȸ
//void inorder(TreeNode* root) {
//	if (root != NULL) {					// ���� ����
//		preorder(root->left);			// ���ʼ���Ʈ�� ��ȸ
//		printf("[%d] ", root->data); 	// ��� �湮(���⼭ �湮�� ����ϴ� ������ ��������. �湮�� ���뿡 ���� �ǹ̰� �޶��� �� �ִ�.)
//		preorder(root->right);			// �����ʼ���Ʈ�� ��ȸ
//	}
//}
//
//// ���� ��ȸ
//void postorder(TreeNode* root) {
//	if (root != NULL) {					// ���� ����
//		preorder(root->left);			// ���ʼ���Ʈ�� ��ȸ
//		preorder(root->right);			// �����ʼ���Ʈ�� ��ȸ
//		printf("[%d] ", root->data); 	// ��� �湮(���⼭ �湮�� ����ϴ� ������ ��������. �湮�� ���뿡 ���� �ǹ̰� �޶��� �� �ִ�.)
//	}
//}
//
//int main(void)
//{
//	printf("���� ��ȸ ���=");
//	preorder(root);
//	printf("\n");
//
//	printf("���� ��ȸ ���=");
//	inorder(root);
//	printf("\n");
//
//	printf("���� ��ȸ ���=");
//	postorder(root);
//	printf("\n");
//
//	return 0;
//}


//======���� Ž��Ʈ�� ����========
//�ǻ��ڵ� �˰���
//search(root, key) :
//	if root == NULL
//		then return NULL;
//if key == root
//then return root;
//else if key < root
//	then return search(root->left, key)
//else return search(root->right, key)
// 
// 
// 
// 
//-����Լ� C��� �ڵ�
//#include<stdio.h>
//#include<stdlib.h>
//struct Treenode {
//	int data;
//	struct Treenode* left, * right;
//};
//
//struct Treenode* search(struct Treenode* node, int key) {
//	if (node == NULL)							    //1. ��ȯ?
//		if (key == node->data)					    // 2. ��ȯ?
//
//		else if (key < node->data)
//			return  search(node->left, key);        // 3. ��ȯ?
//
//		else
//			return   search(node->right, key);      // 4. ��ȯ?
//}

//�ݺ��� C��� �ڵ�
//#include<stdio.h>
//#include<stdlib.h>
//
//struct Treenode {
//	int data;
//	struct Treenode* left, * right;
//};
//
//struct Treenode* search(struct Treenode* node, int key) {
//	while (node != NULL ) {			//1. ���ǹ�?
//		if (key == node->data)
//			return node;			//2. ��ȯ?
//
//		else if (key < node->data)
//			return node->left;		//3. ���� �����?
//
//		else
//			return node->right;		//4. ���� �����?
//	}
//	return NULL;
//}


//����Ž��Ʈ���� ���� �˰���
//#include<stdio.h>
//#include<stdlib.h>
//
//struct Treenode {
//	int data;
//	struct Treenode* left, * right;
//};
//
//struct Treenode* new_node(int key) {
//	struct Treenode* NewNode = (struct Treenode*)malloc(sizeof(struct Treenode));
//		NewNode->data = key;		//new��忡 key�� ����
//		NewNode->left = NULL;		//new�� left�� right�� NULL��
//		NewNode->right = NULL;
//	return NewNode;
//}
//
//struct Treenode* insert(struct Treenode* node, int key) {
//	if (node == NULL) return new_node(key);
//			
//	if (node->data > key)
//		node->left = insert(node->left, key);		//insert�Լ� ȣ��
//	else if (node->data < key)
//		node->right = insert(node->right, key);			//insert�Լ� ȣ��
//
//		return node;
//}
//
//int main() {
//	struct Treenode* root = NULL;
//	root = insert(root, 30);
//	root = insert(root, 20);
//	root = insert(root, 10);
//	root = insert(root, 40);
//	root = insert(root, 60);
//	root = insert(root, 50);
//	printf("��Ʈ ���� %d\n", root->data);
//	printf("��Ʈ�� ������ �ڽ��� ������ �ڽ��� %d\n", root->right->right->data);
//	return 0;
//}


//����Ž��Ʈ���� ���� �˰���
//#include<stdio.h>
//#include<stdlib.h>
//
//struct Treenode {
//	int data;
//	struct Treenode* left, * right;
//};
//
//struct Treenode* new_node(int key) {
//	struct Treenode* new = (struct Treenode*)malloc(sizeof(struct Treenode));
//	new->data = key;
//	new->left = new->right = NULL;
//	return new;
//}
//struct Treenode* insert(struct Treenode* node, int key) {
//	if (node == NULL) return new_node(key);
//
//	if (node->data > key)
//		node->left = insert(node->left, key);
//	else if (node->data < key)
//		node->right = insert(node->right, key);
//
//	return node;
//}
//struct Treenode* min_value_node(struct Treenode* node)
//{
//	struct Treenode* current = node;
//
//	while (current != NULL )   // �� ���� �ܸ� ��带 ã���� ������
//		 current = current->left;
//
//	return current;
//}
//struct Treenode* delete(struct Treenode* node, int key)
//{
//	if (node == NULL) return node;
//	if (key < node->data)
//		node->left = delete(node->left, key);	// delete�Լ� ȣ��
//	else if (key > node->data)
//		node->right = delete(node->right, key);// delete�Լ� ȣ��
//	else {
//		// ù ��°�� �� ��° ���
//		if (node->left == NULL) {
//			struct Treenode* temp = node->right;// ������ ���� Ʈ�� ��ũ�� �����صд�.
//			free(node);
//			return temp;
//		}
//		else if (node->right == NULL) {
//			struct Treenode* temp = node->left;// ���� ���� Ʈ�� ��ũ�� �����صд�.
//			free(node);
//			return temp;
//		}
//		// �� ��° ���
//			struct Treenode* temp = min_value_node(node->right);
//			node->data = temp->data;				// ���� ����� ��(������ ����Ʈ���� ���� ���� ��)�� ������ ����� ������ �ʵ忡 �����Ѵ�. 
//			node->right = delete(node->right, temp->data);	// ���� ����� ���� ��带 �����Ѵ�. 
//			
//	}
//	return node;
//}
//int main() {
//	struct Treenode* root = NULL;
//	root = insert(root, 30);
//	root = insert(root, 20);
//	root = insert(root, 10);
//	root = insert(root, 40);
//	root = insert(root, 60);
//	root = insert(root, 50);
//	root = delete(root, 30);
//	printf("��Ʈ ���� %d\n", root->data);
//	printf("��Ʈ�� ������ �ڽ��� ���� �ڽ��� %d\n", root->right->left->data);
//	return 0;
//}


