#include <iostream>
using namespace std;
void swap(int &x, int &y)
{//交换整数x和y 
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a = 3, b = 5;
	swap(a,b);
	cout << a << " " << b << endl;
	return 0;
}
