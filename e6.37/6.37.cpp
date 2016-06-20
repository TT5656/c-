#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <cstring>
#include <stdexcept>
#include <initializer_list>

using namespace std;
string str[10]={"hello"};

//string (&f(string (&str)[10]))[10]
//auto f(string (&str)[10]) -> string (&)[10]
//decltype(str) &f(string (&str)[10])
//typedef string (&s_ref)[10];
using s_ref=string(&)[10];
s_ref f(string (&str)[10])
{
	return str;
}


int main()
{

	f(str)[0] = "you";

	cout << str[0] << endl;

	return 0;
}
