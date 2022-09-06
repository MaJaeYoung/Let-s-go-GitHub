//#include <iostream>           // c++ 문서  한글파일 확인
//
//// using namespace std; 
//
//int main() {
//	
////std::cout << "Hello, World!!" << std::endl;
//	
////cout << "Hello woeld!" << endl;
//
//	return 0;
//}


//#include <iostream>
//
//namespace {
//	// 이 함수는 이 파일 안에서만 사용할 수 있습니다.
//	// 이는 마치 static int OnlyInThisFile() 과 동일합니다.
//	int OnlyInThisFile() {}
//
//	// 이 변수 역시 static int x 와 동일합니다.
//	int only_in_this_file = 0;
//}  // namespace
//
//int main() {
//	OnlyInThisFile();
//	only_in_this_file = 3;
//}


//#include <iostream>
//
//int main() {
//	int i;
//	char c;
//	double d;
//	float f;
//
//	return 0;
//}


//int number_of_people;  // OK   _ 띄어쓰기
//double interest_rate;  // OK
//
//int number_of_people;  // OK
//int NumberOfPeople;    // OK    앞에 대문자도 띄어쓰기


// C++ 의 for 문


//#include <iostream>
//
//int main() {
//    int i;
//
//    for (i = 0; i < 10; i++) {
//        std::cout << "출력" << i << std::endl;   // endl = \n
//    }
//    return 0;
//}


//#include <iostream>          //1부터 10까지합
//
//int main() {
//    int i, s=0;
//
//    for (i = 1; i <= 10; i++) {
//        s += i;
//    }
//    std::cout << "1부터 10까지의 합 " << s << std::endl;
//    return 0;
//}


/* 행운의 숫자 맞추기*/
//#include <iostream>
//
//int main() {
//	int lucky_number = 3;
//	std::cout << "내 비밀 수를 맞추어 보세요~" << std::endl;
//
//	int user_input;  // 사용자 입력
//
//
//    while (1) {
//        std::cout << "입력 : ";
//        std::cin >> user_input;
//        if (lucky_number == user_input) {
//            std::cout << "맞추셨습니다~~" << std::endl;
//            break;
//        }
//        else {
//            std::cout << "다시 생각해보세요~" << std::endl;
//        }
//    }
//    return 0;
//}

//#include <iostream>
//
//int main() {
//    int number;
//    std::cout << "몇단 입력" << std::endl;
//    std::cin >> number;
//
//    for (int i = 1; i <= 9; i++)
//    {
//        std::cout << number << "x" << i << "="  << number * i << std::endl;
//    }
//
//return 0;
//}



// switch 문 이용하기
//#include <iostream>
//
//using std::cout;
//using std::endl;
//using std::cin;
//
//int main() {
//    int user_input;
//    cout << "저의 정보를 표시해줍니다" << endl;
//    cout << "1. 이름 " << endl;
//    cout << "2. 나이 " << endl;
//    cout << "3. 성별 " << endl;
//    cin >> user_input;
//
//    switch (user_input) {
//    case 1:
//        cout << "Psi ! " << endl;
//        break;
//
//    case 2:
//        cout << "99 살" << endl;
//        break;
//
//    case 3:
//        cout << "남자" << endl;
//        break;
//
//    default:
//        cout << "궁금한게 없군요~" << endl;
//        break;
//    }
//    return 0;
//}



//#include <iostream>          
//
//int change_val(int* p) {
//	*p = 3;
//
//	return 0;
//}
//int main() {
//	int number = 5;
//
//	std::cout << number << std::endl;
//	change_val(&number);
//	std::cout << number << std::endl;
//}


//#include <iostream>
//
//int main() {
//    int a = 3;
//    int& another_a = a; // a의 참조자 another_a를 정의
//                         // 가리키고자 하는 변수의 타입 뒤에 &를 붙임
//                         // int&, double&, int*&
//    another_a = 5;
//    std::cout << "a : " << a << std::endl;
//    std::cout << "another_a : " << another_a << std::endl;
//
//    return 0;
//} 


//#include <iostream>
//
//int main() {
//    int a = 3;
//    int& another_a = a; // a의 참조자 another_a를 정의
//                         // 가리키고자 하는 변수의 타입 뒤에 &를 붙임
//                         // int&, double&, int*&
//    another_a = 5;
//    std::cout << "a : " << a << std::endl;
//    std::cout << "another_a : " << another_a << std::endl;
//
//    return 0;
//}


//int& another_a;   // No!   C++에서는 안돼
//int* p;          //Yes!    C언어에서는 돼






//  레퍼런스가 한 번 별명이 되면 절대로 다른 이의 별명이 될 수 없다.
//
//  int a = 10;
//  int& another_a = a; // another_a 는 이제 a 의 참조자!
//
//  int b = 3;
//  another_a = b; // ??    --> 이 문장은 a=b와 같은 의미!
//                // &another_a = b --> ???     &a=b이므로 말이 안됨.


//  포인터를 보자.이건 가능!
//
//  int a = 10;
//  int* p = &a; // p 는 a 를 가리킨다.
//
//  int b = 3;
//  p = &b // 이제 p 는 a 를 버리고 b 를 가리킨다
//
//
//  (((((((레퍼런스는 메모리 상에 존재하지 않을 수 있다!)))))))



//#include <iostream>
//
//int change_val(int& p) {   //p가 정의되는 순간은 함수가 호출될 때 이므로 문제 없음
//    p = 3;
//
//    return 0;
//}
//int main() {
//    int number = 5;
//
//    std::cout << number << std::endl;
//    change_val(number);
//    std::cout << number << std::endl;
//}



//#include <iostream>
//
//int change_val(int* p) {
//    *p = 3;
//
//    return 0;
//}
//int main() {
//    int number = 5;
//
//    std::cout << number << std::endl;
//    change_val(&number);
//    std::cout << number << std::endl;
//}



//#include <iostream>
//
//int main() {
//    int x;
//    int& y = x;       // 3개 전부 같다는 뜻
//    int& z = y;  
//
//    x = 1;
//    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;
//
//    y = 2;
//    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;
//
//    z = 3;
//    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;
//}


//#include <iostream>
//
//int main() {
//	const int & ref = 4;
//
//	std::cout << ref << std::endl;
//}



/*int a, b;
int& arr[2] = { a,b }; */ //ㄴㄴ 레퍼런스에  배열, 포인터, 레퍼런스는 불가


//#include <iostream>        
//int main() {
//	int arr[3] = { 1,2,3 };
//	int(&ref)[3] = arr;       // ~에 레퍼런스는 가능
//
//	ref[0] = 2;
//	ref[1] = 3;
//	ref[2] = 1;
//
//	std::cout << arr[0] << arr[1] << arr[2] << std::endl;
//	return 0;
//}


//#include <iostream>
//
//int function() {
//	int a = 2;
//		return a;
//}
//
//int main() {
//	int b = function();
//	std::cout << b << std::endl;
//
//	return 0;
//}


// Dangling Reference
//#include <iostream>
//
//int &function() {
//	int a = 2;
//	return a;
//}
//
//int main() {
//	int b = function();
//
//	b = 3;
//	std::cout << b << std::endl;
//
//	return 0;
//}


//#include <iostream>
//
//int& function(int& a) {
//	a = 5;
//	return a;
//}
//
//int main() {
//	int b = 2;
//	int c = function(b);
//
//
//	std::cout << c << std::endl;
//
//	return 0;
//}