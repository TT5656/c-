#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <cstring>

using namespace std;

int main()
{
	vector<int> v1{1,2,5,4}, v2{1,2,3,4,5,6,1};
	
	auto size = v1.size() < v2.size() ? v1.size() : v2.size();
	decltype(size) i=0;

	while(i<size && v1[i] == v2[i])
		++i;
	
	if (i == size)
		cout << "True" << endl;
	else 
		cout << "False" << endl;

	return 0;
}
