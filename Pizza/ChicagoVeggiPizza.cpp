#include "ChicagoVeggiPizza.h"


ChicagoVeggiPizza::ChicagoVeggiPizza() { }

void ChicagoVeggiPizza::prepare()
{
	cout << "��ī�� ��ä���� �غ� ��" << endl;
}

void ChicagoVeggiPizza::bake()
{
	cout << "��ī�� ��ä���� ���� ��" << endl;
}

void ChicagoVeggiPizza::cut()
{
	cout << "��ī�� ��ä���� �ڸ��� ��" << endl;
}

void ChicagoVeggiPizza::box()
{
	cout << "��ī�� ��ä���� ���� ��" << endl;
}

string ChicagoVeggiPizza::toString() {
	return string("��ī�� ��ä����");
}