#include <iostream>
#include <string>
using namespace std;

class FirstClass
{
	private:
	int age;
	string name;
	
	public:
	FirstClass(int a, string n)
	{
		age = a;
		name = n;
	}
	int getAge()
	{
		return age;
	}
	void setAge(int a)
	{
		age = a;
	}
	string getName()
	{
		return name;
	}
	void setName(string n)
	{
		name = n;
	}
};
