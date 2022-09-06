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


// 6장 제어구조 
#include <iostream>
#include <typeinfo>
 using namespace std;

 int main() {





	 return 0;
 }