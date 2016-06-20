#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main(int argc, char *argv[])
{
	vector<string> v_str;
	ifstream input(argv[1]);
	if(input) {
		string tmp;
		// get a line
		while(getline(input,tmp))
		// get a word
//		while(input >> tmp)
			v_str.push_back(tmp);
	} else
		cout << "Cannot open file " + string(argv[1]) << endl;
	for(const auto &str : v_str)
		cout << str << endl;
	return 0;
}
