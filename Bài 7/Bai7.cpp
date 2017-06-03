#include <iostream>

using namespace std;

int main()
{
	float dt, dl, dh, heso;

	cout << "\nNhap vao diem cac mon Toan, Ly, Hoa:";
	cout << "\nToan: ";
	cin >> dt;
	cout << "\nLy: ";
	cin >> dl;
	cout << "\nHoa: ";
	cin >> dh;
	cout << "\nHe so cua cac mon: ";
	cin >> heso;

	cout << "\nDiem trung binh cua hoc sinh do la: " << (dt + dl + dh) * heso / 3;

	system("pause");
	return 0;
}