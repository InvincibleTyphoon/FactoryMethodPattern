#include "ChicagoCheesePizza.h"


ChicagoCheesePizza::ChicagoCheesePizza(){ }

void ChicagoCheesePizza::prepare()
{
	cout << "��ī�� ġ������ �غ� ��" << endl;
}

void ChicagoCheesePizza::bake()
{
	cout << "��ī�� ġ������ ���� ��" << endl;
}

void ChicagoCheesePizza::cut()
{
	cout << "��ī�� ġ������ �ڸ��� ��" << endl;
}

void ChicagoCheesePizza::box()
{
	cout << "��ī�� ġ������ ���� ��" << endl;
}

string ChicagoCheesePizza::toString() {
	return string("��ī�� ġ������");
}