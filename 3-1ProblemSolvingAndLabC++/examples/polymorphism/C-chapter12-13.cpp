#include<iostream>
#include"chapter12-13.h"

void Person::print()
{
	cout <<"�̸�		: " << _name << endl;
	cout <<"�ּ�		: " << _address << endl;
	cout <<"�޴�����ȣ	: " << _phone<< endl;
}

void Customer::print()
{
	cout << "�̸�		: " << _name << endl;
	cout << "�ּ�		: " << _address << endl;
	cout << "�޴�����ȣ	: " << _phone << endl;
	cout << "���̵�		: " << _id << endl;
	cout << "����Ʈ����	: " << _point << endl;
}