

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
#include<stdio.h>
#define MAX_STACK_SIZE 100
struct StackType {
	int data[MAX_STACK_SIZE];
	int top;
};

// 스택 초기화 함수
void init_stack(struct StackType* p)
{
	p->top = -1;
}

// 공백 상태 검출 함수
int is_empty(struct StackType* p)
{
	return p->top == -1 ? 1 : 0;
}

// 포화 상태 검출 함수
int is_full(struct StackType* p)
{
	return p->top == MAX_STACK_SIZE - 1 ? 1 : 0;
}

// 삽입함수
void push(struct StackType* p, int item)
{
	if (is_full(p)) {
		printf("overflow");
	}
	else {
		p->data[++p->top] = item;
	}
}

// 삭제함수
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
	struct StackType s;  // 스택을 정적으로 생성

	init_stack(&s);   // 함수를 호출할 때 매개변수로 스택의 주소를 전달
	push(&s, 1);
	push(&s, 2);
	push(&s, 3);

	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));
}
