#include <iostream>
using namespace std;
int main() {
	long long int n, m, a, kol;
	cin >> n >> m >> a;
	kol = ((n + a - 1) / a)* ((m + a - 1) / a);
	cout << kol;
}
