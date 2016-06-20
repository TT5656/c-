#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <cstring>
#include <stdexcept>
#include <initializer_list>

using namespace std;
typedef int (*f_type)(int, int);

int f_add(int a, int b)
{
	return a+b;
}

int f_sub(int a, int b)
{
	return a-b;
}

int f_mul(int a, int b)
{
	return a*b;
}

int f_div(int a, int b)
{
	return a/b;
}

int main()
{
	vector<f_type> funcs{f_add,f_sub,f_mul,f_div};	

	for (auto f : funcs)
		cout << f(6,2) << endl;

	return 0;
}
