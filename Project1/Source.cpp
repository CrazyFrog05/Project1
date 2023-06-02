#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include "Food.h"
#include "SuperMarket.h" 
#include "Fabric.h" 


int main() {
	
	Bread* bread = new Bread("Bread", 25.6f, 1.24f, "White");
	Milk* milk = new Milk("Milk", 79.7f, 1.04f, 10);
	Supermarket* supermarket = new Supermarket();
	supermarket->AddGoods(bread);
	supermarket->AddGoods(milk);
	//supermarket->ShowDataOfGoods();
	//std::cout << "\n\n";
	supermarket->Buy("Milk");
	//supermarket->ShowDataOfGoods();
	Food* food;
	Fabrica* fabrica = new Fabrica();
	food = fabrica->CreateBread();
	supermarket->AddGoods(food);
	supermarket->ShowDataOfGoods();

	return 0;
}