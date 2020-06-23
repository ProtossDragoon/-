#include "C-Final-1.h"
#include<iostream>
using namespace std;

Square::Square(int cx, int cy, int l1, int l2, int l3, int l4):Figure(cx, cy)
{
	_l1 = l1;
	_l2 = l2;
	_l3 = l3;
	_l4 = l4;
	_centerx = cx;
	_centery = cy;
}

void Square::erase()
{
	cout << "Square ������" << endl;
}

void Square::draw()
{
	cout << "Square �׸�" <<  endl;
	cout << " " << _centerx << " " << _centery << "�� �׸�" << endl;
	cout << "Square �׸��� �Ϸ�" << endl;
}

void Square::center()
{
	erase();
	draw();
}




Rectangle::Rectangle(int cx, int cy, int l1, int l2): Square(cx, cy, l1, l2, l1, l2)
{	
	_width = l1;
	_height = l2;
}

void Rectangle::erase()
{
	cout << "Rectangle ������" << endl;
}

void Rectangle::draw()
{
	cout << "Rectangle �׸�" << endl;
	cout << " " << _centerx << " " << _centery << "�� �׸�" << _width << " " << _height << "ũ��" << endl;
	cout << "Rectangle �׸��� �Ϸ�" << endl;
}

void Rectangle::center()
{
	erase();
	draw();
}


Triangle::Triangle(int cx, int cy, int l1, int l2, int l3):Figure(cx, cy)
{
	_l1 = l1;
	_l2 = l2;
	_l3 = l3;
}

void Triangle::erase()
{
	cout << "Triangle ������" << endl;
}

void Triangle::draw()
{
	cout << "Triangle �׸�" << endl;
	cout << " " << _centerx << " " << _centery << "�� �׸�" << endl;
	cout << "Triangle �׸��� �Ϸ�" << endl;
}

void Triangle::center()
{
	erase();
	draw();
}



Circle::Circle(int cx, int cy, int r):Figure(cx, cy)
{
	_r = r;
}

void Circle::erase()
{
	cout << "Circle ������" << endl;
}

void Circle::draw()
{
	cout << "Circle �׸�" << endl;
	cout << " " << _centerx << " " << _centery << "�� �׸�" << _r << "ũ��" << endl;
	cout << "Circle �׸��� �Ϸ�" << endl;
}

void Circle::center()
{
	erase();
	draw();
}


