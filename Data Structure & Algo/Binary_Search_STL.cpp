
#include<iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;


void inputOutput()
{
#ifndef ONLINE_JUDGE
	freopen("../cp/input.txt", "r", stdin);
	freopen("../cp/output.txt", "w", stdout);
#endif
}


int main()
{
	inputOutput();

	vector<int> v = {1, 3, 5, 8, 9, 12};

	bool ans = binary_search(v.begin(), v.end(), 5);

	if (ans) cout << "found";
	else cout << "not found";

	vector<int>:: iterator it = lower_bound(v.begin(), v.end(), 113); // find >=search_value
	cout << "\nLower bound : " << *it << endl;
	cout << "lower_bound index : " << distance(v.begin(), it) << endl;
	cout << it - v.begin() << endl; // distance(begin,vale) == value - begin
	if (it == v.end()) cout << "out of range" << endl;

	cout << "\n-----upper bound-------\n" << endl;

	auto itt = upper_bound(v.begin(), v.end(), 9); // find >search_value.
	cout << ((itt == v.end()) ? "not found" : to_string(*itt)) << endl;z

	auto ittt = upper_bound(v.begin())



}

