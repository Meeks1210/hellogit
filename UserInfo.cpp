#include <iostream>
#include <string>
#include <vector>
#include "FirstClass.h"
using namespace std;

int main()
{
	vector<FirstClass>userInfo = { {19, "Mikel"}, {18, "Tiffany"}, {20, "Ajani"}, {7,"Cristiano"} };
	
	for (auto i : userIfo)
	{
		cout << i.getAge() << " " << i.getName() << endl;
	}
	cout << endl;
	
	system("pause");
	return 0;		
}
