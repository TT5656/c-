#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <vector>

using std::string;
using std::ifstream;
using std::vector;
using std::cout;
using std::endl;
using std::istringstream;

int main(int argc, char *argv[]) {
	vector<string> s_vec;
	string s_tmp;
	ifstream input(argv[1]);
	while(getline(input, s_tmp))
		s_vec.push_back(s_tmp);
	for(const auto &s : s_vec) {
		istringstream ss(s);
		string ss_tmp;
		while(ss >> ss_tmp)
			cout << ss_tmp << endl;
	}

	return 0;
}
