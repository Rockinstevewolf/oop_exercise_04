//Barannikov Stepan M8o-201b
/*
*Создать набор шаблонов, создающих функции, реализующие:
*1.   	Вычисление геометрического центра фигуры;
*2.   	Вывод в стандартный поток вывода std::cout координат вершин фигуры; 3. Вычисление площади фигуры;
*Вариант задания - 18: Квадрат, Прямоугольник, Трапеция.
*/
#include "Shape.h"

int main()
{
	cout << "Creating Square" << endl;
	Figure<double> sqr(cin);
	cout << "Creating Rectangle" << endl;
	Figure<double> rect(cin);
	cout << "Creating Trapezoid" << endl;
	Figure<double> trap(cin);

	print(cout, sqr);
	print(cout, rect);
	print(cout, trap);

}
