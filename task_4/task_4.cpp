/*������ ����������� ����� � �������� ��� ���������� ����� �� 2 �������
(��������, ������ ����� 12345 � �������� � ������� 34512).*/

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "������� 5-������� �����: " << endl;
	int number{ 0 };
	cin >> number;

	int  first_part{ 0 }, second_part{ 0 };

	first_part = number / 1000; //12

	cout << "��������� �����:\t " << number << endl;
	cout << "����� ����� ���������:\t " << (number - (first_part * 1000)) * 100 + first_part << endl;

	return 0;
}