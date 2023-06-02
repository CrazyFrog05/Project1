#include "Fabric.h"


Milk* Fabrica::CreateMilk() {
	std::vector<int>fatPercent = {
		3, 5, 10, 15
	};
	Milk* milk = new Milk("Milk", 50.6f, 1.0f, fatPercent.at(0 + std::rand() % fatPercent.size() - 1));
	return milk;
}

Bread* Fabrica::CreateBread() {
	std::vector<std::string>types = {
		"Borodinskiy", "White", "Black" };
	Bread* bread = new Bread("Bread", 25.7f, 2.4, types.at(0 + std::rand() % types.size()));
	return bread;

}

Food* Fabrica::CreateRandom() {
	int x = 0 + std::rand() % 2;
	Food* food;
	if (x == 0)
		return CreateMilk();
	else if (x == 1)
		return CreateBread();
}