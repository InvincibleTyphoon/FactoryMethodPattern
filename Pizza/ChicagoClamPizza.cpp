#include "ChicagoClamPizza.h"


ChicagoClamPizza::ChicagoClamPizza() { }

void ChicagoClamPizza::prepare()
{
	cout << "��ī�� �������� �غ� ��" << endl;
}

void ChicagoClamPizza::bake()
{
	cout << "��ī�� �������� ���� ��" << endl;
}

void ChicagoClamPizza::cut()
{
	cout << "��ī�� �������� �ڸ��� ��" << endl;
}

void ChicagoClamPizza::box()
{
	cout << "��ī�� �������� ���� ��" << endl;
}

string ChicagoClamPizza::toString() {
	return string("��ī�� ��������");
}