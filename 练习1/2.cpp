#include <iostream>
#include <string>
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
void fill(T* a,T& value,T len)
{
	for( int i = 0; i < len; i++)
	{
		a[i] = value;
	}
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

template <class T>
void iota(T *a, T len, T value)
{
	for( int i = 0; i < len; i++)
	{
		a[i] = value + i;
	}
}

template<class T>
bool is_sorted(T *a, T len)
{
	for( int i = 0; i < len-1 ; i++)
	{
		if( a[i] >= a[i+1]) return false;
	}
	return true;
}

template <class T>
T mismatch(T* a, T* b , T len)
{
	for( int i = 0; i < len ; i++)
	{
		if ( a[i] != b[i])
		{
			return i;
		}
	}
}

int main()
{
	int a[10] = {1,2,3,4,5,5,5,6,7,9};
	int b[10] = {2,3,4,6,7,8,9,1,1,1};
	int value = 5;
//	int result = count(a, value, 10);
//	fill(a, value, 10);
//	cout << a[0] << endl;
//	cout << inner_product(a,b,10) << endl;
//	iota(a,10,1);
//	cout << a[2] << endl;
//	cout << is_sorted(a,10) << endl;
//	cout << mismatch(a, b, 10) << endl;
	string test = "abcd";
	string test_b = test.substr(0,2);
	cout << test_b << endl;
	return 0;
}
