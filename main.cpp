#include <iostream>
#include "PizzaStore/ChicagoPizzaStore.h"
#include "PizzaStore/NYPizzaStore.h"

using namespace std;

//피자가게에 모든 피자 종류를 하나씩 주문하는 함수
void orderEachPizzas(PizzaStore * pizzaStore)
{
	cout << pizzaStore->orderPizza("cheese")->toString()<<" 완성" << endl;
	cout << pizzaStore->orderPizza("veggi")->toString() << " 완성" << endl;
	cout << pizzaStore->orderPizza("clam")->toString() << " 완성" << endl;
	cout << pizzaStore->orderPizza("pepperoni")->toString() << " 완성" << endl;
}

int main()
{
	NYPizzaStore nypizzaStore;
	ChicagoPizzaStore chicagoPizzaStore;

	orderEachPizzas(&nypizzaStore);
	orderEachPizzas(&chicagoPizzaStore);


	return 0;
}