/*Ввести с клавиатуры два 3-значных числа и поменять у них средние цифры
(например, ввести 357 и 702 – получить и вывести числа 307 и 752). */

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите первое 3-значное число: " << endl;
	int first_number{ 0 };
	cin >> first_number;

	cout << "Введите второе 3-значное число: " << endl;
	int second_number{ 0 };
	cin >> second_number;


	cout << "Введенные числа:\t " << first_number << '\t' << second_number << endl;
	cout << "Числа после изменений:\t " << first_number << '\t' << second_number << endl;

	return 0;
}