#include "NYClamPizza.h"


NYClamPizza::NYClamPizza() { }

void NYClamPizza::prepare()
{
	cout << "���� �������� �غ� ��" << endl;
}

void NYClamPizza::bake()
{
	cout << "���� �������� ���� ��" << endl;
}

void NYClamPizza::cut()
{
	cout << "���� �������� �ڸ��� ��" << endl;
}

void NYClamPizza::box()
{
	cout << "���� �������� ���� ��" << endl;
}

string NYClamPizza::toString() {
	return string("���� ��������");
}