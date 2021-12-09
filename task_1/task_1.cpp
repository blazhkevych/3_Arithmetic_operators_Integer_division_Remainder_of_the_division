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

	int first_number_digit_1{ 0 }, first_number_digit_2{ 0 }, first_number_digit_3{ 0 };
	first_number_digit_1 = first_number / 100; //3
	first_number_digit_2 = first_number / 10 % 10; //5
	first_number_digit_3 = first_number % 10; //7
	//cout << first_number_digit_1 << endl << first_number_digit_2 << endl << first_number_digit_3 << endl;

	int second_number_digit_1{ 0 }, second_number_digit_2{ 0 }, second_number_digit_3{ 0 };
	second_number_digit_1 = second_number / 100; //7
	second_number_digit_2 = second_number / 10 % 10; //5
	second_number_digit_3 = second_number % 10; //2
	//cout << second_number_digit_1 << endl << second_number_digit_2 << endl << second_number_digit_3 << endl;

	int new_first_number{ 0 }, new_second_number{ 0 };
	new_first_number = (first_number_digit_1 * 100) + (second_number_digit_2 * 10) + (first_number_digit_3);
	new_second_number = (second_number_digit_1 * 100) + (first_number_digit_2 * 10) + (second_number_digit_3);
	cout << "Введенные числа:\t " << first_number << '\t' << second_number << endl;
	cout << "Числа после изменений:\t " << new_first_number << '\t' << new_second_number << endl;

	return 0;
}