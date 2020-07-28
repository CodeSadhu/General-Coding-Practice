#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vect vector<int>
#define pb push_back
#define mp make_pair
#define Map map<int, int>
#define savitr ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
	savitr
	string str, res;
	Map hash;
	cin>>str;
	for (int i = 0; i < str.size(); i ++) {
		if (str[i] == 'h' || str[i] == 'e' || str[i] == 'o') {
			if (hash[str[i]] >= 1)
				continue;
			else if (hash[str[i]] == 0) {
				hash[str[i]] ++;
				res.pb(str[i]);
			}
		}
		else if (str[i] == 'l') {
			if (hash[str[i]] >= 2)
				continue;
			else if (hash[str[i]] < 2) {
				hash[str[i]] ++;
				res.pb(str[i]);
			}
		}
	}
	// cout<<res<<endl;
	if (res == "hello")
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}