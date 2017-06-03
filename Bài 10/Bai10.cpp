#include <iostream>

using namespace std;

int main()
{
	int a, b, max, min;

	cout << "\nNhap vao hai so nguyen a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;

	a > b ? max = a : max = b;
	cout << "\nSo lon nhat trong hai so a, b vua nhap vao la: " << max;

	a < b ? min = a : min = b;
	cout << "\nCon so be nhat la: " << min;

	system("pause");
	return 0;
}