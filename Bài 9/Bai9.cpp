#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int soxe, sum, a, b, c, d, e;

	cout << "\nNhap vao so xe: ";
	cin >> soxe;

	//Cach 1:
	(soxe > 99999) || (soxe < 10000) ? cout << "\nSo xe nhap vao phai co 5 chu so! Hay kiem tra lai!" : cout <<"\nSo xe cua ban la: " << soxe;

	a = soxe % 10;
	b = soxe / 10;
	b = b % 10;
	c = soxe / 100;
	c = c % 10;
	d = soxe / 1000;
	d = d % 10;
	e = soxe / 10000;
	
	sum = a + b + c + d + e;

	cout << "\nSo xe co " << sum % 10 << " nut";

	//Cach 2: theo cach a Son
	int sochuso;
	int sonut = 0;
	sochuso = log10((double)soxe) + 1;

	sonut += soxe % 10;
	soxe /= 10;
	sonut += soxe % 10;
	soxe /= 10;
	sonut += soxe % 10;
	soxe /= 10;
	sonut += soxe % 10;
	soxe /= 10;
	sonut += soxe % 10;

	sochuso == 5 ? cout << "\nSo nut cua bien so xe la: " << sonut % 10 : cout << "\nSo xe nhap vao phai co 5 chu so! Hay kiem tra lai!";

	system("pause");
	system("cls");
	return main();
}