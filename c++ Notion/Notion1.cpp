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


//
