//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int a = 3, * b = &a;
//    cout << a << " " << b << " " << *b << "\n";
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{                                       // /b(7) 단 초기화 할때만 가능하다. 
//    int a = 3, b(7), c(b<<2);           // (<<) shift 연산자 2진수 옆칸으로
//    cout << a << " " << b << " " << c << "\n";
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int a = 3, b(7), c(b<<2);
//    int ar[6] = { 1,2,3,4,5,6 };
//    int *br[2];
//
//    br[1] = &ar[3];
//
//    cout << ar[3] << " " << br[1][2] << "\n";
//}



//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int a = 3, b(7), c(b << 2);
//    int ar[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int *br[2];
//
//    for (int k = 0; k < 2; k++) {
//        br[k] = &ar[k*5];
//    }
//    
//
//    for (int l = 0; l < 2; l++) {
//        for (int m = 0; m < 5; m++) {
//            cout << br[l][m] << " ";
//        }
//        cout << endl;
//    }
//
//}


//#include <iostream>
//
//using namespace std;
//
//int main()
//{    
// 
//    // bool 선언           //출력 = 참 (1) & 거짓 (0)
//    bool b0 = 0 == 0;
//    bool b1 = 0 < 1;
//    bool b2 = 0 > 1;
//
//    // 1 ------------------------------------------------------------------
//    cout << "bool 출력" << ::endl;
//    cout << "b0 : " << b0 << ::endl;
//    cout << "b1 : " << b1 << ::endl;
//    cout << "b2 : " << b2 << ::endl;
//    cout << ::endl;
//
//    // 2 ------------------------------------------------------------------
//    cout << "bool 출력을 true, false로 하도록 변경" << ::endl;
//    cout.setf(::ios_base::boolalpha);
//    cout << "b0 : " << b0 << ::endl;
//    cout << "b1 : " << b1 << ::endl;
//    cout << "b2 : " << b2 << ::endl;
//    cout << ::endl;
//
//    // 3 ------------------------------------------------------------------
//    ::cout << "bool과 if" << ::endl;
//    if (b0)
//        ::cout << "b0" << ::endl;
//    if (b1)
//        ::cout << "b1" << ::endl;
//    if (b2)
//        ::cout << "b2" << ::endl;
//    cout << ::endl;
//
//    // 4 ------------------------------------------------------------------
//    cout << "bool 에서 정수로 형 변환" << ::endl;
//    int itrue = true;
//    int ifalse = false;
//
//    cout << itrue << ::endl;
//    cout << ifalse << ::endl;
//    cout << ::endl;
//
//    // 5 ------------------------------------------------------------------
//    cout << "정수에서 bool로 형 변환" << ::endl;
//    bool btrue = 100;
//    bool bfalse = 0;
//
//    cout << btrue << ::endl;
//    cout << bfalse << ::endl;
//    return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int n = 1;
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 4; j++) {
//            cout.width(4);
//            cout << n;
//            n++;
//        }
//        cout << endl;
//    }
//    return 0;
//}


//#include <iostream>
//#include <typeinfo>
 //using namespace std;
 // 
 // 
//int main()
//{
//	auto a = true;
//	auto b = 'A';
//	auto c = L'B';
//	auto d = "문자열";
//	auto e = 815;
//	auto f = 3.14;
//
//	cout << "값\t크기\t자료형" << endl;
//	cout << a << '\t' << sizeof(a) << '\t' << typeid(a).name() << endl;
//	cout << b << '\t' << sizeof(b) << '\t' << typeid(b).name() << endl;
//	cout << c << '\t' << sizeof(c) << '\t' << typeid(c).name() << endl;
//	cout << d << '\t' << sizeof(d) << '\t' << typeid(d).name() << endl;
//	cout << e << '\t' << sizeof(e) << '\t' << typeid(e).name() << endl;
//	cout << f << '\t' << sizeof(f) << '\t' << typeid(f).name() << endl;
//}


// 시간 C로
//#include <iostream>
//using namespace std;
//
//void Cvt_S2H(int ss, int* h, int* m, int* s);
//int Cvt_H2S(int h, int m, int s);
//
//int main() {
//	int h1 = 7, m1 = 49, s1 = 52;
//	int h2 = 4, m2 = 32, s2 = 20;
//	int hh, mm, ss;
//	int ss1, ss2, ssp;
//
//	ss1 = Cvt_H2S(h1, m1, s1);
//	ss2 = Cvt_H2S(h2, m2, s2);
//
//	Cvt_S2H(ss1 + ss2, &hh, &mm, &ss);
//	printf("A + B = %2d : %2d : %2d\n", hh, mm, ss);
//
//	Cvt_S2H(ss2 - ss1, &hh, &mm, &ss);
//	printf("A - B = %2d : %2d : %2d\n", hh, mm, ss);
//
//	Cvt_S2H(ss1 * 3, &hh, &mm, &ss);
//	printf("A * 3 = %2d : %2d : %2d\n", hh, mm, ss);
//
//	Cvt_S2H(ss1 / 3, &hh, &mm, &ss);
//	printf("A / 3 = %2d : %2d : %2d\n", hh, mm, ss);
//
//}
//
//int Cvt_H2S(int h,int m,int s) {
//	int ssp = h * 60 * 60 + m * 60 + s;
//	return ssp;
//}
//
//void Cvt_S2H(int ssp, int* hh, int* mm, int* ss) {
//	ssp = abs(ssp);
//	*hh = ssp / 60 / 60;
//	*mm = ssp / 60 % 60;
//	*ss = ssp % 60;
//}

// 시분초 cpp
//#include <iostream>
//using namespace std;
//
//class MyTime {
//	int hh, mm, ss;
//	int tss;
//public:
//	MyTime();
//	MyTime(int h, int m, int s);
//	void showme();
//	MyTime Cvt_S2H(int n);
//	MyTime operator + (MyTime t);
//	MyTime operator - (MyTime t);
//	MyTime operator * (int n);
//	friend MyTime operator * (int n, MyTime t);
//	MyTime operator / (int n);
//};
//int main(void) {
//	MyTime result;
//	MyTime t1(7, 29, 48); t1.showme();
//	MyTime t2(4, 54, 39); t2.showme();
//
//	result = t1 + t1 + t1; result.showme();
//	result = t2 - t1 + t1; result.showme();
//	result = t1 * 3; result.showme();
//	result = 3 * t1; result.showme();
//	result = t2 / 4; result.showme();
//	result = result.Cvt_S2H(300); result.showme();
//}
//MyTime::MyTime() {
//	hh = mm = ss = tss = 0;
//}
//MyTime::MyTime(int h, int m, int s) {
//	hh = h; mm = m; ss = s;
//	tss = h * 60 * 60 + m * 60 + s;
//}
//void MyTime::showme() {
//	cout.width(3); cout << hh << " :";
//	cout.width(3); cout << mm << " :";
//	cout.width(3); cout << ss << "\t";
//	cout.width(5); cout << tss << endl;
//}
//MyTime MyTime::Cvt_S2H(int tt) {
//	tt = abs(tt);
//	MyTime result(tt / 60 / 60, tt / 60 % 60, tt % 60);
//	return result;
//}
//MyTime MyTime::operator + (MyTime t) {
//	return Cvt_S2H(tss - t.tss);
//}
//MyTime MyTime::operator - (MyTime t) {
//	return Cvt_S2H(tss - t.tss);
//}
//MyTime MyTime::operator * (int n) {
//	return Cvt_S2H(tss * n);
//}
//MyTime operator * (int n, MyTime t) {
//	return t * n;
//}
//MyTime MyTime::operator / (int n) {
//	return Cvt_S2H(tss / n);
//}

// 퀵정렬 c++ 
//#include <iostream>
//using namespace std;
//
//int arr1[] = { 6,2,9,3,8,4,5,1,12,15,27,14,9999999 };
//
//void printout(int* p, int num) {
//	for (int a = 0; a < num; a++) {
//		printf("%4d", p[a]);
//	}
//	cout << endl;
//}
//
//void swap(int high, int low) {
//	int tmp = arr1[high];
//	arr1[high] = arr1[low];
//	arr1[low] = tmp;
//}
//
//void Quick(int* arr, int  si, int gg) {
//	int pivot = arr[si];
//	int high, low;
//
//	high = si;		// 나보다 큰것 위치
//	low = gg;	    // 나보다 작은것 위치
//
//	if (high < low) {
//		while(high < low) {
//		while (arr[high] <= pivot)	high++;
//		while (arr[low] > pivot)	low--;
//
//		if (high < low) swap(high, low);
//		else { swap(si, low); break; }
//
//	}
//	//cout << arr[high] << "   " << arr[low] << endl;
//	Quick(arr, si, low-1);
//	Quick(arr, low + 1, gg);
//
//	}
//}
//	
//
//int main() {
//	int SZ = sizeof(arr1) / sizeof(int);
//	printout(arr1, SZ-1);       //Before Sorting
//	Quick(arr1, 0, SZ-1);		//Quick Sorting
//	printout(arr1, SZ-1);		//After Sorting
//
//}




//// main.cpp
//#include "Heap.h"
//
//int main(void) {
//	element dat[]{ 69,10,30,2,16,8,31,22,6,3,9,5,7,1,9 };
//	int cnt = sizeof(dat) / sizeof(element);
//	HeapType Heap(cnt);
//	Heap.creatHeap();
//
//	printf("\n 입 력 자 료:\t"); p_out(dat, cnt);
//	printf("\n\n Heap Tree:\n");
//	for (int a = 0; a < cnt; a++) {
//		Heap.insertHeap(dat[a]);
//		Heap.printHeap();
//	}
//	printf("\n Delete Heap:\n");
//	for (int a = 1; a <= cnt; a++) {
//		printf("\n Delete Value: %d\n", Heap.deleteHeap());
//		Heap.printHeap();
//	}
//}
//
//
//
//// func.cpp
//#include "Heap.h"
//// Heap 생성자
//HeapType::HeapType(int cnt) {
//	heapSize = 0;
//	heap = (element*)malloc(sizeof(element) * (cnt + 1));
//}
//
//// Heap 초기화
//HeapType* HeapType::creatHeap() {
//	HeapType* h = (HeapType*)malloc(sizeof(HeapType));
//	return h;
//}
//
//// Heap 노드 삽입
//void HeapType::insertHeap(element item) {
//	heapSize++;
//
//	int a = heapSize;
//	while ((a != 1) && (item < heap[a / 2])) {
//		heap[a] = heap[a / 2];
//		a /= 2;
//	}
//	heap[a] = item;
//}
//
//// Heap 노드 삭제
//element HeapType::deleteHeap() {
//	element item = heap[1], tmp = heap[heapSize];
//	heapSize--;
//
//	int parent = 1, child = 2;
//	while (child <= heapSize) {
//		if (child < heapSize && heap[child] > heap[child + 1]) child++;
//		// heapSize보다 작은 child는 꼭 오른쪽 child가 있다.
//
//		if (tmp > heap[child]) {
//			heap[parent] = heap[child];
//			parent = child;
//			child = child * 2;
//		}
//		else break;
//	}
//	heap[parent] = tmp;
//
//	return item;
//}
//// Heap 노드 출력
//void HeapType::printHeap() {
//	double level = 0.; // level이 정수일 때마다 줄을 바꾸어 출력
//
//	for (int a = 1; a <= heapSize; a++) {
//		level = log(a) / log(2);
//		switch ((int)level) {
//		case 0: cout.width(32); cout << heap[a]; break;
//		case 1: cout.width(16); cout << heap[a]; cout.width(16); cout << ' '; break;
//		case 2: cout.width(8); cout << heap[a]; cout.width(8); cout << ' '; break;
//		case 3: cout.width(4); cout << heap[a]; cout.width(4); cout << ' '; break;
//		}
//		level = log(a + 1) / log(2);
//		if ((int)level == level) cout << endl;
//	} if ((int)level != level) cout << endl;
//	cout << "====================================================================\n";
//}
//// 입력 자료 출력
//void p_out(element* p, int cnt) {
//	for (int a = 0; a < cnt; a++) {
//		cout.width(3);
//		cout << *(p + a);
//	}
//	cout << endl;
//}


//#include <iostream>                  //수평수평수평수평수평수평수평수평
//using namespace std;
//
//class Complex {
//	double real;
//	double imag;
//public:
//	Complex();
//	Complex(double real, double imag);
//	void showme();
//	Complex operator + (Complex& c);
//	Complex operator - (Complex& c);
//	Complex operator * (Complex& c);
//	Complex operator * (double d);
//	Complex operator / (Complex& c);
//};
//
//Complex Complex::operator + (Complex& c) {
//	return Complex(real + c.real, imag + c.imag);
//}
//
//Complex Complex::operator - (Complex& c) {
//	return Complex(real - c.real, imag - c.imag);
//}
//
//Complex Complex::operator * (Complex& c) {
//	return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
//}
//
//Complex Complex::operator * (double d) {
//	return Complex(real * d, imag * d);
//}
//
//Complex Complex::operator / (Complex& c) {
//	Complex conju(c.real, -c.imag);
//	double d = 1 / (c.real * c.real + c.imag * c.imag);
//
//	Complex tmp(real, imag);
//	tmp = tmp.operator * (conju);
//
//	return tmp.operator * (d);
//}
//
//Complex::Complex() {
//	real = imag = 0.;
//}
//
//Complex::Complex(double re, double im) {
//	real = re;
//	imag = im;
//}
//
//
//void Complex::showme() {
//	cout << "(" << real << ", " << imag << "i) \n";
//}
//
//int main() {
//	Complex result;
//	Complex c1(2, 3);
//	Complex c2(3, -2);
//
//	result.showme();
//	c1.showme();
//	c2.showme();
//	result = c1 + c2;	result.showme();
//	result = c1 - c2;	result.showme();
//	result = c1 * c2;	result.showme();
//	result = c1 / c2;	result.showme();
//}

// 수행평가  기수 정렬
#include <iostream>          
using namespace std;

class Complex209 {
	double real;
	double imag;
public:
	Complex209();
	Complex209(double real, double imag);
	void showme();
	Complex209 operator + (Complex209& c);
	Complex209 operator - (Complex209& c);
	Complex209 operator * (Complex209& c);
	Complex209 operator * (double d);
	Complex209 operator / (Complex209& c);
};

Complex209 Complex209::operator + (Complex209& c) {
	return Complex209(real + c.real, imag + c.imag);
}

Complex209 Complex209::operator - (Complex209& c) {
	return Complex209(real - c.real, imag - c.imag);
}

Complex209 Complex209::operator * (Complex209& c) {
	return Complex209(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
}

Complex209 Complex209::operator * (double d) {
	return Complex209(real * d, imag * d);
}

Complex209 Complex209::operator / (Complex209& c) {
	Complex209 conju(c.real, -c.imag);
	double d = 1 / (c.real * c.real + c.imag * c.imag);

	Complex209 tmp(real, imag);
	tmp = tmp.operator * (conju);

	return tmp.operator * (d);
}

Complex209::Complex209() {
	real = imag = 0.;
}

Complex209::Complex209(double re, double im) {
	real = re;
	imag = im;
}

void Complex209::showme() {
	cout << "(" << real << ", " << imag << "i) \n";
}

int main() {
	Complex209 result;
	Complex209 c1(5, 9);
	Complex209 c2(1, -6);

	result = c1 + c2;	result.showme();
	result = c1 - c2;	result.showme();
	result = c1 * c2;	result.showme();
	result = c1 / c2;	result.showme();
}