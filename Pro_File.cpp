using namespace std;
#include <iostream>
#include<fstream>

int main()
{
	ofstream obj1("Pro.txt");
	ofstream obj3("temporary.txt");

	int grade;
	cout << "enter grades" << endl;

	for (int i = 0; i < 5; i++)
	{
		cin >> grade;
		obj1 << grade << endl;
	}

	cout << "===================" << endl;

	obj1.close();

	ifstream obj2("Pro.txt");

	int num, Dgrade;

	cout << "enter grade you wanna delete" << endl;
	cin >> Dgrade;

	cout << "===================" << endl;

	while (obj2 >> num)
	{
		if (num != Dgrade)
		{
			obj3 << num << endl;
		}
	}

	obj2.close();
	obj3.close();

	remove("Pro.txt");
	rename("temporary.txt", "Pro.txt");

	if (obj3.fail())
	{
		cout << "stream error" << endl;
	}
	else
	{
		cout << "stream success" << endl;
	}
}