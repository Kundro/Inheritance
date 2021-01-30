#include <iostream>
using namespace std;

class base {
protected:
	int i, j;

public:
	void set(int a, int b) { i = a; j = b; }
	void show() { cout << i << ' ' << j << '\n'; }
};

class derived : public base {
	int k;
public:
	void setk() { k = i * j; }
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