#include <iostream>
using namespace std;

class base {
protected:
	int i, j;

public:
	base() { i = 0; j = 0; cout << "Конструктор base." << endl; }
	~base() { cout << "Деструктор base." << endl; }
	void set(int a, int b) { i = a; j = b; }
	void show() { cout << i << ' ' << j << '\n'; }
};

class base2 {
protected:
	int a, b;
public:
	base2() { a = 0; b = 0; cout << "Конструктор base2." << endl;}
	~base2() { cout << "Деструктор base2." << endl; }
	void set2(int a, int b) { this->a = a; this->b = b; }
	void show2() { cout << a << ' ' << b << '\n'; }
};

class derived : public base, public base2 {
	int k;
public:
	void setk() { k = i + j + a + b; }
	void showk() { cout << k << '\n'; }
};

int main()
{
	setlocale(LC_ALL, "ru");
	derived A;
	A.set(3, 4);
	A.show();
	A.setk(); A.showk();
	

	return 0;
  }