#include "Food.h"
#include <iostream>
#include <vector>
#include <iterator>
#include <string>

Food::Food(std::string name, float price, float weigth) {
	_name = name;
	_price = price;
	_weigth = weigth;
	_condition = 100.00f;
}

Bread::Bread(std::string name, float price, float weigth, std::string type) : Food(name, price, weigth), _typeOFBread(type) { }

Milk::Milk(std::string name, float price, float weigth, int fat) : Food(name, price, weigth), _fatPercent(fat) { }

void Food::ShowData() {
	std::cout << "Name: " << _name << '\n';
	std::cout << "Condition: " << _condition << '\n';
	std::cout << "Price: " << _price << '\n';
	std::cout << "Weigth: " << _weigth << '\n';
}
void Bread::ShowData() {
	Food::ShowData();
	std::cout << "Type of Bread: " << _typeOFBread << '\n';
}
void Milk::ShowData() {
	Food::ShowData();
	std::cout << "Fat Percent: " << _fatPercent << '\n';
}
