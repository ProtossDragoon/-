#include"chapter12-14.h"

void Animal::print()
{
	cout << "����	: " << _age << endl;
	cout << "������	: " << _weight << endl;
}

void Animal::sleep()
{
	cout << "�ڴ�" << endl;
}

void Animal::eat()
{
	cout << "�Դ�" << endl;
}

void Dog::speak()
{
	cout << "�׸���������... �׿�! �e ��!! ����!!!" << endl;
}

void Dog::print()
{
	cout << "����	: " << _age << endl;
	cout << "������	: " << _weight << endl;
	cout << "ǰ��	: " << _breed << endl;
}

void Bird::speak()
{
	cout << "±±" << endl;
}
