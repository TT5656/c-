#include <iostream>
#include <vector>
#include <list>

using std::cout;
using std::endl;
using std::list;
using std::vector;
int main() {
	list<int> li = {1,2,3,4,5,6,7};
	vector<int> vi = {9,8,7,6,5,4};
	vector<double> vd2{1.1,2.2,3.3};
	vector<double> vd(vi.begin(), vi.end());
	for(const auto &item : vd)
		cout << item << endl;
	vd = vd2;
	for(const auto &item : vd)
		cout << item << endl;
	vd = {1.2,2.1};
	for(const auto &item : vd)
		cout << item << endl;
	return 0;
}
