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
//	Earning khd, a, b, c;
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