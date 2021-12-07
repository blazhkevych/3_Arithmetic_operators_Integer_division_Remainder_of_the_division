/*¬вести с клавиатуры два 3-значных числа и помен€ть у них средние цифры
(например, ввести 357 и 702 Ц получить и вывести числа 307 и 752). */

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "¬ведите первое 3-значное число: " << endl;
	int first_number{ 0 };
	cin >> first_number;

	cout << "¬ведите второе 3-значное число: " << endl;
	int second_number{ 0 };
	cin >> second_number;


	cout << "¬веденные числа:\t " << first_number << '\t' << second_number << endl;
	cout << "„исла после изменений:\t " << first_number << '\t' << second_number << endl;

	return 0;
}