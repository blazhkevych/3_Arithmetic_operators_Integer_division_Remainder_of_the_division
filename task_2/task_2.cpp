/*������ � ���������� 3-������� ����� � ������������� ��� (��������,
������ 357 � �������� � ������� 753).*/

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "������� 3-������� �����: " << endl;
	int number{ 0 };
	cin >> number;

	int  digit_1{ 0 }, digit_2{ 0 }, digit_3{ 0 };
	digit_1 = number / 100; //3
	digit_2 = number / 10 % 10; //5
	digit_3 = number % 10; //7
	cout << digit_1 << endl << digit_2 << endl << digit_3 << endl;

	int new_number{ 0 };
	new_number = (digit_3 * 100) + (digit_2 * 10) + (digit_1 * 1);
	cout << "��������� �����:\t " << number << endl;
	cout << "����� ����� ���������:\t " << new_number << endl;

	return 0;
}