#include <vector>
#include <iostream>
#include <memory>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::shared_ptr;
using std::make_shared;

shared_ptr<vector<int>> mk_p();
void read(shared_ptr<vector<int>>);
void print(shared_ptr<vector<int>>);

int main() {
	shared_ptr<vector<int>> p = mk_p();
	read(p);
	print(p);
	
	return 0;
}

shared_ptr<vector<int>> mk_p() {
	return make_shared<vector<int>>();
}

void read(shared_ptr<vector<int>> p) {
	int tmp;
	while(cin >> tmp)
		p->push_back(tmp);
}

void print(shared_ptr<vector<int>> p) {
	for(const auto &i : *p)
		cout << i << ' ';
	cout << endl;
}
