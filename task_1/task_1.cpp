/*������ � ���������� ��� 3-������� ����� � �������� � ��� ������� �����
(��������, ������ 357 � 702 � �������� � ������� ����� 307 � 752). */

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "������� ������ 3-������� �����: " << endl;
	int first_number{ 0 };
	cin >> first_number;

	cout << "������� ������ 3-������� �����: " << endl;
	int second_number{ 0 };
	cin >> second_number;


	cout << "��������� �����:\t " << first_number << '\t' << second_number << endl;
	cout << "����� ����� ���������:\t " << first_number << '\t' << second_number << endl;

	return 0;
}