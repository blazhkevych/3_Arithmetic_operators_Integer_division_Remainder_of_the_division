/*Ввести пятизначное число и сдвинуть его циклически влево на 2 разряда
(например, ввести число 12345 – получить и вывести 34512).*/

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите 5-значное число: " << endl;
	int number{ 0 };
	cin >> number;

	int  first_part{ 0 }, second_part{ 0 };

	first_part = number / 1000; //12

	cout << "Введенное число:\t " << number << endl;
	cout << "Число после изменений:\t " << (number - (first_part * 1000)) * 100 + first_part << endl;

	return 0;
}