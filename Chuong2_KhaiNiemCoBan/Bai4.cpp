#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int namsinh, tuoi;
	cout << "\nNhap vao nam sinh cua ban: ";
	cin >> namsinh;

	//Cach 1:
	cout << "\nNam nay ban: " << 2017 - namsinh << " tuoi";

	//Cach 2:
	time_t namhientai = time(0);
	struct tm *Now = localtime(&namhientai);
	tuoi = Now->tm_year + 1900 - namsinh;
	cout << "\nTuoi cua ban nam nay la: " << tuoi << " tuoi";

	system("pause");
	return 0;
}