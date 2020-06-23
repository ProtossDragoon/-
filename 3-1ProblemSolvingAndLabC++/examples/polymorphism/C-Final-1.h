#pragma once
#include<iostream>
using namespace std;

void finalexam1();

class Figure
{
protected:
	int _centerx;
	int _centery;

public:
	Figure(int cx, int cy) 
	{
		_centerx = cx;
		_centery = cy;
	};
	void erase() { cout << "figure����" << endl; };
	void draw() { cout << "figurer�׸�" << endl; };
	void center() {	cout << "figure�߽�" << endl; };
};

/*-------------------------------*/

class Square : public Figure // �Ϲ� �簢��
{
protected:
	int _l1;
	int _l2;
	int _l3;
	int _l4;

public:
	Square(int cx, int cy, int l1, int l2, int l3, int l4);
	void erase();
	void draw();
	void center();
};

class Rectangle : public Square // ���簢��
{
protected:
	int _width;
	int _height;

public:
	Rectangle(int cx, int cy, int w, int h);
	void erase();
	void draw();
	void center();
};

/*-------------------------------*/

class Triangle : public Figure // �ﰢ��
{
protected:
	int _l1;
	int _l2;
	int _l3;

public:
	Triangle(int, int, int, int, int);
	void erase();
	void draw();
	void center();
};

/*-------------------------------*/

class Circle : public Figure // ��
{
protected:
	int _r;

public:
	Circle(int cx, int cy, int r);
	void erase();
	void draw();
	void center();
};

