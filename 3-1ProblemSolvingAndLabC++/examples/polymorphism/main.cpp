#include <iostream>
#include"chapter12.h"
#include"C-chapter14-stack.h"
#include"C-Final-1.h"

void finalexam1();
void finalexam2();

int main()
{	
	finalexam1();
	finalexam2();
	return 0;
}

/*
void chapter_12_13()
{
	Customer customer("�յ���", "���", "123456", "tpkim", 123);
	customer.print();
}

void chapter_12_14()
{
	Dog dog(13,25,"��Ƽ��");
	dog.print();
	dog.sleep();
	dog.speak();
	cout << "--------" << endl;
	Bird bird(1, 3);
	bird.print();
	bird.sleep();
	bird.speak();
}

void chapter_12_15()
{
	Manager manager("���̸�", 23, true, "123", 1000000, "�ڵ�", 20);
	manager.print();
}
*/


void chapter_14_stack()
{
	Node<int> node(5, "hello");
	node.print();

	cout << endl;

	LinkedList<int> linkedlist;
	Node<int>* header = linkedlist.get_headerptr();
	header->print();
	
	cout << "test1" << endl;


	linkedlist.addLast(3);
	linkedlist.addLast(4);
	linkedlist.addLast(5);
//	linkedlist.print();

	Stack<int> stack;
	stack.push(0);
	stack.push(1);
	stack.push(2);
//	stack.pop();
	stack.push(4);
	stack.print();

	cout << endl;
	cout << endl;
	cout << "test2" << endl;

	Stack<char> cstack;
	cstack.push('0');
	cstack.push('1');
	cstack.push('2');
//	cstack.pop();
	cstack.push('4');
	cstack.push('1');
	cstack.push('2');
	cstack.print();

}

void finalexam1()
{
	// �ð����� ������ template �� ��������� ������.
	// Ŭ���� ���� static ����� ����, �� �� �׷������� �ľ��ϰ� ���� �� ����ó���� �ϴ� 
	// �κ��� �������� ����.
	// getter �� setter �� �ð��� �������� ����. ��ġ�� �κ��� ���������� �������̵��ϸ� ��.

	Square square(1, 2, 3, 4, 5, 6);
	square.draw();
	square.center();
	square.draw();
	square.erase();
	cout << endl;

	Rectangle rectangle(2,3,4,5);
	rectangle.draw();
	rectangle.center();
	rectangle.draw();
	rectangle.erase();
	cout << endl;
	
	cout << endl;

	Triangle triangle(10,20,3,4,5);
	triangle.draw();
	triangle.center();
	triangle.draw();
	triangle.erase();
	cout << endl;


	cout << endl;
	
	Circle Circle(-1,-2,6);
	Circle.draw();
	Circle.center();
	Circle.draw();
	Circle.erase();
	cout << endl;


	cout << endl;
}

void finalexam2()
{
	chapter_14_stack();
}