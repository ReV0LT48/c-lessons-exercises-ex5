#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	//Start to code
	using namespace std;

	struct CandyBar
	{
		string name;
		float weight;
		unsigned int calories;
	};
	CandyBar snacks[3] = { {"Crunch", 2.9, 430},{"Chocolate", 3.1, 389},{"Mocha Mun", 2.3, 350} };

	for (int i = 0; i < 3; i++)
	{
		cout << "Snack " << i + 1 << ":\n";
		cout << "Name: " << snacks[i].name << ";\n";
		cout << "Weight in pounds: " << snacks[i].weight << ";\n";
		cout << "Calorise: " << snacks[i].calories << ".\n\n";
	}

}


