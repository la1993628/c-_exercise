#include <iostream>
using namespace std;
void swap(int &x, int &y)
{//��������x��y 
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
