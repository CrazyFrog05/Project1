#pragma once
#include <vector>
#include "Food.h"
class Supermarket {
private:
	std::vector<Food*>_goods;
	Food* SearchByName(std::string name);
public:
	void ShowDataOfGoods();
	void Buy(std::string name);
	void AddGoods(Food* food);
};

