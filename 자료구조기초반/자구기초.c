//�ڵ�� 1366
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void) {
//	int n;
//	scanf("%d", &n);
//	if (n % 2 != 0) {
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (i == 0 || j==0 || i==n-1 || j == n-1 || i==j || (i+j)==n-1 || i == n/2 || j == n/2) {
//					printf("*");
//				}
//				else {
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//
//
//	return 0;
//}

//�ڵ�� 1355
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void) {
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n;j++) {
//			if (j >= i) {
//				printf("*");
//			}	
//			else {
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//�ڵ�� 1511
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void) {
//	int num = 1, n, add=0;
//	scanf("%d", &n);
//	printf("\n");
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%d ", num);
//			if (i==0 || j==0 || i==n-1 || j==n-1) {
//				add += num;
//			}
//			num++;
//		}
//		printf("\n\n");
//	}
//
//	printf("%d", add);
//
//	return 0;
//}


// 2���� �迭
//�ڵ�� 1508
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main(void) {
//
//	int arr[20][20];
//	int n;
//	int i = 0;
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//			scanf("%d", &arr[i][0]);
//	}
//	
//	printf("\n");         //�� �������� ����
//
//	for (int i = 1; i < n; i++) {
//		for (int j = 1; j < n;j++) {
//			arr[i][j] = arr[i][j-1]-arr[i-1][j-1];
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j <= i; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//		
//	return 0;
//}

//����
//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//void insertion_sort() {
//	int key, i, j;
//	for (i = 1; i < MAX_SIZE; i++) { // i�� 1���� �����ϴ� �Ϳ� ����
//		key = arr[i];
//		for (j = i - 1; j >= 0 && arr[j] > key; j--) { // key ���� ��ġ ã��
//			arr[j + 1] = arr[j];
//		} 
//		arr[j + 1] = key;	// key �� ����
//	}
//} // <<-- �̰� ����������
//int main() {
//	srand(time(NULL));
//	int n = MAX_SIZE;
//	for (int i = 0; i < n; i++) {
//		arr[i] = rand() % 100;
//	}
//	insertion_sort();
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//����
//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//void Bubble_sort() {
//	int temp;
//	for (int i = MAX_SIZE-1; i >=1 ; i--) { // �� �ܰ�� �迭 ������-1 �����
//		for (int j = 0; j <= i-1; j++) { // �ڿ������� ��ǰó�� ���ĵǴ� ����
//			if (arr[j] > arr[j + 1]) {
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
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
//	Bubble_sort();
//
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//} 



//��
//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//int arr[MAX_SIZE];
//int partition(int left, int right) {
//	int pivot = arr[left];
//	int low = left + 1;
//	int high = right;
//	int temp;
//	do {
//		while (arr[low] < pivot) {
//			low++;
//		}
//		while (arr[high] > pivot) {
//			high--;
//		}
//		if (low < high) {
//			// �� ��ȯ
//			temp = arr[low];
//			arr[low] = arr[high];
//			arr[high] = temp;
//		}
//	} while (low < high);
//
//	// �� ��ȯ(� ������ �ٲ�����ұ��?)
//	temp = arr[left];
//	arr[left] = arr[high];
//	arr[high] = pivot;
//	return high;
//}
//
//void quick_sort(int left, int right) {
//	// left�� �����ؾ� �� �迭�� ù �ε��� ��, right�� ������ �ε��� ��
//	if (left < right) {
//		int q = partition(left, right); // partition�Լ��� �Ǻ��� ��ġ(�ε���)�� ��ȯ
//		quick_sort(left, q - 1);
//		quick_sort(q + 1, right); // ������ ����Ʈ �Ű�������?
//	}
//}
//
//int main() {
//	srand(time(NULL));
//	int n = MAX_SIZE;
//	for (int i = 0; i < n; i++)
//		arr[i] = rand() % 100;
//
//	quick_sort(0, n - 1);
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}



//���� �˰���
//#include <stdio.h>
//int stack[100];
//int top = -1;
//
//int is_empty() {
//	if (top == -1) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//int is_full() {
//	if (top >= 99) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//int push(int item) {
//	if (is_full()) {
//		printf("error");
//	}
//	else {
//		stack[++top] = item;
//	}
//}
//
//int pop() {
//	if (is_empty()) {
//		printf("error");
//		return 0;
//	}
//	else {
//		return stack[top--];
//	}
//}
//
//int main() {
//	push(1);
//	printf("Stack : ");
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", stack[i]);
//	}
//
//	push(2);
//	printf("\n\nStack : ");
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", stack[i]);
//	}
//
//	push(3);
//	printf("\n\nStack : ");
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", stack[i]);
//	}
//	return 0;
//}

//�ڵ�� 1402
//#include <stdio.h>
//int stack[100];
//int top = -1;
//
//int is_empty() {
//	if (top == -1) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//int is_full() {
//	if (top >= 99) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//int push(int item) {
//	if (is_full()) {
//		printf("error");
//	}
//	else {
//		stack[++top] = item;
//	}
//}
//
//int pop() {
//	if (is_empty()) {
//		printf("error");
//		return 0;
//	}
//	else {
//		return stack[top--];
//	}
//}
//
//int main() {
//	int n,num;
//	scanf("%d", &n);
//	if (n <= 1000) {
//		for (int i = 0; i < n; i++) {
//		scanf("%d", &num);
//		push(num);
//		} 
//	}
//
//	for (int i = 0; i < n; i++) {
//		printf("%d ", pop());
//	}
//
//	return 0;
//}


//int pop() {
//	if (is_empty()) {
//		printf("stack is empty!");
//	}
//	else {
//		return stack[top--];
//	}
//}


//��ȣ�˻�
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


//�ڵ�� 1905
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int num2=0;
//
//void a(int num1) {
//	if (num1 < 1)
//		return;
//	num2 += num1;
//	a(num1 - 1);
//}
//
//
//int main(void) {
//	int n;
//	scanf("%d", &n);
//
//	a(n);
//
//	printf("%d", num2);
//	
//}

//���� ���
//#include<stdio.h>
//#include<string.h>
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
//	return (p->top == -1);
//}
//// ��ȭ ���� ���� �Լ�
//int is_full(struct StackType* p)
//{
//	return (p->top == (MAX_STACK_SIZE - 1));
//}
//// �����Լ�
//void push(struct StackType* p, int item)
//{
//	if (is_full(p)) {
//		printf("��ȭ����\n");
//		return;
//	}
//	else p->data[++(p->top)] = item;
//}
//// �����Լ�
//int pop(struct StackType* p)
//{
//	if (is_empty(p)) {
//		printf("�������\n");
//		return 0;
//	}
//	else return p->data[(p->top)--];
//}
//int peek(struct StackType* p)
//{
//	if (is_empty(p)) {
//		printf("�������\n");
//		return 0;
//	}
//	else return p->data[p->top];
//}
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
//		//  ch�� �������� ��� �ǿ����ڸ� ���ÿ��� pop�� �� ��� �� push
//		if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
//			op2 = pop(&s);
//			op1 = pop(&s);
//			switch (ch) {
//			case '+': push(&s, op1 + op2); break;
//			case '-': push(&s, op1 - op2); break;
//			case '*': push(&s, op1 * op2); break;
//			case '/': push(&s, op1 / op2); break;
//			}
//		}
//		else {  //ch�� �ǿ������� ��� push�Ѵ�.
//			value = ch - '0';
//			push(&s, value);
//		}
//	}
//	return pop(&s);
//}
//
//int main(void) {
//	char p[] = "82/3-32*+";
//	int result;
//	printf("���� ǥ����� %s\n", p);
//	result = evaluate(p);
//	printf("������� %d\n", result);
//	return 0;
//}



//�ڵ�� 1929
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int reverse(int num) {
//	if (num == 1) {
//		printf("1 ");
//		return 0;
//	}
//	else if (num % 2 == 1) reverse(3 * num + 1);
//	else if (num % 2 == 0) reverse(num / 2);
//	printf("%d ", num);  // ���� ����̱� ������ �� �� ȣ�� �� printf()�̴�.
//}
//
//int main() {
//	int n;
//	scanf_s("%d", &n);
//	reverse(n);
//}




//�ڵ�� 4681 : ������
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//	int n1, n2, n3, n4, n5, num;
//	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
//	num = n1 * n1 + n2 * n2 + n3 * n3 + n4 * n4 + n5 * n5;
//	printf("%d", num%10);
//
//
//	return 0;
//}


//�ڵ�� 4716 : ������ ����2
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//	int  n1[10], n2[10];
//	int MAX=-1, count=0;
//	for (int i = 0; i < 10; i++) {
//		scanf("%d %d", &n1[i], &n2[i]);
//		count = count + n2[i] - n1[i];
//		if (MAX <= count) {
//			MAX = count;
//		}
//	}
//	printf("\n%d", MAX);
//
//	return 0;
//}

// �ڵ�� 4726   ����          ����ӤӤӤӤӤӤӤӤӤӤӤӤӤ�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void) {
//	int n, k;
//	int arr[100000];
//	int	count=0;
//
//	scanf("%d %d", &n, &k);
//
//	int MAX = -100 * k - 1;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n-k+1; i++) {
//		count = 0;
//		for (int j = i; j < i + k; j++) {
//			count = count + arr[j];
//		}
//		if (MAX < count) {
//			MAX = count;
//		}
//	}
//
//	printf("%d", MAX);
//
//	return 0;
//}

// ť (�迭��)
//#include <stdio.h>
//int queue[10];
//int rear = -1, front = -1;
//
//int is_empty() {
//	if (rear == front) return 1;
//	else return 0;
//}
//
//int is_full() {
//	if (rear >= 9) return 1;
//	else return 0;
//}
//
//int enqueue(int item) {
//	if (is_full()) {
//		printf("ť MAX");
//		return;
//	}
//	else queue[++rear] = item;
//}
//
//int dequeue() {
//	if (is_empty()) {
//		printf("ť NULL");
//		return -1;
//	}
//	else return queue[++front];
//}
//
//
//int main() {
//	int item = 0;
//}



//�ڵ�� 4771
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	char arr[50];
//	int count =0;
//	scanf("%s", arr);
//	for (int i = 0; i < 50; i++) {
//		if (arr[i] == 0) break;
//		else if (i == 0) count += 10;
//		else if (arr[i] != arr[i - 1]) count += 10;
//		else count += 5;
//	}
//
//	printf("%d", count);
//
//	return 0;
//}


//����ť
//#include <stdio.h>
//#include <stdlib.h>
//
//int c_queue[7] = { 0 };
//int rear = 0;
//int front = 0;
//
//int is_empty() {
//	if (rear == front) return 1;
//	else return 0;
//}
//
//int is_full() {
//	if ((rear + 1) % 7 == front)
//		return 1;
//	else return 0;
//}
//
//void enqueue(int item) {
//	if (is_full()) printf("��ȭ");
//	else
//		rear = (rear + 1) % 7;
//		c_queue[rear] = item;
//}
//
//int dequeue() {
//	if (is_empty()) {
//		printf("����");
//		return -1;
//	}
//	else
//		front = (front + 1) % 7;
//		return c_queue[front];
//}
//
//int main() {
//	printf("%d\n", is_empty());
//	printf("%d\n", is_full());
//}

//======================================================

//�ڵ�� 4592 Ǯ�� (������)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int n,x,y, sum1 = 0, sum2;
//	int num[10000][10000];
//	int xnum, ynum;
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		sum1 += 100;
//	}
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &num[x][y]);
//		xnum = x;
//		ynum = y;
//		if (i > 0) {
//			for (int j = 0; j < i; j++) {
//
//			}
//		}
//	}
//
//	return 0;
//}
 
//======================================================

//�ڵ�� 4846
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int n,n1, n2;
//	int sum=0, add=0;
//	int a[100];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//
//		scanf("%d %d", &n1, &n2);
//		int num = n2 / n1;
//		sum = n2 - n1 * num;
//		a[i] = sum;
//	}
//	for (int i = 0; i < n; i++) {
//		add = add + a[i];
//	}
//
//	printf("%d", add);
//
//	return 0;
//}


//�ڵ�� 4891
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int n,s;
//	int max=-1, min=1000, sum;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &s);
//		if (max < s) {
//			max = s;
//		}
//		if (min > s) {
//			min = s;
//		}
//	}
//	sum = max - min;
//	printf("%d", sum);
//
//	return 0;
//}


//�迭�� ������ ����Ʈ 
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
//	for (i = 0; i < L->size; i++) {
//		printf("%d->", L->array[i]);
//	}
//	printf("\n");
//}
//void insert_last(ArrayListType* L, int item)
//{
//	if (is_full(L) == 1) {
//		printf("����Ʈ �����÷ο�");
//	}
//	else
//		// �������� �����ϴ� ��ɾ��?
//		L->array[L->size++] = item;
//}
//void insert(ArrayListType* L, int pos, int item)
//{
//	if (!is_full(L) && (pos >= 0) && (pos <= L->size)) {
//		// �����ϴ� ��ɾ��?
//		for (int i = L->size - 1; i >= pos; i--)
//			L->array[i + 1] = L->array[i];
//		L->array[pos] = item;
//		L->size++;
//	}
//}
//int delete(ArrayListType* L, int pos)
//{
//	int item;
//	if (is_empty(L) == 1 || pos < 0 || pos >= L->size) {
//		printf("����");
//		return -1;
//	}
//	//�����ϴ� ��ɾ��?
//	item = L->array[pos];
//	for (int i = pos; i < L->size - 1; i++)
//		L->array[i] = L->array[i + 1];
//	L->size--;
//	return item;
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


//�ܼ� ���Ḯ��Ʈ
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct Node {
//	int data;
//	struct Node* link;
//}Node;
//
//Node* head = NULL;
//
//void insert_first(int value) {
//	Node* NewNode = (Node*)malloc(sizeof(Node));
//	NewNode->data = value;
//	NewNode->link = head;
//	head = NewNode;
//}
//
//void insert(Node*pre, int value) {
//	Node* NewNode = (Node*)malloc(sizeof(Node));
//	NewNode->data = value;
//	NewNode->link = pre->link;
//	pre->link = NewNode;
//}
//
//int delete_first(Node* del) {
//	Node* temp = del;
//	head = del->link;
//	free(del);
//	return temp;
//}
//
//int delete(Node* tra, Node* del) {
//	int temp = del->data;
//	tra->link = del->link;
//	free(del);
//	return temp;
//}
//
//void print_list(Node* list) {
//	if (list == NULL) {
//		printf("NOT");
//	}
//	for (list = head;  list != NULL; list = list->link) {
//		printf("%d->", list->data);
//	}
//}
//
//int main() {
//	insert_first(1);
//	insert(head, 2);
//	insert(head, 3);
//
//
//	print_list(head);
//}


//���� ���� ����Ʈ
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct Node {
//	int data;
//	struct Node* link;
//}Node;
//
//Node* head = NULL;
//
//void r_insert_first(int item) {
//	Node* NewNode = (Node*)malloc(sizeof(Node));
//	NewNode->data = item;
//	if (!head) {
//		head = NewNode;
//		NewNode->link = NewNode;
//	}
//	else {
//		NewNode->link = head->link;
//		head->link = NewNode;
//	}
//}
//
//void  r_insert(Node* pre, int item) {
//	//�ܼ� ���Ḯ��Ʈ�� ����
//	Node* NewNode = (Node*)malloc(sizeof(Node));
//	NewNode->data = item;
//	if (!head) {
//		head = NewNode;
//		NewNode->link = NewNode;
//	}
//	else {
//		NewNode->link = pre->link;
//		pre->link = NewNode;
//		head = NewNode;
//	}
//
//}

//�ܼ� ���Ḯ��Ʈ ����
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Node {
//	int data;
//	struct Node* link;
//}Node;
//
//struct Node* head = NULL;
//
//void list_insert_first(int item) {
//	Node* NewNode = (Node*)malloc(sizeof(Node));
//	NewNode->data = item;
//	NewNode->link = head; // �Ǽ� ����
// 	head = NewNode;
//}
//
//void list_insert(Node* pre, int item) {
//	Node* NewNode = (Node*)malloc(sizeof(Node));
//	NewNode->data = item;
//	NewNode->link = pre->link;
//	pre->link = NewNode;
//}
//
//int list_delete_first(Node* del) {
//	Node* removed = del;
//	int temp = removed->data;
//	head = removed->link;
//	free(removed);
//	return temp;
//}
//
//int list_delete(Node* tra, Node* del) {
//	Node* removed = del;
//	int temp = removed->data;
//	tra->link = del->link;
//	free(removed);
//	return temp;
//}
//
//void list_print(Node* list) {
//	if (!head) {
//		printf("Nothing!");
//	}
//	else {
//		for (Node* ptr = list; ptr != NULL; ptr= ptr->link) {
//			printf("%d->", ptr->data);
//		}
//	}
//}
//
//int main() {
//	
//	list_insert_first(1);
//	list_insert_first(2);
//	list_insert(head->link, 3);
//	
//	list_delete_first(head); 
//	list_delete(head, head->link);
//
//	printf("%d", head->data);
//	printf("%d", head->link->data);
//	printf("%d", head->link->link->data);
//}

//���� ���� ����Ʈ
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Node {
//	int data;
//	struct Node* rlink;
//	struct Node* llink;
//}Node;
//
//Node* head = NULL;
//
//void d_insert(Node* pre, int item) {
//	Node* NewNode = (Node*)malloc(sizeof(Node));
//	NewNode->data = item;
//	NewNode->rlink = pre->rlink;
//	NewNode->llink = pre;
//	pre->rlink->llink = NewNode;
//	pre->rlink = NewNode;
//
//}
//
//void d_delete(Node* del) {
//	int temp = del->data;
//	del->rlink->llink = del->llink;
//	del->llink->rlink = del->rlink;
//	free(del);
//	return temp;
//}
//
//int main() {
//
//}


//�ڵ�� 4036
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int n, m;
//	int a, b;
//	scanf("%d %d", &n, &m);
//	
//	a = (n+m) /2;
//	b = (n-m) /2;
//
//	printf("%d\n", a);
//	printf("%d", b);
//
//	return 0;
//}


//�ڵ�� 4026
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 5
//
//int arr[MAX_SIZE];
//void Bubble_sort() {
//	int temp;
//	for (int i = MAX_SIZE - 1; i >= 1; i--) { // �� �ܰ�� �迭 ������-1 �����
//		for (int j = 0; j <= i - 1; j++) { // �ڿ������� ��ǰó�� ���ĵǴ� ����
//			if (arr[j] > arr[j + 1]) {
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main() {
//	srand(time(NULL));
//	int n = MAX_SIZE;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	Bubble_sort();
//
//	printf("%d", arr[MAX_SIZE / 2]);
//	return 0;
//}

//���� Ʈ���� ��ȸ
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
//	 if (root != NULL ) {//or(!root)�� ����	// ���� ����
//		 printf("[%d] ",  root->data ); 	// ��� �湮(���⼭ �湮�� ����ϴ� ������ ��������. �湮�� ���뿡 ���� �ǹ̰� �޶��� �� �ִ�.)
//		 preorder( root->left );			// ���ʼ���Ʈ�� ��ȸ
//		 preorder( root->right );			// �����ʼ���Ʈ�� ��ȸ
//	}
//}

//void order(TreeNode* root) {
//	if (root != NULL) {//or(!root)�� ����	// ���� ����
//		preorder( root->left );				// ���ʼ���Ʈ�� ��ȸ
//		printf("[%d] ", root->data );		// ��� �湮(���⼭ �湮�� ����ϴ� ������ ��������. �湮�� ���뿡 ���� �ǹ̰� �޶��� �� �ִ�.)
//		preorder( root->right );			// �����ʼ���Ʈ�� ��ȸ
//	}
//}
//
//void order(TreeNode* root) {
//	if (root != NULL) {//or(!root)�� ����	// ���� ����
//		preorder( root->left );				// ���ʼ���Ʈ�� ��ȸ
//		preorder( root->right );			// �����ʼ���Ʈ�� ��ȸ
//		printf("[%d] ", root->data );		// ��� �湮(���⼭ �湮�� ����ϴ� ������ ��������. �湮�� ���뿡 ���� �ǹ̰� �޶��� �� �ִ�.)
//	}
//}

//int main(void)
//{
//	printf("���� ��ȸ ���=");
//	preorder(root);
//	printf("\n");
//
////	printf("���� ��ȸ ��� = ");
////	preorder(root);
////	printf("\n");
//
////	printf("���� ��ȸ ���=");
////	preorder(root);
////	printf("\n");
//	return 0;
//}

//���� Ž�� Ʈ��
//#include<stdio.h>
//#include<stdlib.h>
//struct Treenode {
//	int data;
//	struct Treenode* left, * right;
//};
//
//// ��ȯ���� Ž������ ����Լ� �ڵ�
//struct Treenode* search(struct Treenode* node, int key) {
//	if (node == NULL)
//		return NULL;
//	if (key == node->data)
//		return node;
//	else if (key < node->data)
//		return search(node->left, key);
//	else
//		return search(node->right, key);
//}
//
////�ݺ���
//struct Treenode* search(struct Treenode* node, int key) {
//	while (node != NULL) {
//		if (key == node->data)
//			return node;
//		else if (key < node->data)
//			return node = node->left;
//		else
//			return node = node->right;
//	}
//	return NULL;
//}

//���� Ž�� Ʈ�� ����
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
//	new->data = key;				//new��忡 key�� ����
//	new->left = new->right = NULL;	//new�� left�� right�� NULL��
//	return new;
//}
//
//struct Treenode* insert(struct Treenode* node, int key) {
//	if (node == NULL) 
//		return new_node(key);
//	if (node->data > key)
//		node->left = insert(node->left, key);	//insert�Լ� ȣ��
//	else if (node->data < key)
//		node->right = insert(node->right, key);	//insert�Լ� ȣ��
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

//����Ž��Ʈ�� ����#include<stdio.h>
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
//	while (current->left != NULL)   // �� ���� �ܸ� ��带 ã���� ������
//		 current = current->left;
//
//	return current;
//}
//struct Treenode* delete(struct Treenode* node, int key)
//{
//	if (node == NULL) return node;
//	if (key < node->data)
//		node->left = delete(node->left, key); // delete�Լ� ȣ��
//	else if (key > node->data)
//		node->right = delete(node->right, key); // delete�Լ� ȣ��
//	else {
//		// ù ��°�� �� ��° ���
//		if (node->left == NULL) {
//			struct Treenode* temp = node->right; // ������ ���� Ʈ�� ��ũ�� �����صд�.
//				free(node);
//			return temp;
//		}
//		else if (node->right == NULL) {
//			struct Treenode* temp = node->left; // ���� ���� Ʈ�� ��ũ�� �����صд�.
//				free(node);
//			return temp;
//		}
//		// �� ��° ���
//		struct Treenode* temp = min_value_node(node->right);
//		node->data = temp;// ���� ����� ��(������ ����Ʈ���� ���� ���� ��)�� ������ ����� ������ �ʵ忡 �����Ѵ�. 
//		free(temp);// ���� ����� ���� ��带 �����Ѵ�. 
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


//#include<stdio.h>
//#include<stdlib.h>
//struct Treenode {
//	int data;
//	struct Treenode* left, * right;
//};
//
//struct Treenode* search(struct Treenode* node, int key) {
//	if (node == NULL) return NULL;
//	if (key == node->data) return node;
//	else if (key < node->data)
//		return search(node->left, key);
//	else
//		return search(node->right, key);
//}
//
//struct Treenode* new_node(int key) {
//	struct Treenode* new = (struct Treenode*)malloc(sizeof(struct Treenode));
//	new->data = key; //new��忡 key�� ����
//	new->right = new->left = NULL; //new�� left�� right�� NULL��
//	return new;
//}
//
//struct Treenode* insert(struct Treenode* node, int key) {
//	if (node == NULL) return new_node(key);
//
//	if (node->data > key)
//		node->left = insert(node->left, key);//insert�Լ� ȣ��
//	else if (node->data < key)
//		node->right = insert(node->right, key);//insert�Լ� ȣ��
//
//	return node;
//}
//// ���� Ž�� Ʈ���� Ű�� �־����� Ű�� ����� ��带 �����ϰ� 
//// ���ο� ��Ʈ ��带 ��ȯ�Ѵ�. 
//struct Treenode* min_value_node(struct Treenode* node)
//{
//	struct Treenode* current = node;
//
//	// �� ���� �ܸ� ��带 ã���� ������
//	while (current->left != NULL)
//		current = current->left;
//
//	return current;
//}
//struct Treenode* delete(struct Treenode* node, int key)
//{
//	if (node == NULL) return node;
//	// ���� Ű�� ��Ʈ���� ������ ���� ���� Ʈ���� �ִ� ����
//	if (key < node->data)
//		node->left = delete(node->left, key);// delete�Լ� ȣ��
//	// ���� Ű�� ��Ʈ���� ũ�� ������ ���� Ʈ���� �ִ� ����
//	else if (key > node->data)
//		node->right = delete(node->left, key); // delete�Լ� ȣ��
//	// Ű�� ��Ʈ�� ������ �� ��带 �����ϸ� ��
//	else {
//		// ù ��°�� �� ��° ���
//		if (node->left == NULL) {
//			struct Treenode* temp = node->right;
//			free(node);
//			return temp;
//		}
//		else if (node->right == NULL) {
//			struct Treenode* temp = node->left;
//			free(node);
//			return temp;
//		}
//		// �� ��° ���
//		struct Treenode* temp = min_value_node(node->right);
//
//		// �߿� ��ȸ�� �İ� ��带 �����Ѵ�. 
//		node->data = temp->data;
//		// �߿� ��ȸ�� �İ� ��带 �����Ѵ�. 
//		node->right = delete(node->right, temp->data);
//	}
//	return node;
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
//	root = delete(root, 30);
//	root = delete(root, 20);
//
//	printf("��Ʈ ���� %d\n", root->data);
//	printf("��Ʈ�� ���� �ڽ��� %d\n", root->left->data);
//	printf("��Ʈ�� ������ �ڽ��� ���� �ڽ��� %d\n", root->right->left->data);
//	if (search(root, 60) != NULL)
//		printf("60 Ž�� ����");
//	else
//		printf("60 Ž�� ����");
//	return 0;
//}


// �ڵ�� 4861
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int n, k;
//	int arr[2][6] = { 0 };
//	int gen, gra, room;
//	scanf("%d %d", &n, &k);
//	for (int i = 0; i < n; i++) {
//		scanf("%d %d", &gen, &gra);
//	}
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 6; j++) {
//			if (arr[i][j] > 0) {
//
//			}
//		}
//	}
//
//}
// 
// 


//�ڵ�� 4506
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int n1,n2, tmp;
//	int	gcd = 0, lcm = 0;
//	scanf("%d %d", &n1, &n2);
//
//	if (n1 > n2) {
//		tmp = n2;
//		n2 = n1;
//		n1 = tmp;
//	}
//	for (int i = 1; i <= n1;i++) {
//		if (n1 % i == 0 && n2 % i == 0) {
//			gcd = i;
//		}
//	}
//		lcm = gcd * (n1 / gcd) * (n2 / gcd);
//		printf("%d %d", gcd, lcm);
//}

//�ڵ�� 4651
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int num;
//	int arr[3] = { 0 };
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			scanf("%d", &num);
//			arr[i] += num;
//		}
//	}
//
//	for (int i = 0; i < 3; i++) {
//		if (arr[i] == 1) printf("C\n");
//		if (arr[i] == 2) printf("B\n");
//		if (arr[i] == 3) printf("A\n");
//		if (arr[i] == 4) printf("E\n");
//		if (arr[i] == 0) printf("D\n");
//	}
//
//	return 0;
//}


//�ڵ�� 4741
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int hr, min;
//	int num;
//	scanf("%d %d", &hr, &min);
//	scanf("%d", &num);
//	
//	min += num;
//	if (min >= 60) {
//		while (min >= 60)
//		{
//			if (hr >= 23 && min >= 60) {
//				hr = hr - 23;
//				min = min - 60;
//				continue;
//			}
//			min = min - 60;
//			hr = hr + 1;
//		}
//	}
//	printf("%d %d", hr, min);
//	return 0;
//}


//=========================================================
//�ڵ�� 4816
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int A = 300, B = 60, C = 10;
//	int T, a = 0, b = 0, c = 0;
//	scanf("%d", &T);
//		a = T / A;
//		T = T % A;
//
//		b = T / B;
//		T = T % B;
//
//		c = T / C;
//		T = T % C;
//
//
//	printf("%d %d %d", a,b,c);
//	return 0;
//}

//�ڵ�� 4031
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int arr[7] = { 0 };
//	int even = -1, odd = -1;
//	int n1= 0, n2=0;
//	for (int i = 0; i < 7; i++) {
//		scanf("%d", &arr[i]);
//		if (arr[i] % 2 == 0) {
//			if (arr[i] > even) {
//				 even = arr[i];
//				 n1++;
//			}
//		}
//		else {
//			if (arr[i] > odd) {
//				 odd = arr[i];
//				 n2++;
//			}
//		}
//	}
//
//	if (n1 == 0) {
//		printf("%d", odd);
//	}
//	else if (n2 == 0) {
//		printf("%d", even);
//	}
//	
//	else {
//		printf("%d", even+odd);
//	}
//	return 0;
//}
//================================================