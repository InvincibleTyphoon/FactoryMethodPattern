#include <iostream>
#include "PizzaStore/ChicagoPizzaStore.h"
#include "PizzaStore/NYPizzaStore.h"

using namespace std;

//���ڰ��Կ� ��� ���� ������ �ϳ��� �ֹ��ϴ� �Լ�
void orderEachPizzas(PizzaStore * pizzaStore)
{
	cout << pizzaStore->orderPizza("cheese")->toString()<<" �ϼ�" << endl;
	cout << pizzaStore->orderPizza("veggi")->toString() << " �ϼ�" << endl;
	cout << pizzaStore->orderPizza("clam")->toString() << " �ϼ�" << endl;
	cout << pizzaStore->orderPizza("pepperoni")->toString() << " �ϼ�" << endl;
}

int main()
{
	NYPizzaStore nypizzaStore;
	ChicagoPizzaStore chicagoPizzaStore;

	orderEachPizzas(&nypizzaStore);
	orderEachPizzas(&chicagoPizzaStore);


	return 0;
}