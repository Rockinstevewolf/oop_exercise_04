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

	cout << endl << endl << "Tuples_Tuples_Tuples_Tuples_Tuples_Tuples_Tuples_Tuples_Tuples_" << endl;
	typedef pair<int, int> IntPair;
	typedef pair<double, double> DoublePair;
	IntPair a, b, c, d;

	a = make_pair(0, -2);
	b = make_pair(5, 3);
	c = make_pair(-7, 15);
	d = make_pair(-12, 10);
	tuple<IntPair, IntPair, IntPair, IntPair> RecArgs (a,b,c,d);
	print(cout, RecArgs);

	a = make_pair(-6, 10);
	b = make_pair(-5, 6);
	c = make_pair(-9, 5);
	d = make_pair(-10, 9);
	tuple<IntPair, IntPair, IntPair, IntPair> SqrArgs(a,b,c,d);
	print(cout, SqrArgs);

	a = make_pair(0, 0);
	b = make_pair(1, 4);
	c = make_pair(4, 4);
	d = make_pair(5, 0);
	tuple<IntPair, IntPair, IntPair, IntPair> TrapArgs(a,b,c,d);
	print(cout, TrapArgs);

	DoublePair e, f, g, h;

	e = make_pair(-0.5, -2.5);
	f = make_pair(4.5, 2.5);
	g = make_pair(-7.5, 14.5);
	h = make_pair(-12.5, 9.5);
	tuple<DoublePair, DoublePair, DoublePair, DoublePair> RecArgsDouble(e, f, g, h);
	print(cout, RecArgsDouble);

	e = make_pair(-5.5, 10.5);
	f = make_pair(-4.5, 6.5);
	g = make_pair(-8.5, 5.5);
	h = make_pair(-9.5, 9.5);
	tuple<DoublePair, DoublePair, DoublePair, DoublePair> SqrArgsDouble(e, f, g, h);
	print(cout, SqrArgsDouble);

	e = make_pair(0.5, 0.5);
	f = make_pair(1.5, 4.5);
	g = make_pair(4.5, 4.5);
	h = make_pair(5.5, 0.5);
	tuple<DoublePair, DoublePair, DoublePair, DoublePair> TrapArgsDouble(e, f, g, h);
	print(cout, TrapArgsDouble);
}
