//坪球穣 1366
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

//坪球穣 1355
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

//坪球穣 1511
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


// 2託据 壕伸
//坪球穣 1508
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
//	printf("\n");         //岩 隔聖凶澗 皐奄
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

//諮脊
//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//void insertion_sort() {
//	int key, i, j;
//	for (i = 1; i < MAX_SIZE; i++) { // i亜 1採斗 獣拙馬澗 依拭 政税
//		key = arr[i];
//		for (j = i - 1; j >= 0 && arr[j] > key; j--) { // key 葵税 是帖 達奄
//			arr[j + 1] = arr[j];
//		} 
//		arr[j + 1] = key;	// key 葵 諮脊
//	}
//} // <<-- 戚暗 蒸醸製繕宿
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

//獄鷺
//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//void Bubble_sort() {
//	int temp;
//	for (int i = MAX_SIZE-1; i >=1 ; i--) { // 恥 舘域澗 壕伸 紫戚綜-1 呪楳喫
//		for (int j = 0; j <= i-1; j++) { // 及拭辞採斗 暗念坦軍 舛慶鞠澗 姥繕
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



//諦
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
//			// 葵 嘘発
//			temp = arr[low];
//			arr[low] = arr[high];
//			arr[high] = temp;
//		}
//	} while (low < high);
//
//	// 葵 嘘発(嬢恐 葵級聖 郊蚊操醤拝猿推?)
//	temp = arr[left];
//	arr[left] = arr[high];
//	arr[high] = pivot;
//	return high;
//}
//
//void quick_sort(int left, int right) {
//	// left澗 舛慶背醤 拝 壕伸税 湛 昔畿什 葵, right澗 原走厳 昔畿什 葵
//	if (left < right) {
//		int q = partition(left, right); // partition敗呪澗 杷鎖税 是帖(昔畿什)研 鋼発
//		quick_sort(left, q - 1);
//		quick_sort(q + 1, right); // 神献楕 軒什闘 古鯵痕呪澗?
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



//什澱 硝壱軒葬
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

//坪球穣 1402
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


//胤硲伊紫
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
//		printf("神獄巴稽酔");
//	else
//		p->data[++(p->top)] = item;
//}
//int pop(struct StackType* p)
//{
//	if (is_empty(p))
//		printf("情希巴稽酔");
//	else
//		return p->data[(p->top)--];
//}
//int check_matching(char in[])
//{
//	StackType s;
//	char ch, open_ch;
//	int i, n = strlen(in);  	// n拭澗 庚切伸税 掩戚亜 脊径喫
//	init_stack(&s);			// 什澱税 段奄鉢
//
//	for (i = 0; i < n; i++) {
//		ch = in[i];		// ch = 陥製 庚切
//		if (ch == '(' || ch == '[' || ch == '{')
//			push(&s, ch);
//		else if (ch == ')' || ch == ']' || ch == '}') {
//			if (is_empty(&s) == 1) {
//				printf("繕闇 2 神嫌\n");
//				return 0;
//			}
//			else {
//				open_ch = pop(&s);
//				if (((ch == ')' && open_ch == '(') ||
//					(ch == ']' && open_ch == '[') ||
//					(ch == '}' && open_ch == '{')) == 0) {
//					printf("繕闇 3 神嫌\n");
//					return 0;
//				}
//			}
//		}
//	}
//
//	if (is_empty(&s) == 0) {   // 什澱拭 害焼赤生檎 神嫌, 繕闇1 毒舘
//		printf("繕闇1 神嫌\n");
//		return 0;
//	}
//	else return 1;
//}
//int main(void)
//{
//	char p[] = "}{ A+[B-C] }";
//	if (check_matching(p) == 1)
//		printf("%s 胤硲伊紫失因\n", p);
//	else
//		printf("%s 胤硲伊紫叔鳶\n", p);
//	return 0;
//}


//坪球穣 1905
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

//板是 域至
//#include<stdio.h>
//#include<string.h>
//#define MAX_STACK_SIZE 100
//struct StackType {
//	int data[MAX_STACK_SIZE];
//	int top;
//};
//
//// 什澱 段奄鉢 敗呪
//void init_stack(struct StackType* p)
//{
//	p->top = -1;
//}
//
//// 因拷 雌殿 伊窒 敗呪
//int is_empty(struct StackType* p)
//{
//	return (p->top == -1);
//}
//// 匂鉢 雌殿 伊窒 敗呪
//int is_full(struct StackType* p)
//{
//	return (p->top == (MAX_STACK_SIZE - 1));
//}
//// 諮脊敗呪
//void push(struct StackType* p, int item)
//{
//	if (is_full(p)) {
//		printf("匂鉢雌殿\n");
//		return;
//	}
//	else p->data[++(p->top)] = item;
//}
//// 肢薦敗呪
//int pop(struct StackType* p)
//{
//	if (is_empty(p)) {
//		printf("因拷雌殿\n");
//		return 0;
//	}
//	else return p->data[(p->top)--];
//}
//int peek(struct StackType* p)
//{
//	if (is_empty(p)) {
//		printf("因拷雌殿\n");
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
//		//  ch亜 尻至切析 井酔 杷尻至切研 什澱拭辞 pop廃 及 域至 板 push
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
//		else {  //ch亜 杷尻至切析 井酔 push廃陥.
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
//	printf("板是 妊奄縦精 %s\n", p);
//	result = evaluate(p);
//	printf("衣引葵精 %d\n", result);
//	return 0;
//}



//坪球穣 1929
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
//	printf("%d ", num);  // 蝕授 窒径戚奄 凶庚拭 敗 呪 硲窒 板 printf()戚陥.
//}
//
//int main() {
//	int n;
//	scanf_s("%d", &n);
//	reverse(n);
//}




//坪球穣 4681 : 伊装呪
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


//坪球穣 4716 : 走管莫 奄託2
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

// 坪球穣 4726   呪伸          食奄びびびびびびびびびびびびびび
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

// 泥 (壕伸幻)
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
//		printf("泥 MAX");
//		return;
//	}
//	else queue[++rear] = item;
//}
//
//int dequeue() {
//	if (is_empty()) {
//		printf("泥 NULL");
//		return -1;
//	}
//	else return queue[++front];
//}
//
//
//int main() {
//	int item = 0;
//}



//坪球穣 4771
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


//据莫泥
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
//	if (is_full()) printf("匂鉢");
//	else
//		rear = (rear + 1) % 7;
//		c_queue[rear] = item;
//}
//
//int dequeue() {
//	if (is_empty()) {
//		printf("因拷");
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

//坪球穣 4592 熱奄 (焼送績)
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

//坪球穣 4846
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


//坪球穣 4891
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

//坪球穣 4816
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int A = 300, B = 60, C = 10;
	int T, a = 0, b = 0, c = 0;
	scanf("%d", &T);
		a = T / A;
		T = T % A;

		b = T / B;
		T = T % B;

		c = T / C;
		T = T / C;


	printf("%d %d %d", a,b,c);
	return 0;
}