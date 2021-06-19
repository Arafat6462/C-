
#include<iostream>
using namespace std;
int main() {
	long long int n, odd; cin >> n;
	n % 2 != 0 ? odd = (n / 2) + 1 : odd = n / 2;
	cout << ((n / 2) * ((n / 2) + 1)) - odd * odd;
}

