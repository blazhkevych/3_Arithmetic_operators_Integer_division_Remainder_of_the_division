/*Ввести длину, ширину и высоту комнаты.
Подсчитать, сколько краски уйдет на покраску стен этой комнаты,
если на 1м2 стены приходится 0.5 литра краски
и 20% поверхности стен занимают окна и двери.*/

//потолок и пол не красим (примечание преподавателя)
//https://srbu.ru/stroitelnye-raboty/34-kak-rasschitat-ploshchad-komnaty.html

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double length{ 0.0 }, width{ 0.0 }, height{ 0.0 }; //длина, ширина, высота 
	const double paint_consumption{ 0.5 }; //расход краски на 1 квадратный метр
	double wall_area{ 0.0 }, wall_area_2{ 0.0 }; // площадь стен
	double net_wall_area{ 0.0 }; // площадь стен за вычетом 20% поверхности стен (окна и двери)

	cout << "Введите длину комнаты: " << endl;
	cin >> length;
	cout << "Введите ширину комнаты: " << endl;
	cin >> width;
	cout << "Введите высоту комнаты: " << endl;
	cin >> height;

	wall_area = (length * height) * 2;
	wall_area_2 = (height * width) * 2;
	//cout << wall_area << endl;
	net_wall_area = (wall_area + wall_area_2) - ((wall_area + wall_area_2) / 100 * 20);
	//cout << net_wall_area << endl;

	cout << '\n' << net_wall_area * paint_consumption << " л. краски уйдет на покраску стен комнаты." << endl;

	return 0;
}