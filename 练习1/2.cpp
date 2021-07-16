#include <iostream>
using namespace std;
template<class T>
T count(T* a,T& value,T len)
{
	T value_time = 0;
//	cout << sizeof(a) << endl;
	for( int i = 0; i < len; i++)
	{
	//	cout << a[i] << endl;
		if( a[i] == value)
		{
			value_time ++ ;
		}
	}
	return value_time;
}
template<class T>
T* fill(T* a,T& value,T len)
{
	for( int i = 0; i < len; i++)
	{
		a[i] = value;
	}
	return a;
}

template <class T>
T inner_product(T* a, T* b , T len)
{
	T ans=0;
	for( int i = 0; i < len; i++)
	{
		ans += a[i] * b[i];
	}
	return ans;
}

int main()
{
	int a[10] = {1,2,3,4,5,5,5,6,7,9};
	int b[10] = {2,3,4,6,7,8,9,1,1,1};
	int value = 5;
//	int result = count(a, value, 10);
//	fill(a, value, 10);
//	cout << a[0] << endl;
	cout << inner_product(a,b,10) << endl;

	return 0;
}
