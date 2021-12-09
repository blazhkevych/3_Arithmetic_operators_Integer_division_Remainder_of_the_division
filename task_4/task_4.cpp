/*¬вести п€тизначное число и сдвинуть его циклически влево на 2 разр€да
(например, ввести число 12345 Ц получить и вывести 34512).*/

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "¬ведите 5-значное число: " << endl;
	int number{ 0 };
	cin >> number;

	int  first_part{ 0 }, second_part{ 0 };

	first_part = number / 1000; //12

	cout << "¬веденное число:\t " << number << endl;
	cout << "„исло после изменений:\t " << (number - (first_part * 1000)) * 100 + first_part << endl;

	return 0;
}