#include <iostream>
#include <string.h>
using namespace std;

class Human {
public:
	string name;
};

class Student : public Human {
public:
	string group; 
};

class Professor : public Human {
public:
	string subject;
};

int main()
{
	setlocale(LC_ALL, "ru");
	Student Andrey;

	return 0;
}