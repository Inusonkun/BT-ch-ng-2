#include <iostream>

using namespace std;

int main()
{
	char tensp[30];
	int soluong;
	float dongia, tien;

	fflush(stdin);
	cout << "\nNhap ten san pham: ";
	cin.get(tensp, 30);
	cout << "\nSo luong: ";
	cin >> soluong;
	cout << "\nDon gia: ";
	cin >> dongia;

	//Cau a:
	tien = soluong * dongia;
	cout << "\nSo tien phai tra: " << tien << endl;

	//cau b:
	cout << "\nThue gia tri gia tang phai tra: " << 0.1 * tien;

	system("pause");
	return 0;
}