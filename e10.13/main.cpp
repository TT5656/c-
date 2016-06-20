#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isLongerThan5(const string &s) {
	return (s.size() >= 5);
}

int main() {
	vector<string> v_str{"1","1234","12","12","12345678","12345","123456"};
	auto it = partition(v_str.begin(), v_str.end(), isLongerThan5);

	for(auto i = v_str.begin(); i != it; ++i)
		cout << *i << ' ';
	cout << endl;
	return 0;
}
