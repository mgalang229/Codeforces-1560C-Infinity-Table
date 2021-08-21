#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long k;
		cin >> k;
		long long n = 1;
		long long diff = 0;
		// find a square number that is greater than or equal to 'k'
		while (true) {
			if (n * n >= k) {
				break;
			} else {
				// increment 'n'
				n++;
				// increase 'diff' by 2 (this is range of the layers)
				diff += 2;
			}
		}
		if (k == 1) {
			// if 'k' is equal to 1, then set 'diff' to 1
			diff = 1;
		}
		// calculate the distance of 'k' from ('n' * 'n')
		long long temp = (n * n) - k;
		if (temp < n) {
			// if the distance is within 'n', then the row is 'n' and 
			// the column is their distance plus one
			cout << n << " " << temp + 1;
		} else {
			// otherwise, calculate the starting number in the respective layer
			long long start_layer = (n * n) - diff;
			// find the number of elements between 'k' and starting number in the layer
			cout << k - start_layer + 1 << " " << n;
		}
		cout << '\n';
	}
	return 0;
}
