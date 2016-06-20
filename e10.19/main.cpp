#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

inline void print(const vector<string> & vec) {
	for(const auto &str : vec)
		cout << str << ' ';
	cout << endl;
}

int main(int argc, char *argv[]) {
	vector<string> words{"fox","jumps","over","quick","red","slow","the","turtle"};
	print(words);
	
	stable_sort(words.begin(), words.end(), 
			[](const string &str1, const string &str2) {return str1.size() < str2.size();});
	cout << "After stable_sort" << endl;
	print(words);

	unsigned int sz=3;
	auto wc = stable_partition(words.begin(), words.end(),
					[sz](const string &str) {return str.size() > sz;}); 
	cout << "After stable_partition" << endl;
	print(words);
	
	cout << "Words which are shorter than 4" << endl;
	for_each(wc, words.end(),
		[](const string &str) {cout << str << ' ';});
	cout << endl;

	return 0;
}
