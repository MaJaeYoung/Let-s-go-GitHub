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