//#include <iostream>
//
//int main() // main 함수, 가장 처음 실행 되는 함수
//{
//    std::cout << "Hello World!\n";   // std::cout을 이용하여 "Hello World"를 출력
//    std::cout << "이 프로그램은 프로그램의 구조를 알아보기 위한 ";
//    std::cout << "간단한 C++ 프로그램입니다." << std::endl;
//    std::cout << "이번 장과 이후의 내용을 통해 ";
//    std::cout << "C++ 프로그래밍 언어와 관련된 다양한 것을 살펴보겠습니다." << std::endl;
//
//    return 0;
//}
//

//불리언형(bool)
//#include <iostream>
//
//int main()
//{
//    // bool 선언
//    bool b0 = 0 == 0;
//    bool b1 = 0 < 1;
//    bool b2 = 0 > 1;
//
//    // 1 ------------------------------------------------------------------
//    std::cout << "bool 출력" << std::endl;
//    std::cout << "b0 : " << b0 << std::endl;
//    std::cout << "b1 : " << b1 << std::endl;
//    std::cout << "b2 : " << b2 << std::endl;
//    std::cout << std::endl;
//
//    // 2 ------------------------------------------------------------------
//    std::cout << "bool 출력을 true, false로 하도록 변경" << std::endl;
//    std::cout.setf(std::ios_base::boolalpha);
//    std::cout << "b0 : " << b0 << std::endl;
//    std::cout << "b1 : " << b1 << std::endl;
//    std::cout << "b2 : " << b2 << std::endl;
//    std::cout << std::endl;
//
//    // 3 ------------------------------------------------------------------
//    std::cout << "bool과 if" << std::endl;
//    if (b0)
//        std::cout << "b0" << std::endl;
//    if (b1)
//        std::cout << "b1" << std::endl;
//    if (b2)
//        std::cout << "b2" << std::endl;
//    std::cout << std::endl;
//
//    // 4 ------------------------------------------------------------------
//    std::cout << "bool 에서 정수로 형 변환" << std::endl;
//    int itrue = true;
//    int ifalse = false;
//
//    std::cout << itrue << std::endl;
//    std::cout << ifalse << std::endl;
//    std::cout << std::endl;
//
//    // 5 ------------------------------------------------------------------
//    std::cout << "정수에서 bool로 형 변환" << std::endl;
//    bool btrue = 100;
//    bool bfalse = 0;
//
//    std::cout << btrue << std::endl;
//    std::cout << bfalse << std::endl;
//    return 0;
//}


//변수 선언 및 정의
//#include <iostream>
//
//int main()
//{
//	int num = 10;    // C 스타일 선언 및 정의
//	int num2(20);    // C++ 스타일 선언 및 정의
//	int num3(num2);  // 이것도 가능
//
//	std::cout << "num : " << num << std::endl;
//	std::cout << "num2 : " << num2 << std::endl;
//	std::cout << "num3 : " << num3 << std::endl;
//
//	return 0;
//}

//auto 예약어 (시험?)
//#include <iostream>
//#include <typeinfo>
//int main()
//{
//	auto nData = 10;          // nData 형식은 int
//	std::cout << "nData : " << nData << ", "
//		<< typeid(nData).name() << std::endl;
//
//	auto strName = "Tom";     // strName 형식은 char const*
//	std::cout << "strName : " << strName << ", "
//		<< typeid(strName).name() << std::endl;
//
//	auto ch = 'A';             // ch 형식은 char
//	std::cout << "ch : " << ch << ", "
//		<< typeid(ch).name() << std::endl;
//
//	return 0;
//}


//예제 코드
//#include <iostream>
//#include <typeinfo>
//int main()
//{
//	auto a = true;
//	auto b = 'A';
//	auto c = L'B';
//	auto d = "문자열";
//	auto e = 815;
//	auto f = 3.14;
//
//	std::cout << "값\t크기\t자료형" << std::endl;
//	std::cout << a << '\t' << sizeof(a) << '\t' << typeid(a).name() << std::endl;
//	std::cout << b << '\t' << sizeof(b) << '\t' << typeid(b).name() << std::endl;
//	std::cout << c << '\t' << sizeof(c) << '\t' << typeid(c).name() << std::endl;
//	std::cout << d << '\t' << sizeof(d) << '\t' << typeid(d).name() << std::endl;
//	std::cout << e << '\t' << sizeof(e) << '\t' << typeid(e).name() << std::endl;
//	std::cout << f << '\t' << sizeof(f) << '\t' << typeid(f).name() << std::endl;
//}


//메모리 동적할당(시험?)
//#include <iostream>
//int main()
//{
//    // 인스터스만 동적으로 생성하는 경우
//    int* pData = new int;
//
//    // 초기값을 기술하는 경우
//    int* pNewData = new int(10);
//
//    *pData = 5;
//    std::cout << *pData << std::endl;
//    std::cout << *pNewData << std::endl;
//
//    delete pData;
//    delete pNewData;
//
//    return 0;
//}


// 퀴즈
//#include <iostream>
//#include <typeinfo>
//using namespace std;
//int main() {
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* b = new int[5];
//
//	for (int k = 0; k < 5; k++) {
//		cout << a[k] << " ";
//	}
//	cout << "\n\n";
//	for (int k = 0; k < 5; k++) {
//		b[k] = k * 2;
//	}
//	b++; b++;
//	for (int k = 0; k < 5; k++) {
//		cout << b[k] << " ";
//	}
//	cout << "\n\n";
//}


//범위기반 for문
//#include <iostream>
//int main()
//{
//	int nList[5] = { 10, 20, 30, 40, 50 };
//
//	// 전형적인 C 스타일 반복문
//	for (int i = 0; i < 5; i++)
//		std::cout << nList[i] << " ";
//
//	std::cout << std::endl;
//
//	// 범위기반 C++11 스타일 반복문
//	// 각 요소의 값을 n에 복사한다.
//	for (auto n : nList)
//		std::cout << n << " ";
//
//	std::cout << std::endl;
//
//	// n은 각 요소에 대한 참조다.
//	for (auto& n : nList)
//		std::cout << n << " ";
//
//	std::cout << std::endl;
//	return 0;
//}

//#include <iostream>
//int main()
//{
//	int nData = 10;
//
//	// nData 인스턴스에 대한 참조자 선언
//	int& ref = nData;
//
//	// 참조자의 값을 변경하면 원본도 변경된다!
//	ref = 20;
//
//	std::cout << nData << std::endl;
//
//	// 포인터를 쓰는 것과 비슷하다.
//	int* pnData = &nData;
//	*pnData = 30;
//	std::cout << nData << std::endl;
//
//	return 0;
//}

//실습예제
//#include <iostream>
//using namespace std;
//
//class Earning {
//	int rate;
//	int hours;
//public:
//	Earning();
//	void Setvalue(int r, int h = 40);
//	int Imguem();
//};
//
//Earning::Earning() {
//	rate = 0;
//	hours = 0;
//}
//
//void Earning::Setvalue(int r, int h = 40) {
//	rate = r;
//	hours = h;
//	if (h == 0)
//		hours = 40;
//}
//
//int Earning::Imguem() {
//	return rate * hours;
//}
//
//int main() {
//	Earning khd,a,b,c;
//	a.Setvalue(15000, 50);
//	b.Setvalue(200000, 30);
//	c.Setvalue(30000);
//	khd.Setvalue(10000, 0);
//
//	cout << khd.Imguem() << endl;
//	cout << a.Imguem() << endl;
//	cout << b.Imguem() << endl;
//	cout << c.Imguem() << endl;
//}



//=========================4.(2)까지===========================

//=========================8부터까지===========================
//#include <iostream>
//using namespace std;
//
//enum{Green = 1, Red, Blue};
//
//class Car{
////private: 
//	int color;   // 전용
//	int size;    // 멤버
//public:
//	void setvalue(int c, int s);   //공
//	int getcolor();				  //용
//	int getsize();				 //멤버
//	Car();
//	Car(int s);
//	Car(int s, int c);
//};
//
//void Car::setvalue(int c, int s) { //객체의 색/크기를 변화
//	color = c;
//	size = s; 
//}
//
//int Car::getcolor() {
//	return color;
//}
//int Car::getsize() {
//	return size;
//}
//
//Car::Car() { color = 0; size = 0;}
//Car::Car(int s) { color = 0; size = s;}
//Car::Car(int c, int s) { color = c; size = s;}
//
//int main() {
//	Car c1(Green, 10), c2, c3(30);
//	c1.setvalue(Red, 10);
//	c2.setvalue(Blue, 20);
//
//	cout << c1.getsize() << endl;
//	cout << c2.getcolor() << endl;
//
//	cout << c3.getsize();
//}

//#include <iostream>
//using namespace std;
//class CTest
//{
//	int m_nData; // private으로 선언
//public:
//	CTest() : m_nData(0)	// 디폴트 생성자
//	{
//		// 생성자 호출 확인, 멤버변수의 값을 함께 출력해본다.
//		cout << "CTest::CTest() " << m_nData << endl;
//	}
//	CTest(int nParam) :m_nData(nParam) // 생성자(다중정의)
//	{
//		// 생성자 호출 확인, 멤버변수의 값을 함께 출력해본다.
//		cout << "CTest::CTest(int nParam) " << m_nData << endl;
//	}
//	~CTest()	// 소멸자
//	{
//		// 소멸자 호출 확인, 멤버변수의 값을 함께 출력해본다.
//		cout << "CTest::~CTest() " << m_nData << endl;
//	}
//};
//
//int main()
//{
//	cout << "main 함수 시작" << endl;
//	CTest a;  // 객체 선언 > 인스턴스 생성 > 생성자 호출(디폴트 생성자)
//	cout << "Before b" << endl;
//	CTest b(10); // 객체 선언 > 인스턴스 생성 > 생성자 호출
//	cout << "main 함수 종료" << endl;
//	return 0;
//}

//명시적 디폴트 생성자
//#include <iostream>
//using namespace std;
//
//class CTest
//{
//	int m_nData;
//public:
//	CTest() = delete;	// 디폴트 생성자 명시적 삭제!
//	CTest(int n) :m_nData(n) {} // 생성자 다중정의
//	~CTest() { cout << m_nData << "지워\n"; }
//	void Print();	// 멤버함수 선언
//};
//
//void CTest::Print() { cout << m_nData << endl; }
//
//int main() {
//	CTest c1(3), c2(5);
//	static CTest c3(8);
//	static CTest c4(9);
//	c1.Print();
//	c2.Print();
//	c3.Print();
//	c4.Print();
//}

//대입 연산자 
// CMyData.h
//
//head
//
//#include <iostream>
//#include <string.h>
//#pragma warning(disable:4996) // visual studio 사용자만!!!
//using namespace std;
//
//class CMyData {
//public:
//	CMyData(int age, const char* name);
//	~CMyData();
//	void print();
//private:
//	int _age;
//	char* _name = nullptr;
//};
//
////func
//CMyData::CMyData(int age, const char* name) :_age(age)
//{
//	_name = new char[strlen(name) + 1];
//	strcpy(_name, name);
//}
//
//CMyData::~CMyData()
//{
//	delete[] _name;
//	cout << "여기서 에러\n";
//}
//
//void CMyData::print()
//{
//	cout << _age << ", " << _name << endl;
//}
//
////main
//int main()
//{
//	CMyData a(10, "홍길동");
//	CMyData b(12, "김철수");
//
//	b = a;
//
//	a.print();
//	b.print();
//
//	return 0;
//}

