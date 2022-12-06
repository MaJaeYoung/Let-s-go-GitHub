

//for (int i = 1; i <= 2 * n; i++)    //시간복잡도 4n 빅오표기법 O(n)
//sum = sum + i;

//for (int i = 1; i <= 2 ^ n; i++)   //시복 2^n+1  빅표 O(2^n)
//sum = sum + i;                      // ^는 제곱표시 

//for (int i = 1; i <= 2 ^ n; i = i*2)   // 시복 2n  빅표 O(n)
//sum = sum + i;
// i = 1(2^0)   2^1 2^3 2^4 --- 2^n 까지증가 0부터시작해서 n+1


//#define _CRT_SECURE_NO_WARNINGS    //2개를 서로 교환
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

//#define _CRT_SECURE_NO_WARNINGS //더 큰수
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

//#define _CRT_SECURE_NO_WARNINGS   // 1부터 n까지 합
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


//#define _CRT_SECURE_NO_WARNINGS  배열 n번 숫자
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



//#define _crt_secure_no_warnings        //배열dp 모든 숫자 더하기
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


//#define _CRT_SECURE_NO_WARNINGS   // 팩토리얼 구하기
//#include<stdio.h>
//
//int fac(int n) {
//	if (n == 1)
//		return 1;
//	else
//	return n * fac(n - 1);   // 5 * 4이지만 4팩트를 모르니까 4호출 4*3팩트
//}							 //이런식으로 계속 호출해서 마지막에 1나오면 1개씩 곱한다
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
//	if (n ==1 || n==2)    // 종료 조건
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



//#define _CRT_SECURE_NO_WARNINGS   // 하노이탑
//#include<stdio.h>
//
//void hanoi_tower(int n, char start, char mid, char end) {
//	if (n == 1) {
//		//1.
//			printf("%d번 원판을 %c에서 %c로 옮긴다\n", n, start, end);
//	}
//	else {
//		/*2.*/   hanoi_tower(n - 1, start, end, mid);
//		/*3.*/	 printf("%d번 원판을 %c에서 %c로 옮긴다\n", n, start, end);
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


//#define _CRT_SECURE_NO_WARNINGS   // 알고리즘 9번 반환값 3
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



//#include <stdio.h>          //무작위 숫자 추가
//#include<stdlib.h>
////#include<time.h>     // 시간관련
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



//선택 정렬 알고리즘
//#include<stdio.h>                
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//
//int n = 10;;							// 정렬할 데이터 개수
//int list[10];
//void selection_sort(int list[], int n) {
//	int min, temp;
//	for (int i = 0; i < n-1; i++) {		// 선택정렬 알고리즘
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
//	srand(time(NULL));					// 씨드 변경 함수
//	for (int i = 0; i < 10; i++)
//		list[i] = rand() % 100;			// 랜덤값 반환 함수
//	selection_sort(list, n);
//	for (int i = 0; i < 10; i++)
//		printf("%d ", list[i]);
//}


 //선택 정렬 알고리즘
//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//
//int n = 10;							// 정렬할 데이터 개수
//int arr[10];
//
//void selection_sort(void) {
//	int  least;							//배열의 최소값의 인덱스
//	int tmp;							//임시 저장 변수
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
//	srand(time(NULL));				// 씨드 변경 함수
//	int n = MAX_SIZE;
//
//	for (int i = 0; i < n; i++) {
//		arr[i] = rand() % 100;		// 랜덤값 반환 함수
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

// 삽입 정렬 알고리즘
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



//버블 정렬 알고리즘
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
//	//정렬된 배열 출력
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//쉘 정렬
//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//
//void insertion_sort(int arr[], int first, int last, int gap) {
//	int i, j, key;
//	for (i = first + gap; i <= last; i= i+gap ) { /*i는 어떻게 증가해야 할까요 ?*/
//		key = arr[i];
//		for (j = i - gap; j >= 0 && arr[j] > key; j = j - gap) {
//			arr[j+gap] = arr[j];					//원래는 j+1에 j를 넣었지만 지금은 gap만큼 뒤로 밀린 곳에 삽입해야한다.
//		}
//		arr[j+gap] = key;						//마찬가지로 j+1에 key를 넣는 것이 아닌 gap만큼 더한 곳에 삽입해야한다.
//	}
//}
//
//void shell_sort(int arr[], int n) {
//	int i, gap;
//	for (gap = n / 2; gap>=1; gap = gap/2)	 /*//간격 정하기 gap 변수 활용*/ {
//		if (gap % 2 == 0) {
//				gap++;						//gap이 짝수일 때 1을 더하는 것이 좋은 것으로 분석되었다.
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


//스택 
//#include<stdio.h>
//#define MAX_STACK_SIZE 100
//
//int stack[MAX_STACK_SIZE];
//int top = -1;
//
////포화상태 확인
//int is_full() {
//    if (top == (MAX_STACK_SIZE - 1)) return 1;
//    else return 0;	// 스택이 가득 차있는지 검사
//}
//
////공백상태 확인
//int is_empty() {
//    if (top == -1) return 1;
//    else return 0;	// 스택이 비어있는지 검사
//}
//
//void push(int n) {
//    if (is_full() == 0) {
//        top += 1;
//        stack[top] = n;
//        /*printf("%d\n", stack[top]);*/
//    }
//    else printf("stack overflow");
//	// 스택에 새로운 요소를 삽입, 그 전에 스택이 가득 차지 않았는지 검사
//}
//
//int pop() {
//    if (is_empty() == 0) {
//        int n = stack[top];
//        top -= 1;
//        return n;
//    }
//    else printf("stack underflow");
//    // 스택에 하나의 요소를 제거, 그 전에 스택이 비어있는지 검사
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


//개선된 배열 스택
//#include<stdio.h>
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
//	return p->top == -1 ? 1 : 0;
//}
//
//// 포화 상태 검출 함수
//int is_full(struct StackType* p)
//{
//	return p->top == MAX_STACK_SIZE - 1 ? 1 : 0;
//}
//
//// 삽입함수
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
//// 삭제함수
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
//	struct StackType s;  // 스택을 정적으로 생성
//
//	init_stack(&s);   // 함수를 호출할 때 매개변수로 스택의 주소를 전달
//	push(&s, 1);
//	push(&s, 2);
//	push(&s, 3);
//
//	printf("%d\n", pop(&s));
//	printf("%d\n", pop(&s));
//	printf("%d\n", pop(&s));
//}

//괄호 검사 프로그램
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


//중위 --> 후위
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
////스택과 관련된 함수 모두 작성
//
//// 공백 상태 검출 함수
//int is_empty(struct stacks* st)
//{
//    return st->top == -1 ? 1 : 0; 
//}
//
//// 포화 상태 검출 함수
//int is_full(struct stacks* st)
//{
//    return st->top == MAX_STACK_SIZE - 1 ? 1 : 0; 
//}
//
//// 삽입함수
//void push(struct stacks* st, int item)
//{
//    if (is_full(st)) printf("overflow");
//    else st->stack[++st->top] = item;
//}
//
//// 삭제함수
//int pop(struct stacks* st)
//{
//    if (is_empty(st)) printf("underflow");
//    else return st->stack[st->top--];
//}
//
//
////연산자 우선순위 결정하는 함수
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
////전위 -> 후위
//void infix_to_postfix(char* s) {
//    struct stacks st;
//        char ch, c;
//        int length = strlen(s);
//        init_stack(&st);
//        for (int i = 0; i < length; i++) {
//            ch = s[i];
//
//            //연산자일때
//            if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
//                while (is_empty(&st)==0 && rank(ch) <= rank(peek(&st)) ) {
//                    printf("%c", pop(&st));
//                }
//                push(&st, ch);
//            }
//
//            //왼쪽 괄호일때 (
//            else if (ch == '(') {
//                push(&st, ch);
//            }
//
//            //오른쪽 괄호일때 )
//            else if (ch == ')') {
//                char c = pop(&st);
//                while (c != '(') {
//                    printf("%c", c);
//                    c = pop(&st);
//                }
//            }
//
//            //나머지(피연산자일때)
//            else {
//                printf("%c", ch);
//            }
//        }
//
//    //스택에 남아있는 것들 모두 출력
//        while (is_empty(&st) == 0) {
//            printf("%c", pop(&st));
//        }
//}
//
//int main() {
//    char* s = "(2+3)*4+9";
//    printf("중위표기수식 %s\n", s);
//    printf("후위표기수식 ");
//    infix_to_postfix(s);
//    return 0;
//}


//후위 표기 수식의 계산
//#include<stdio.h>
//#include<string.h>
//#define MAX_STACK_SIZE 100
//
//// 스택 코드 추가, 스택 구조체에서 배열은 -int-형으로!
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
//
//// 포화 상태 검출 함수
//int is_full(struct StackType* p)
//{
//	return (p->top == (MAX_STACK_SIZE - 1));
//}
//
//// 삽입함수
//void push(struct StackType* p, int item)
//{
//	if (is_full(p)) {
//		printf("포화상태\n");
//		return;
//	}
//	else p->data[++(p->top)] = item;
//}
//
//// 삭제함수
//int pop(struct StackType* p)
//{
//	if (is_empty(p)) {
//		printf("공백상태\n");
//		return 1;
//	}
//	else return p->data[(p->top)--];
//}
//
//int peek(struct StackType* p)
//{
//	if (is_empty(p)) {
//		printf("공백상태\n");
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
//		// ch가 연산자일 경우 피연산자를 스택에서 pop한 뒤 계산 후 push
//		if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
//			op2 = pop(&s);
//			op1 = pop(&s);
//
//			switch(ch) {
//			case '+': push(&s, op1 + op2); break;
//			case '-': push(&s, op1 - op2); break;
//			case '*': push(&s, op1 * op2); break;
//			case '/': push(&s, op1 / op2); break;
//			}// 연산을 수행한 후 스택에 결과값을 push한다.
//		}
//
//		// ch가 피연산자일 경우
//		else {
//			value = ch - '0';
//			push(&s, value);
//		}
//	}
//	return pop(&s);
//}
//
//int main(void) {
//	char p[] = "82/3-32*+";    //오류가 난다면 char앞에 const추가
//	int result;
//	printf("후위 표기식은 %s\n", p);
//	result = evaluate(p);
//	printf("결과값은 %d\n", result);
//	return 0;
//}



// 큐 시작

// 선형큐
//#include <stdio.h>
//#include <stdlib.h>
//#define MAX_QUEUE_SIZE 5
//
//typedef struct queue { 				// 큐 타입
//	int front;
//	int rear;
//	int  data[MAX_QUEUE_SIZE];
//} QueueType;
//
//
//void init_queue(QueueType* q)
//{
//	q->rear = -1;  // 초기화 값은?
//	q->front = -1; // 초기화 값은?
//}
//int is_full(QueueType* q)
//{
//	if (q->rear == MAX_QUEUE_SIZE-1) //큐가 꽉차있는 조건은?
//		return 1;
//	else
//		return 0;
//}
//int is_empty(QueueType* q)
//{
//	if (q->front == q->rear)	//큐가 비어있는 조건은?
//		return 1;
//	else
//		return 0;
//}
//void enqueue(QueueType* q, int item)
//{
//	if (is_full(q) == 1 ) {     //삽입 전 검사해야 할 함수는? 
//		printf("큐가 포화상태입니다.");
//		return;
//}
//	return q->data[ ++(q->rear)] = item;  // 큐에 item 삽입하는 명령어는?
//}
//
//int dequeue(QueueType* q)
//{
//	if (is_empty(q) ==1 ) {  //삭제 전 검사해야 할 함수는? 
//		printf("큐가 공백상태입니다.");
//		return -1;
//}
//	return q->data[ ++(q->front) ]; 			// 큐에 있는 값을 삭제하는 명령어는?
//}
//void queue_print(QueueType* q) {  // 큐 안에 있는 데이터를 출력하는 함수
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
//	enqueue(&q, 10);  //10 삽입
//	queue_print(&q);
//	enqueue(&q, 20);   //20 삽입
//	queue_print(&q);
//	enqueue(&q, 30); //30 삽입
//	queue_print(&q);
//
//	dequeue(&q); // 디큐(큐 안에 있는 값 삭제)
//	queue_print(&q);
//
//	dequeue(&q); // 디큐(큐 안에 있는 값 삭제)
//	queue_print(&q);
//
//	return 0;
//}



// 원형큐
//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_QUEUE_SIZE 5
//typedef struct queue { // 큐 타입
//	int  data[MAX_QUEUE_SIZE];
//	int  front, rear;
//} QueueType;
//
//// 초기화 함수
//void init_queue(QueueType* q)
//{
//	q->front = q->rear = 0;
//}
//
//// 공백 상태 검출 함수
//int is_empty(QueueType* q)
//{
//	if (q->front == q->rear)
//		return 1;
//	else
//		return 0;
//}
//
//// 포화 상태 검출 함수
//int is_full(QueueType* q)
//{
//	if ((q->rear + 1) % MAX_QUEUE_SIZE == q->front)
//		return 1;
//	else
//		return 0;
//}
//
//
//// 삽입 함수
//void enqueue(QueueType* q, int item)
//{
//	if (is_full(q))
//		printf("큐가 포화상태입니다");
//	// 원형큐에 item 삽입 명령어는?
//	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
//	q->data[q->rear] = item;
//}
//
//// 삭제 함수
//int dequeue(QueueType* q)
//{
//	if (is_empty(q))
//		printf("큐가 공백상태입니다");
//	// 원형큐에 삭제 명령어는?
//	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
//	return q->data[q->front];
//}
//// 원형큐 출력 함수
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


// 덱큐
//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_QUEUE_SIZE 5
//typedef struct dequeue { // 큐 타입
//	int  data[MAX_QUEUE_SIZE];
//	int  front, rear;
//} DequeType;
//
//// 초기화 함수
//void init_deque(DequeType* q)
//{
//	q->front = q->rear = 0;
//}
//
//// 공백 상태 검출 함수
//int is_empty(DequeType* q)
//{
//	if (q->rear == q->front)
//		return 1;
//	else
//		return 0;
//}
//
//// 포화 상태 검출 함수
//int is_full(DequeType* q)
//{
//	if ((q->rear + 1) % MAX_QUEUE_SIZE == q->front)
//		return 1;
//	else
//		return 0;
//}
//
//// 후단 삽입 함수(스택 push)
//void add_rear(DequeType* q, int item)
//{
//	if (is_full(q))
//		printf("큐가 포화상태입니다");
//	// 덱에서 item 삽입 명령어는?
//	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
//	q->data[q->rear] = item;
//}
//
//// 후단 삭제 함수(스택 pop)
//int delete_rear(DequeType* q)
//{
//	if (is_empty(q))
//		printf("큐가 공백상태입니다");
//	// 덱에서 삭제 명령어는?
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
//// 전단 삭제 함수(스택 pop)
//int delete_front(DequeType* q)
//{
//	if (is_empty(q))
//		printf("큐가 공백상태입니다");
//	// 덱에서 삭제 명령어는?
//	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
//	return q->data[q->front];
//}
//// 전단 삽입 함수(스택 push)
//void add_front(DequeType* q, int item)
//{
//	if (is_full(q))
//		printf("큐가 포화상태입니다");
//	// 덱에서 item 삽입 명령어는?
//	q->data[q->front] = item;
//	q->front = (q->front -1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
//}
//// 덱 출력 함수
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



//배열로 구현된 리스트 프로그램
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
//	for (i = 0; i < (L->size); i++) {
//		printf("%d->", L->array[i]);
//	}
//	printf("\n");
//}
//void insert_last(ArrayListType* L, int item)
//{
//	if (is_full(L) == 1) {
//		printf("리스트 오버플로우");
//	}
//	// 마지막에 삽입하는 명령어는?
//	else {
//		L->array[L->size++] = item;
//	}
//}
//void insert(ArrayListType* L, int pos, int item)
//{
//	if (!is_full(L) && (pos >= 0) && (pos <= L->size)) {
//		// 삽입하는 명령어는?
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
//		printf("오류");
//		return -1;
//	}
//	//삭제하는 명령어는?
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



//연결리스트 C언어 프로그램 구현하기
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct ListNode { 	// 노드 타입을 구조체로 정의한다.
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
//// 노드 pre 뒤에 새로운 노드 삽입
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
//// pre가 가리키는 노드의 다음 노드를 삭제한다. 
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

//이진 트리 순회
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
//	if (root != NULL ) {				// 종료 조건
//		printf("[%d] ", root->data); 	// 노드 방문(여기서 방문은 출력하는 것으로 정의하자. 방문은 응용에 따라 의미가 달라질 수 있다.)
//		preorder(root->left);			// 왼쪽서브트리 순회
//		preorder(root->right);			// 오른쪽서브트리 순회
//	}
//}
//
//// 중위 순회
//void inorder(TreeNode* root) {
//	if (root != NULL) {					// 종료 조건
//		preorder(root->left);			// 왼쪽서브트리 순회
//		printf("[%d] ", root->data); 	// 노드 방문(여기서 방문은 출력하는 것으로 정의하자. 방문은 응용에 따라 의미가 달라질 수 있다.)
//		preorder(root->right);			// 오른쪽서브트리 순회
//	}
//}
//
//// 후위 순회
//void postorder(TreeNode* root) {
//	if (root != NULL) {					// 종료 조건
//		preorder(root->left);			// 왼쪽서브트리 순회
//		preorder(root->right);			// 오른쪽서브트리 순회
//		printf("[%d] ", root->data); 	// 노드 방문(여기서 방문은 출력하는 것으로 정의하자. 방문은 응용에 따라 의미가 달라질 수 있다.)
//	}
//}
//
//int main(void)
//{
//	printf("전위 순회 결과=");
//	preorder(root);
//	printf("\n");
//
//	printf("중위 순회 결과=");
//	inorder(root);
//	printf("\n");
//
//	printf("후위 순회 결과=");
//	postorder(root);
//	printf("\n");
//
//	return 0;
//}


//======이진 탐색트리 정의========
//의사코드 알고리즘
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
//-재귀함수 C언어 코드
//#include<stdio.h>
//#include<stdlib.h>
//struct Treenode {
//	int data;
//	struct Treenode* left, * right;
//};
//
//struct Treenode* search(struct Treenode* node, int key) {
//	if (node == NULL)							    //1. 반환?
//		if (key == node->data)					    // 2. 반환?
//
//		else if (key < node->data)
//			return  search(node->left, key);        // 3. 반환?
//
//		else
//			return   search(node->right, key);      // 4. 반환?
//}

//반복문 C언어 코드
//#include<stdio.h>
//#include<stdlib.h>
//
//struct Treenode {
//	int data;
//	struct Treenode* left, * right;
//};
//
//struct Treenode* search(struct Treenode* node, int key) {
//	while (node != NULL ) {			//1. 조건문?
//		if (key == node->data)
//			return node;			//2. 반환?
//
//		else if (key < node->data)
//			return node->left;		//3. 뭐가 들어갈까요?
//
//		else
//			return node->right;		//4. 뭐가 들어갈까요?
//	}
//	return NULL;
//}


//이진탐색트리의 삽입 알고리즘
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
//		NewNode->data = key;		//new노드에 key값 대입
//		NewNode->left = NULL;		//new의 left와 right를 NULL로
//		NewNode->right = NULL;
//	return NewNode;
//}
//
//struct Treenode* insert(struct Treenode* node, int key) {
//	if (node == NULL) return new_node(key);
//			
//	if (node->data > key)
//		node->left = insert(node->left, key);		//insert함수 호출
//	else if (node->data < key)
//		node->right = insert(node->right, key);			//insert함수 호출
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


//이진탐색트리의 삭제 알고리즘
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
//	while (current != NULL )   // 맨 왼쪽 단말 노드를 찾으러 내려감
//		 current = current->left;
//
//	return current;
//}
//struct Treenode* delete(struct Treenode* node, int key)
//{
//	if (node == NULL) return node;
//	if (key < node->data)
//		node->left = delete(node->left, key);	// delete함수 호출
//	else if (key > node->data)
//		node->right = delete(node->right, key);// delete함수 호출
//	else {
//		// 첫 번째나 두 번째 경우
//		if (node->left == NULL) {
//			struct Treenode* temp = node->right;// 오른쪽 서브 트리 링크를 저장해둔다.
//			free(node);
//			return temp;
//		}
//		else if (node->right == NULL) {
//			struct Treenode* temp = node->left;// 왼쪽 서브 트리 링크를 저장해둔다.
//			free(node);
//			return temp;
//		}
//		// 세 번째 경우
//			struct Treenode* temp = min_value_node(node->right);
//			node->data = temp->data;				// 가장 가까운 값(오른쪽 서브트리의 가장 작은 값)을 삭제할 노드의 데이터 필드에 대입한다. 
//			node->right = delete(node->right, temp->data);	// 가장 가까운 값의 노드를 삭제한다. 
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
//	printf("루트 노드는 %d\n", root->data);
//	printf("루트의 오른쪽 자식의 왼쪽 자식은 %d\n", root->right->left->data);
//	return 0;
//}


