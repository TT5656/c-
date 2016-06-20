#include <vector>
#include <iostream>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

vector<int>* mk_p();
void read(vector<int> *);
void print(vector<int> *);

int main() {
	vector<int> *p = mk_p();
	read(p);
	print(p);
	delete p;

	return 0;
}

vector<int>* mk_p() {
	return new vector<int>;
}

void read(vector<int> *p) {
	int tmp;
	while(cin >> tmp)
		p->push_back(tmp);
}

void print(vector<int> *p) {
	for(const auto &i : *p)
		cout << i << ' ';
	cout << endl;
}
