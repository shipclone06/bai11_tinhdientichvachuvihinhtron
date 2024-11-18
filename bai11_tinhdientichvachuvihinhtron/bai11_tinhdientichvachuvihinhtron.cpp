#include <iostream>
using namespace std;
int main()
{
	cout << " TINH CHU VI VA DIEN TICH HINH CHU NHAT:\n";
	double bankinh,pi, chuvi, dientich;

	cout << "nhap ban kinh: "; cin >> bankinh;
	cout << "pi = 3.14\n";
	pi = 3.14;
	chuvi = (2 * 3.14 * bankinh);
	dientich = (3.14 *(bankinh*bankinh));
	cout << "chu vi: " << chuvi << endl;
	cout << "dientich: " << dientich << endl;
	return 0;
}