#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vect vector<ll>
#define pb push_back
#define mp make_pair
#define savitr ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int findLastValid(vect arr) {
	int s = arr.size();
	for (int i = 0; i < s; i ++) {
		if (arr[i] == -1)
			return arr[i-1];
	}
	return;
}

int main() {
	savitr
	int tc;
	cin>>tc;
	while(tc --) {
		vect arr;
		int n, free;
		ll temp;
		cout<<"\nEnter total size of arr: ";
		cin>>n;
		cout<<"\nEnter occupied spaces: ";
		cin>>free;
		for (int i = 0; i < n; i ++)
			arr.pb(-1);
		for (int i = 0; i < free; i ++) {
			cin>>temp;
			arr.pb(temp);
		}
		ll end = arr.size();
		ll first = findLastValid(arr);
		while (first >= 0) {
			if (arr[first] % 2 == 0) {
				end --;
				arr[end] = arr[first];
				end --;
				arr[end] = arr[first];
			}
			else {
				end --;
				arr[end] = arr[first];
			}
			first --;
		}
		cout<<"\nResult: ";
		for (int i = 0; i < arr.size(); i ++)
			cout<<arr[i]<<" ";
	}
	return 0;
}