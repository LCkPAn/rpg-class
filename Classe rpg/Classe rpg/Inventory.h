#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Inventory
{
private:
	vector <string> tab;
public:
	string getTab(int c);
	void setTab(string n);

	int getLTab();

	void showTab();
};

