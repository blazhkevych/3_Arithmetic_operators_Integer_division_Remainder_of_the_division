/*������ �����, ������ � ������ �������.
����������, ������� ������ ����� �� �������� ���� ���� �������,
���� �� 1�2 ����� ���������� 0.5 ����� ������
� 20% ����������� ���� �������� ���� � �����.*/

//������� � ��� �� ������ (���������� �������������)
//https://srbu.ru/stroitelnye-raboty/34-kak-rasschitat-ploshchad-komnaty.html

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double length{ 0.0 }, width{ 0.0 }, height{ 0.0 }; //�����, ������, ������ 
	const double paint_consumption{ 0.5 }; //������ ������ �� 1 ���������� ����
	double wall_area{ 0.0 }, wall_area_2{ 0.0 }; // ������� ����
	double net_wall_area{ 0.0 }; // ������� ���� �� ������� 20% ����������� ���� (���� � �����)

	cout << "������� ����� �������: " << endl;
	cin >> length;
	cout << "������� ������ �������: " << endl;
	cin >> width;
	cout << "������� ������ �������: " << endl;
	cin >> height;

	wall_area = (length * height) * 2;
	wall_area_2 = (height * width) * 2;
	//cout << wall_area << endl;
	net_wall_area = (wall_area + wall_area_2) - ((wall_area + wall_area_2) / 100 * 20);
	//cout << net_wall_area << endl;

	cout << '\n' << net_wall_area * paint_consumption << " �. ������ ����� �� �������� ���� �������." << endl;

	return 0;
}