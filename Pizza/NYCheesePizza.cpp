#include "NYCheesePizza.h"


NYCheesePizza::NYCheesePizza(){ }

void NYCheesePizza::prepare()
{
	cout << "���� ġ������ �غ� ��" << endl;
}

void NYCheesePizza::bake()
{
	cout << "���� ġ������ ���� ��" << endl;
}

void NYCheesePizza::cut()
{
	cout << "���� ġ������ �ڸ��� ��" << endl;
}

void NYCheesePizza::box()
{
	cout << "���� ġ������ ���� ��" << endl;
}

string NYCheesePizza::toString() {
	return string("���� ġ������");
}