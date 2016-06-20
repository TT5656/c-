#include <iostream>
#include <vector>

using std::vector;

vector<int>::const_iterator find(vector<int>::const_iterator, vector<int>::const_iterator, int);

int main() {
	vector<int> vec{5,6,3,4,5,6,7,8,1};
	vector<int>::const_iterator it, bit = vec.begin(), eit = vec.end();
	int x = 3;

	it = find(bit, eit, x);
	if(it == vec.end())
 		std::cout << "The int is not found" << std::endl;
	else
		std::cout << "The int is found at " << it - bit << " position" << std::endl;

	return 0;
}

vector<int>::const_iterator find(vector<int>::const_iterator bit, vector<int>::const_iterator eit, int v) {
	while(bit != eit) {
		if(v != *bit)
			++bit;
		else 
			break;
	}

	return bit;	
}
