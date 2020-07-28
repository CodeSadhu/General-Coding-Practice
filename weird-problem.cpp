#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vect vector<int>
#define pb push_back
#define mp make_pair
#define endl "\n"
#define savitr ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll cal(ll n) {
	while (true) {
		cout<<n<<" ";
	
	if (n == 1) break;
	if (n % 2 == 0)
		n /= 2;
	else
		n = n * 3 + 1;
	}
	// if (n == 1)
	// 	return 1;
	// if (n % 2 == 0)
	// 	return cal(n/2);
	// else
	// 	return cal(n*3+1);
}

int main() {
	savitr
	ll n;
	cin>>n;
	cal(n);
	cout<<endl;
	return 0;
}