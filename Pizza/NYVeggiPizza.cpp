#include "NYVeggiPizza.h"


NYVeggiPizza::NYVeggiPizza() { }

void NYVeggiPizza::prepare()
{
	cout << "���� ��ä���� �غ� ��" << endl;
}

void NYVeggiPizza::bake()
{
	cout << "���� ��ä���� ���� ��" << endl;
}

void NYVeggiPizza::cut()
{
	cout << "���� ��ä���� �ڸ��� ��" << endl;
}

void NYVeggiPizza::box()
{
	cout << "���� ��ä���� ���� ��" << endl;
}

string NYVeggiPizza::toString() {
	return string("���� ��ä����");
}