#include <iostream>

using namespace std;

int main()
{ 
	float r;
	
	cout << "\nNhap vao ban kinh cua hinh tron: ";
	cin >> r;

	cout << "\nDien tich cua hinh tron la: " << r * r * 3.14;

	cout << "\nChu vi hinh tron la: " << r * 2 * 3.14;

	system("pause");
	return 0;
}