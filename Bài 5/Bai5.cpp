#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "Nhap vao hai so a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;

	cout << "\nTong, hieu, tich, thuong cua hai so a, b da cho la: ";
	cout << "\n- Tong: " << a + b;
	cout << "\n- Hieu: " << a - b;
	cout << "\n- Tich: " << a * b;
	b == 0 ? cout << "\n- Khong the thuc hien phep chia voi b = 0" : cout << "\n- Thuong: " << a * 1.0 / b;

	system("pause");
	return 0;
}