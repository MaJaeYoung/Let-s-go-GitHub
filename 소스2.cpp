//#include <iostream>           // c++ ����  �ѱ����� Ȯ��
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
//	// �� �Լ��� �� ���� �ȿ����� ����� �� �ֽ��ϴ�.
//	// �̴� ��ġ static int OnlyInThisFile() �� �����մϴ�.
//	int OnlyInThisFile() {}
//
//	// �� ���� ���� static int x �� �����մϴ�.
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


//int number_of_people;  // OK   _ ����
//double interest_rate;  // OK
//
//int number_of_people;  // OK
//int NumberOfPeople;    // OK    �տ� �빮�ڵ� ����


// C++ �� for ��


//#include <iostream>
//
//int main() {
//    int i;
//
//    for (i = 0; i < 10; i++) {
//        std::cout << "���" << i << std::endl;   // endl = \n
//    }
//    return 0;
//}


//#include <iostream>          //1���� 10������
//
//int main() {
//    int i, s=0;
//
//    for (i = 1; i <= 10; i++) {
//        s += i;
//    }
//    std::cout << "1���� 10������ �� " << s << std::endl;
//    return 0;
//}


/* ����� ���� ���߱�*/
//#include <iostream>
//
//int main() {
//	int lucky_number = 3;
//	std::cout << "�� ��� ���� ���߾� ������~" << std::endl;
//
//	int user_input;  // ����� �Է�
//
//
//    while (1) {
//        std::cout << "�Է� : ";
//        std::cin >> user_input;
//        if (lucky_number == user_input) {
//            std::cout << "���߼̽��ϴ�~~" << std::endl;
//            break;
//        }
//        else {
//            std::cout << "�ٽ� �����غ�����~" << std::endl;
//        }
//    }
//    return 0;
//}

//#include <iostream>
//
//int main() {
//    int number;
//    std::cout << "��� �Է�" << std::endl;
//    std::cin >> number;
//
//    for (int i = 1; i <= 9; i++)
//    {
//        std::cout << number << "x" << i << "="  << number * i << std::endl;
//    }
//
//return 0;
//}



// switch �� �̿��ϱ�
//#include <iostream>
//
//using std::cout;
//using std::endl;
//using std::cin;
//
//int main() {
//    int user_input;
//    cout << "���� ������ ǥ�����ݴϴ�" << endl;
//    cout << "1. �̸� " << endl;
//    cout << "2. ���� " << endl;
//    cout << "3. ���� " << endl;
//    cin >> user_input;
//
//    switch (user_input) {
//    case 1:
//        cout << "Psi ! " << endl;
//        break;
//
//    case 2:
//        cout << "99 ��" << endl;
//        break;
//
//    case 3:
//        cout << "����" << endl;
//        break;
//
//    default:
//        cout << "�ñ��Ѱ� ������~" << endl;
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
//    int& another_a = a; // a�� ������ another_a�� ����
//                         // ����Ű���� �ϴ� ������ Ÿ�� �ڿ� &�� ����
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
//    int& another_a = a; // a�� ������ another_a�� ����
//                         // ����Ű���� �ϴ� ������ Ÿ�� �ڿ� &�� ����
//                         // int&, double&, int*&
//    another_a = 5;
//    std::cout << "a : " << a << std::endl;
//    std::cout << "another_a : " << another_a << std::endl;
//
//    return 0;
//}


//int& another_a;   // No!   C++������ �ȵ�
//int* p;          //Yes!    C������ ��






//  ���۷����� �� �� ������ �Ǹ� ����� �ٸ� ���� ������ �� �� ����.
//
//  int a = 10;
//  int& another_a = a; // another_a �� ���� a �� ������!
//
//  int b = 3;
//  another_a = b; // ??    --> �� ������ a=b�� ���� �ǹ�!
//                // &another_a = b --> ???     &a=b�̹Ƿ� ���� �ȵ�.


//  �����͸� ����.�̰� ����!
//
//  int a = 10;
//  int* p = &a; // p �� a �� ����Ų��.
//
//  int b = 3;
//  p = &b // ���� p �� a �� ������ b �� ����Ų��
//
//
//  (((((((���۷����� �޸� �� �������� ���� �� �ִ�!)))))))



//#include <iostream>
//
//int change_val(int& p) {   //p�� ���ǵǴ� ������ �Լ��� ȣ��� �� �̹Ƿ� ���� ����
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
//    int& y = x;       // 3�� ���� ���ٴ� ��
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
int& arr[2] = { a,b }; */ //���� ���۷�����  �迭, ������, ���۷����� �Ұ�


//#include <iostream>        
//int main() {
//	int arr[3] = { 1,2,3 };
//	int(&ref)[3] = arr;       // ~�� ���۷����� ����
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