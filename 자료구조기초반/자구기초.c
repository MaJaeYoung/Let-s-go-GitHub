//코드업 1366
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

//코드업 1355
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

//코드업 1511
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


// 2차원 배열
//코드업 1508
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
//	printf("\n");         //답 넣을때는 빼기
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

//삽입
//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//void insertion_sort() {
//	int key, i, j;
//	for (i = 1; i < MAX_SIZE; i++) { // i가 1부터 시작하는 것에 유의
//		key = arr[i];
//		for (j = i - 1; j >= 0 && arr[j] > key; j--) { // key 값의 위치 찾기
//			arr[j + 1] = arr[j];
//		} 
//		arr[j + 1] = key;	// key 값 삽입
//	}
//} // <<-- 이거 없었음조심
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

//버블
//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//void Bubble_sort() {
//	int temp;
//	for (int i = MAX_SIZE-1; i >=1 ; i--) { // 총 단계는 배열 사이즈-1 수행됨
//		for (int j = 0; j <= i-1; j++) { // 뒤에서부터 거품처럼 정렬되는 구조
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



//퀵
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
//			// 값 교환
//			temp = arr[low];
//			arr[low] = arr[high];
//			arr[high] = temp;
//		}
//	} while (low < high);
//
//	// 값 교환(어떤 값들을 바꿔줘야할까요?)
//	temp = arr[left];
//	arr[left] = arr[high];
//	arr[high] = pivot;
//	return high;
//}
//
//void quick_sort(int left, int right) {
//	// left는 정렬해야 할 배열의 첫 인덱스 값, right는 마지막 인덱스 값
//	if (left < right) {
//		int q = partition(left, right); // partition함수는 피봇의 위치(인덱스)를 반환
//		quick_sort(left, q - 1);
//		quick_sort(q + 1, right); // 오른쪽 리스트 매개변수는?
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



//스택 알고리즘
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

//코드업 1402
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


//괄호검사
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
//		printf("오버플로우");
//	else
//		p->data[++(p->top)] = item;
//}
//int pop(struct StackType* p)
//{
//	if (is_empty(p))
//		printf("언더플로우");
//	else
//		return p->data[(p->top)--];
//}
//int check_matching(char in[])
//{
//	StackType s;
//	char ch, open_ch;
//	int i, n = strlen(in);  	// n에는 문자열의 길이가 입력됨
//	init_stack(&s);			// 스택의 초기화
//
//	for (i = 0; i < n; i++) {
//		ch = in[i];		// ch = 다음 문자
//		if (ch == '(' || ch == '[' || ch == '{')
//			push(&s, ch);
//		else if (ch == ')' || ch == ']' || ch == '}') {
//			if (is_empty(&s) == 1) {
//				printf("조건 2 오류\n");
//				return 0;
//			}
//			else {
//				open_ch = pop(&s);
//				if (((ch == ')' && open_ch == '(') ||
//					(ch == ']' && open_ch == '[') ||
//					(ch == '}' && open_ch == '{')) == 0) {
//					printf("조건 3 오류\n");
//					return 0;
//				}
//			}
//		}
//	}
//
//	if (is_empty(&s) == 0) {   // 스택에 남아있으면 오류, 조건1 판단
//		printf("조건1 오류\n");
//		return 0;
//	}
//	else return 1;
//}
//int main(void)
//{
//	char p[] = "}{ A+[B-C] }";
//	if (check_matching(p) == 1)
//		printf("%s 괄호검사성공\n", p);
//	else
//		printf("%s 괄호검사실패\n", p);
//	return 0;
//}


//코드업 1905
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

//후위 계산
//#include<stdio.h>
//#include<string.h>
//#define MAX_STACK_SIZE 100
//struct StackType {
//	int data[MAX_STACK_SIZE];
//	int top;
//};
//
//// 스택 초기화 함수
//void init_stack(struct StackType* p)
//{
//	p->top = -1;
//}
//
//// 공백 상태 검출 함수
//int is_empty(struct StackType* p)
//{
//	return (p->top == -1);
//}
//// 포화 상태 검출 함수
//int is_full(struct StackType* p)
//{
//	return (p->top == (MAX_STACK_SIZE - 1));
//}
//// 삽입함수
//void push(struct StackType* p, int item)
//{
//	if (is_full(p)) {
//		printf("포화상태\n");
//		return;
//	}
//	else p->data[++(p->top)] = item;
//}
//// 삭제함수
//int pop(struct StackType* p)
//{
//	if (is_empty(p)) {
//		printf("공백상태\n");
//		return 0;
//	}
//	else return p->data[(p->top)--];
//}
//int peek(struct StackType* p)
//{
//	if (is_empty(p)) {
//		printf("공백상태\n");
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
//		//  ch가 연산자일 경우 피연산자를 스택에서 pop한 뒤 계산 후 push
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
//		else {  //ch가 피연산자일 경우 push한다.
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
//	printf("후위 표기식은 %s\n", p);
//	result = evaluate(p);
//	printf("결과값은 %d\n", result);
//	return 0;
//}



//코드업 1929
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
//	printf("%d ", num);  // 역순 출력이기 때문에 함 수 호출 후 printf()이다.
//}
//
//int main() {
//	int n;
//	scanf_s("%d", &n);
//	reverse(n);
//}




//코드업 4681 : 검증수
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


//코드업 4716 : 지능형 기차2
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

// 코드업 4726   수열          여기ㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣㅣ
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

// 큐 (배열만)
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
//		printf("큐 MAX");
//		return;
//	}
//	else queue[++rear] = item;
//}
//
//int dequeue() {
//	if (is_empty()) {
//		printf("큐 NULL");
//		return -1;
//	}
//	else return queue[++front];
//}
//
//
//int main() {
//	int item = 0;
//}



//코드업 4771
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


//원형큐
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
//	if (is_full()) printf("포화");
//	else
//		rear = (rear + 1) % 7;
//		c_queue[rear] = item;
//}
//
//int dequeue() {
//	if (is_empty()) {
//		printf("공백");
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

//코드업 4592 풀기 (아직임)
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

//코드업 4846
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


//코드업 4891
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


//배열로 구현된 리스트 
//#include<stdio.h>
//#define MAX_LIST_SIZE 100 // 리스트의 최대크기
//
//typedef struct {
//	int array[MAX_LIST_SIZE]; // 배열 정의
//	int size; // 현재 리스트에 저장된 항목들의 개수
//} ArrayListType;
//
//// 리스트 초기화 함수
//void init(ArrayListType* L)
//{
//	L->size = 0;
//}
//// 리스트가 비어 있으면 1을 반환
//// 그렇지 않으면 0을 반환
//int is_empty(ArrayListType* L)
//{
//	return L->size == 0;
//}
//// 리스트가 가득 차 있으면 1을 반환
//// 그렇지 않으면 0을 반환
//int is_full(ArrayListType* L)
//{
//	return L->size == MAX_LIST_SIZE; // 왜 MAX_LIST_SIZE -1이 아닐까?
//}
//// 리스트 출력
//void print_list(ArrayListType* L)
//{
//	int i;
//	// 리스트에 있는 요소 어떻게 출력할까?
//	for (i = 0; i < L->size; i++) {
//		printf("%d->", L->array[i]);
//	}
//	printf("\n");
//}
//void insert_last(ArrayListType* L, int item)
//{
//	if (is_full(L) == 1) {
//		printf("리스트 오버플로우");
//	}
//	else
//		// 마지막에 삽입하는 명령어는?
//		L->array[L->size++] = item;
//}
//void insert(ArrayListType* L, int pos, int item)
//{
//	if (!is_full(L) && (pos >= 0) && (pos <= L->size)) {
//		// 삽입하는 명령어는?
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
//		printf("오류");
//		return -1;
//	}
//	//삭제하는 명령어는?
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
//	insert(&list, 0, 30);	// 0번째 위치에 30 추가
//	print_list(&list);
//	insert(&list, 0, 10);	// 0번째 위치에 10 추가
//	print_list(&list);
//	insert(&list, 1, 20);	// 1번째 위치에 20 추가
//	print_list(&list);
//	insert_last(&list, 40);	// 맨 끝에 40 추가
//	print_list(&list);
//	delete(&list, 0);		// 0번째 항목 삭제
//	print_list(&list);
//	return 0;
//}


//단순 연결리스트
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


//원형 연결 리스트
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
//	//단순 연결리스트와 동일
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

//단순 연결리스트 복습
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
//	NewNode->link = head; // 실수 금지
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

//이중 연결 리스트
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


//코드업 4036
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


//코드업 4026
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 5
//
//int arr[MAX_SIZE];
//void Bubble_sort() {
//	int temp;
//	for (int i = MAX_SIZE - 1; i >= 1; i--) { // 총 단계는 배열 사이즈-1 수행됨
//		for (int j = 0; j <= i - 1; j++) { // 뒤에서부터 거품처럼 정렬되는 구조
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

//이진 트리의 순회
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
//// 전위 순회
//void preorder(TreeNode* root) {
//	 if (root != NULL ) {//or(!root)도 가능	// 종료 조건
//		 printf("[%d] ",  root->data ); 	// 노드 방문(여기서 방문은 출력하는 것으로 정의하자. 방문은 응용에 따라 의미가 달라질 수 있다.)
//		 preorder( root->left );			// 왼쪽서브트리 순회
//		 preorder( root->right );			// 오른쪽서브트리 순회
//	}
//}

//void order(TreeNode* root) {
//	if (root != NULL) {//or(!root)도 가능	// 종료 조건
//		preorder( root->left );				// 왼쪽서브트리 순회
//		printf("[%d] ", root->data );		// 노드 방문(여기서 방문은 출력하는 것으로 정의하자. 방문은 응용에 따라 의미가 달라질 수 있다.)
//		preorder( root->right );			// 오른쪽서브트리 순회
//	}
//}
//
//void order(TreeNode* root) {
//	if (root != NULL) {//or(!root)도 가능	// 종료 조건
//		preorder( root->left );				// 왼쪽서브트리 순회
//		preorder( root->right );			// 오른쪽서브트리 순회
//		printf("[%d] ", root->data );		// 노드 방문(여기서 방문은 출력하는 것으로 정의하자. 방문은 응용에 따라 의미가 달라질 수 있다.)
//	}
//}

//int main(void)
//{
//	printf("전위 순회 결과=");
//	preorder(root);
//	printf("\n");
//
////	printf("중위 순회 결과 = ");
////	preorder(root);
////	printf("\n");
//
////	printf("후위 순회 결과=");
////	preorder(root);
////	printf("\n");
//	return 0;
//}

//이진 탐색 트리
//#include<stdio.h>
//#include<stdlib.h>
//struct Treenode {
//	int data;
//	struct Treenode* left, * right;
//};
//
//// 순환적인 탐색연산 재귀함수 코드
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
////반복문
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

//이진 탐색 트리 삽입
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
//	new->data = key;				//new노드에 key값 대입
//	new->left = new->right = NULL;	//new의 left와 right를 NULL로
//	return new;
//}
//
//struct Treenode* insert(struct Treenode* node, int key) {
//	if (node == NULL) 
//		return new_node(key);
//	if (node->data > key)
//		node->left = insert(node->left, key);	//insert함수 호출
//	else if (node->data < key)
//		node->right = insert(node->right, key);	//insert함수 호출
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
//	printf("루트 노드는 %d\n", root->data);
//	printf("루트의 오른쪽 자식의 오른쪽 자식은 %d\n", root->right->right->data);
//	return 0;
//}

//이진탐색트리 삭제#include<stdio.h>
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
//	while (current->left != NULL)   // 맨 왼쪽 단말 노드를 찾으러 내려감
//		 current = current->left;
//
//	return current;
//}
//struct Treenode* delete(struct Treenode* node, int key)
//{
//	if (node == NULL) return node;
//	if (key < node->data)
//		node->left = delete(node->left, key); // delete함수 호출
//	else if (key > node->data)
//		node->right = delete(node->right, key); // delete함수 호출
//	else {
//		// 첫 번째나 두 번째 경우
//		if (node->left == NULL) {
//			struct Treenode* temp = node->right; // 오른쪽 서브 트리 링크를 저장해둔다.
//				free(node);
//			return temp;
//		}
//		else if (node->right == NULL) {
//			struct Treenode* temp = node->left; // 왼쪽 서브 트리 링크를 저장해둔다.
//				free(node);
//			return temp;
//		}
//		// 세 번째 경우
//		struct Treenode* temp = min_value_node(node->right);
//		node->data = temp;// 가장 가까운 값(오른쪽 서브트리의 가장 작은 값)을 삭제할 노드의 데이터 필드에 대입한다. 
//		free(temp);// 가장 가까운 값의 노드를 삭제한다. 
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
//	printf("루트 노드는 %d\n", root->data);
//	printf("루트의 오른쪽 자식의 왼쪽 자식은 %d\n", root->right->left->data);
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
//	new->data = key; //new노드에 key값 대입
//	new->right = new->left = NULL; //new의 left와 right를 NULL로
//	return new;
//}
//
//struct Treenode* insert(struct Treenode* node, int key) {
//	if (node == NULL) return new_node(key);
//
//	if (node->data > key)
//		node->left = insert(node->left, key);//insert함수 호출
//	else if (node->data < key)
//		node->right = insert(node->right, key);//insert함수 호출
//
//	return node;
//}
//// 이진 탐색 트리와 키가 주어지면 키가 저장된 노드를 삭제하고 
//// 새로운 루트 노드를 반환한다. 
//struct Treenode* min_value_node(struct Treenode* node)
//{
//	struct Treenode* current = node;
//
//	// 맨 왼쪽 단말 노드를 찾으러 내려감
//	while (current->left != NULL)
//		current = current->left;
//
//	return current;
//}
//struct Treenode* delete(struct Treenode* node, int key)
//{
//	if (node == NULL) return node;
//	// 만약 키가 루트보다 작으면 왼쪽 서브 트리에 있는 것임
//	if (key < node->data)
//		node->left = delete(node->left, key);// delete함수 호출
//	// 만약 키가 루트보다 크면 오른쪽 서브 트리에 있는 것임
//	else if (key > node->data)
//		node->right = delete(node->left, key); // delete함수 호출
//	// 키가 루트와 같으면 이 노드를 삭제하면 됨
//	else {
//		// 첫 번째나 두 번째 경우
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
//		// 세 번째 경우
//		struct Treenode* temp = min_value_node(node->right);
//
//		// 중외 순회시 후계 노드를 복사한다. 
//		node->data = temp->data;
//		// 중외 순회시 후계 노드를 삭제한다. 
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
//	printf("루트 노드는 %d\n", root->data);
//	printf("루트의 왼쪽 자식은 %d\n", root->left->data);
//	printf("루트의 오른쪽 자식의 왼쪽 자식은 %d\n", root->right->left->data);
//	if (search(root, 60) != NULL)
//		printf("60 탐색 성공");
//	else
//		printf("60 탐색 실패");
//	return 0;
//}


// 코드업 4861
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


//코드업 4506
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

//코드업 4651
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


//코드업 4741
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
//코드업 4816
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

//코드업 4031
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