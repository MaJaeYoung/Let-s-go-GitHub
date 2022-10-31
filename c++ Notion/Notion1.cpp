//#include <iostream>
//
//int main() // main �Լ�, ���� ó�� ���� �Ǵ� �Լ�
//{
//    std::cout << "Hello World!\n";   // std::cout�� �̿��Ͽ� "Hello World"�� ���
//    std::cout << "�� ���α׷��� ���α׷��� ������ �˾ƺ��� ���� ";
//    std::cout << "������ C++ ���α׷��Դϴ�." << std::endl;
//    std::cout << "�̹� ��� ������ ������ ���� ";
//    std::cout << "C++ ���α׷��� ���� ���õ� �پ��� ���� ���캸�ڽ��ϴ�." << std::endl;
//
//    return 0;
//}
//

//�Ҹ�����(bool)
//#include <iostream>
//
//int main()
//{
//    // bool ����
//    bool b0 = 0 == 0;
//    bool b1 = 0 < 1;
//    bool b2 = 0 > 1;
//
//    // 1 ------------------------------------------------------------------
//    std::cout << "bool ���" << std::endl;
//    std::cout << "b0 : " << b0 << std::endl;
//    std::cout << "b1 : " << b1 << std::endl;
//    std::cout << "b2 : " << b2 << std::endl;
//    std::cout << std::endl;
//
//    // 2 ------------------------------------------------------------------
//    std::cout << "bool ����� true, false�� �ϵ��� ����" << std::endl;
//    std::cout.setf(std::ios_base::boolalpha);
//    std::cout << "b0 : " << b0 << std::endl;
//    std::cout << "b1 : " << b1 << std::endl;
//    std::cout << "b2 : " << b2 << std::endl;
//    std::cout << std::endl;
//
//    // 3 ------------------------------------------------------------------
//    std::cout << "bool�� if" << std::endl;
//    if (b0)
//        std::cout << "b0" << std::endl;
//    if (b1)
//        std::cout << "b1" << std::endl;
//    if (b2)
//        std::cout << "b2" << std::endl;
//    std::cout << std::endl;
//
//    // 4 ------------------------------------------------------------------
//    std::cout << "bool ���� ������ �� ��ȯ" << std::endl;
//    int itrue = true;
//    int ifalse = false;
//
//    std::cout << itrue << std::endl;
//    std::cout << ifalse << std::endl;
//    std::cout << std::endl;
//
//    // 5 ------------------------------------------------------------------
//    std::cout << "�������� bool�� �� ��ȯ" << std::endl;
//    bool btrue = 100;
//    bool bfalse = 0;
//
//    std::cout << btrue << std::endl;
//    std::cout << bfalse << std::endl;
//    return 0;
//}


//���� ���� �� ����
//#include <iostream>
//
//int main()
//{
//	int num = 10;    // C ��Ÿ�� ���� �� ����
//	int num2(20);    // C++ ��Ÿ�� ���� �� ����
//	int num3(num2);  // �̰͵� ����
//
//	std::cout << "num : " << num << std::endl;
//	std::cout << "num2 : " << num2 << std::endl;
//	std::cout << "num3 : " << num3 << std::endl;
//
//	return 0;
//}

//auto ����� (����?)
//#include <iostream>
//#include <typeinfo>
//int main()
//{
//	auto nData = 10;          // nData ������ int
//	std::cout << "nData : " << nData << ", "
//		<< typeid(nData).name() << std::endl;
//
//	auto strName = "Tom";     // strName ������ char const*
//	std::cout << "strName : " << strName << ", "
//		<< typeid(strName).name() << std::endl;
//
//	auto ch = 'A';             // ch ������ char
//	std::cout << "ch : " << ch << ", "
//		<< typeid(ch).name() << std::endl;
//
//	return 0;
//}


//���� �ڵ�
//#include <iostream>
//#include <typeinfo>
//int main()
//{
//	auto a = true;
//	auto b = 'A';
//	auto c = L'B';
//	auto d = "���ڿ�";
//	auto e = 815;
//	auto f = 3.14;
//
//	std::cout << "��\tũ��\t�ڷ���" << std::endl;
//	std::cout << a << '\t' << sizeof(a) << '\t' << typeid(a).name() << std::endl;
//	std::cout << b << '\t' << sizeof(b) << '\t' << typeid(b).name() << std::endl;
//	std::cout << c << '\t' << sizeof(c) << '\t' << typeid(c).name() << std::endl;
//	std::cout << d << '\t' << sizeof(d) << '\t' << typeid(d).name() << std::endl;
//	std::cout << e << '\t' << sizeof(e) << '\t' << typeid(e).name() << std::endl;
//	std::cout << f << '\t' << sizeof(f) << '\t' << typeid(f).name() << std::endl;
//}


//�޸� �����Ҵ�(����?)
//#include <iostream>
//int main()
//{
//    // �ν��ͽ��� �������� �����ϴ� ���
//    int* pData = new int;
//
//    // �ʱⰪ�� ����ϴ� ���
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


// ����
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
