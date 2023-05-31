#pragma once
#include <iostream>
#include <vector>
#include <iterator>
#include <string>

class Food {
private:
	std::string _name;
	float _condition;
	float _price;
	float _weigth;

public:
	Food(std::string name, float price, float weigth);

	// virtual void ShowData() = 0; ������� ����������� ������� 
	virtual void ShowData();
	std::string GetName() const { return _name; }
};

class Bread : public Food {
private:
	std::string _typeOFBread;
public:
	//Bread(std::string name, float price, float weigth, std::string type) : Food(name, price, weigth),_typeOFBread(type) 
		//_typeOFBread = type; // ���� ������ ����� ������� �� ������ ����
	Bread(std::string name, float price, float weigth, std::string type);
	void ShowData() override;
};

class Milk : public Food {
private:
	int _fatPercent;
public:
	//Milk (std::string name, float price, float weigth, int fat) : Food(name, price, weigth), _fatPercent(fat) {} ��������� �����, � ��� ��������� � ��� ����
	Milk(std::string name, float price, float weigth, int fat);
	void ShowData() override;
};