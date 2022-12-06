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


//������� for��
//#include <iostream>
//int main()
//{
//	int nList[5] = { 10, 20, 30, 40, 50 };
//
//	// �������� C ��Ÿ�� �ݺ���
//	for (int i = 0; i < 5; i++)
//		std::cout << nList[i] << " ";
//
//	std::cout << std::endl;
//
//	// ������� C++11 ��Ÿ�� �ݺ���
//	// �� ����� ���� n�� �����Ѵ�.
//	for (auto n : nList)
//		std::cout << n << " ";
//
//	std::cout << std::endl;
//
//	// n�� �� ��ҿ� ���� ������.
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
//	// nData �ν��Ͻ��� ���� ������ ����
//	int& ref = nData;
//
//	// �������� ���� �����ϸ� ������ ����ȴ�!
//	ref = 20;
//
//	std::cout << nData << std::endl;
//
//	// �����͸� ���� �Ͱ� ����ϴ�.
//	int* pnData = &nData;
//	*pnData = 30;
//	std::cout << nData << std::endl;
//
//	return 0;
//}

//�ǽ�����
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



//=========================4.(2)����===========================

//=========================8���ͱ���===========================
//#include <iostream>
//using namespace std;
//
//enum{Green = 1, Red, Blue};
//
//class Car{
////private: 
//	int color;   // ����
//	int size;    // ���
//public:
//	void setvalue(int c, int s);   //��
//	int getcolor();				  //��
//	int getsize();				 //���
//	Car();
//	Car(int s);
//	Car(int s, int c);
//};
//
//void Car::setvalue(int c, int s) { //��ü�� ��/ũ�⸦ ��ȭ
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
//	int m_nData; // private���� ����
//public:
//	CTest() : m_nData(0)	// ����Ʈ ������
//	{
//		// ������ ȣ�� Ȯ��, ��������� ���� �Բ� ����غ���.
//		cout << "CTest::CTest() " << m_nData << endl;
//	}
//	CTest(int nParam) :m_nData(nParam) // ������(��������)
//	{
//		// ������ ȣ�� Ȯ��, ��������� ���� �Բ� ����غ���.
//		cout << "CTest::CTest(int nParam) " << m_nData << endl;
//	}
//	~CTest()	// �Ҹ���
//	{
//		// �Ҹ��� ȣ�� Ȯ��, ��������� ���� �Բ� ����غ���.
//		cout << "CTest::~CTest() " << m_nData << endl;
//	}
//};
//
//int main()
//{
//	cout << "main �Լ� ����" << endl;
//	CTest a;  // ��ü ���� > �ν��Ͻ� ���� > ������ ȣ��(����Ʈ ������)
//	cout << "Before b" << endl;
//	CTest b(10); // ��ü ���� > �ν��Ͻ� ���� > ������ ȣ��
//	cout << "main �Լ� ����" << endl;
//	return 0;
//}

//����� ����Ʈ ������
//#include <iostream>
//using namespace std;
//
//class CTest
//{
//	int m_nData;
//public:
//	CTest() = delete;	// ����Ʈ ������ ����� ����!
//	CTest(int n) :m_nData(n) {} // ������ ��������
//	~CTest() { cout << m_nData << "����\n"; }
//	void Print();	// ����Լ� ����
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

//���� ������ 
// CMyData.h
//
//head
//
//#include <iostream>
//#include <string.h>
//#pragma warning(disable:4996) // visual studio ����ڸ�!!!
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
//	cout << "���⼭ ����\n";
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
//	CMyData a(10, "ȫ�浿");
//	CMyData b(12, "��ö��");
//
//	b = a;
//
//	a.print();
//	b.print();
//
//	return 0;
//}

