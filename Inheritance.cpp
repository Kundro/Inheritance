#include <iostream>
using namespace std;

class base {
protected:
	int i, j;

public:
	int z; // public-член

	base() { i = 0; j = 0; cout << "Конструктор по умолчанию base." << endl; }
	base(int x, int y) { i = x; j = y; cout << "Конструктор base." << endl; }
	~base() { cout << "Деструктор base." << endl; }
	void set(int a, int b) { i = a; j = b; }
	void show() { cout << i << ' ' << j << '\n'; }
};

class base2 {
protected:
	int a, b;
public:
	int z1; // public-член
	base2() { a = 0; b = 0; cout << "Конструктор по умолчанию base2." << endl;}
	base2(int x, int y) { a = x; b = y; cout << "Конструктор base2" << endl; }
	~base2() { cout << "Деструктор base2." << endl; }
	void set2(int a, int b) { this->a = a; this->b = b; }
	void show2() { cout << a << ' ' << b << '\n'; }
};

class derived : private base, private base2 {
	int k;
public:
	derived(int x, int y, int xx, int yy) : base(x, xx), base2(y, yy) {
		cout << "Создание derived-объекта" << endl;
	}
	base::z; base2::z1;
	void setk() { k = i + j + a + b; }
	void showk() { cout << k << '\n'; }
};

int main()
{
	setlocale(LC_ALL, "ru");
	int by = 2, by1 = 1;
	derived A(by, by1, 3, 4);
	A.setk();
	A.showk();
	

	return 0;
  }