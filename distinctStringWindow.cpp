#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vect vector<int>
#define pb push_back
#define mp make_pair
#define Map unordered_map<int, bool>
#define savitr ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
	savitr
	int tc;
	cin>>tc;
	while(tc --) {
		string str, res;
		cin>>str;
		Map hash;
		for (int i = 0; i < str.size(); i ++) {
			if (hash[str[i]])
				continue;
			else {
				hash[str[i]] = true;
				res.pb(str[i]);
			}
		}
		cout<<res<<endl;
	}
	return 0;
}