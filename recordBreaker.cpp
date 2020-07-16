#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vect vector<ll>
#define pb push_back
#define mp make_pair
#define savitr ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
	savitr
	ll tc;
	cin>>tc;
	for(int k = 1; k <= tc; k ++) {
		ll n;
		cin>>n;
		vect arr;
		ll temp, count = 0;
		for (int i = 0; i < n; i ++) {
			cin>>temp;
			arr.pb(temp);
		}
		if (arr[0] > arr[1]) {
				cout<<arr[0]<<endl;
				count += 1;
			}
		int flag = 0;
		for (int i = 1; i <= n-1; i ++) {
			for (int j = i-1; j >= 0; j --) {
				if (arr[i] > arr[j])
					flag = 1;
				else {
					flag = 0;
					break;
				}
			}
			if (arr[i] > arr[i+1] && flag) {
				cout<<arr[i]<<endl;
				count += 1;
			}
		}
		cout<<"Case #"<<k<<": "<<count<<endl;
	}
	return 0;
}