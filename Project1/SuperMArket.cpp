#include "SuperMarket.h"


void Supermarket::ShowDataOfGoods() {
	if (_goods.size() > 0) {
		for (const auto& it : _goods) {
			it->ShowData();
			std::cout << '\n';
		}
		return;
	}
	std::cout << "Goods are sold out" << '\n';
}
void Supermarket::AddGoods(Food* food) {
	_goods.push_back(food);
}

Food* Supermarket::SearchByName(std::string name) {
	for (const auto& it : _goods) {
		if (it->GetName() == name)
			return it;
	}
}
void Supermarket::Buy(std::string name) {
	int index = 0;
	for (const auto& it : _goods) {
		if (it->GetName() == name) {
			delete(it);
			_goods.erase(_goods.begin() + index);
		}
		index++;
	}

}