//#include "stack.h"
//void Stack::push(int dat) {
//	if (SP < SZ) {
//		Data[SP] = dat;
//		SP++;
//	}
//	else cout << INVALID_POS;
//}
//
//int Stack::pop() {
//	if (SP > 0) return Data[--SP];
//	return EMPTY_STACK;
//}
//
//int Stack::iterate_pop(int* org, int cnt) {
//	int tcnt = cnt, dat;
//
//	if (SP > 0) {
//		for (int a = SP - 1; a >= 0; a--) {
//			dat = this->pop();
//			printf("%d ", dat);
//			org[tcnt] = dat;
//			tcnt++;
//		}
//	}
//	return tcnt;
//}
//
//void Radix_Sort(int org[], int SZ) {
//	int Max = 0, Maxdigit;
//	for (int a = 0; a < SZ; a++) {
//		if (org[a] > Max) {
//			Max = org[a];
//		}
//	}
//	Maxdigit = (int)log10(Max) + 1; // 최대자리수 설정
//	
//
//	Stack stack[10];
//	for (int a = 0; a < 10; a++) {
//		stack[a] = Stack(SZ);
//	}
//
//	int dat = 0, r = 0, deci = 1, direction = 1; //오름차순
//	if (Maxdigit % 2 == 0) direction = -direction; //최대자리수가 짝수
//
//	int cnt = 0, si = 0, gg = 9; // step = 1;
//
//	for (int c = 0; c < Maxdigit; c++) {
//		for (int a = 0; a < SZ; a++) {
//			dat = org[a];
//			r = dat / deci % 10;			//각 Digit별 모듈로 수
//			cout << dat << " ";
//			stack[r].push(dat);				//해당 모듈로 스택에 푸시
//		}
//		cout << endl;
//
//		cnt = 0;
//		if (direction == 1) {             //오름차순
//			si = 0; gg = 10;
//		}
//		else {
//			si = 9; gg = -1;				//내림차순
//		}
//
//		for (int a = si; a != gg; a += direction) {
//			cnt = stack[a].iterate_pop(org, cnt);  //각 모듈로 스택으로부터 팝
//		}
//
//		cout << endl << endl;
//		deci *= 10;
//		direction = -direction;
//	}
//	for (int a = 0; a < 10; a++) {
//		stack[a].clear();						// 각 모듈로 스택 클리어
//	}
//}