#include"chapter12-15.h"
using namespace std;

void Person::print() const
{
	cout << "�̸�	: " << _name << endl;
	cout << "����	: " << _age << endl;
	cout << "����	: " << _gender << endl;
}

void Employee::print() const
{
	cout << "�̸�	: " << _name << endl;
	cout << "����	: " << _age << endl;
	cout << "����	: " << _gender << endl;
	cout << "���	: " << _salary << endl;
	cout << "�޿�	: " << _gender << endl;
	cout << "�μ�	: " << _department << endl;
}

void Manager::print() const
{
	cout << "�̸�	: " << _name << endl;
	cout << "����	: " << _age << endl;
	cout << "����	: " << _gender << endl;
	cout << "���	: " << _salary << endl;
	cout << "�޿�	: " << _gender << endl;
	cout << "�μ�	: " << _department << endl;
	cout << "���ʽ�	: " << _bonus << endl;
}


