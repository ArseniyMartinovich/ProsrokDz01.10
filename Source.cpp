#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	//Boolean15.Даны три целых числа : A, B, C.
	//Проверить истинность высказывания : «Ровно два из чисел A, B, C являются положительными».
	/*int a, b, c;
	cin >> a >> b >> c;
	bool res;
	if (a > 0 && b > 0 && c <= 0 || a > 0 && c > 0 && b <= 0 || b > 0 && c > 0 && a <= 0) {
		res = true;
	}
	else {
		res = false;
	}
	cout << boolalpha << res << endl;*/

	//Boolean16.Дано целое положительное число.Проверить истинность высказывания: «Данное число является четным двузначным».
	/*int a;
	cin >> a;
	bool res;
	res = a % 2 == 0 && a > 9 && a < 100 || a % 2 == 0 && a < -9 && a > -100;
	cout << boolalpha << res << endl;*/

	//Boolean17.Дано целое положительное число.Проверить истинность высказывания: «Данное число является нечетным трехзначным».
	/*int a;
	cin >> a;
	bool res;
	res = a % 2 != 0 && a > 99 && a < 1000 || a % 2 != 0 && a < -99 && a > -1000;
	cout << boolalpha << res << endl;*/

	//Boolean20.Дано  трехзначное  число.Проверить  истинность  высказывания : «Все цифры данного числа различны».
	//int a;
	//cin >> a;
	//bool res;
	//int sot = a / 100;
	//int des = (a % 100) / 10;
	//int edin = a % 10;
	//res = sot != des && sot != edin && des != edin;
	//cout << boolalpha << res << endl;

	//Boolean21.Дано  трехзначное  число.
	//Проверить  истинность  высказывания : «Цифры данного числа образуют возрастающую последовательность».
	/*int a;
	cin >> a;
	bool res;
	int sot = a / 100;
	int des = (a % 100) / 10;
	int edin = a % 10;
	res = sot < des&& sot < edin&& des < edin;
	cout << boolalpha << res << endl;*/
}
