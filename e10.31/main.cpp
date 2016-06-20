#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using std::vector;
using std::cout;
using std::endl;
using std::cin;
using std::istream_iterator;
using std::ostream_iterator;

int main()
{
	istream_iterator<int> input(cin), eof;
	ostream_iterator<int> output(cout, " ");
	vector<int> nums(input, eof);

	sort(nums.begin(), nums.end());
	unique_copy(nums.begin(), nums.end(), output);

	return 0;
}
