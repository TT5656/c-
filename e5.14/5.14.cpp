#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <cstring>

using namespace std;

int main()
{
	string s, pre_s, max_s;
	unsigned int cnt=0;
	unsigned int max_cnt=0;

	if(cin >> pre_s) {
		cnt = 1;
		max_s = pre_s;
		max_cnt = 1;
		while(cin >> s) {
			if(pre_s == s) {
				++cnt;
			}
			else {
				if(max_cnt < cnt) {
					max_cnt = cnt; 
					max_s = pre_s;
				}
				cnt = 1;
				pre_s = s;
			}
		}
		if(max_cnt < cnt) {
			max_cnt = cnt; 
			max_s = pre_s;
		}
		cout << "The word " + max_s + " occurred " << max_cnt << " times " << endl;
	} 
	else {
		cout << "No string." << endl;
	}

	return 0;
}
