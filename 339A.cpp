#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vect vector<int>
#define pb push_back
#define mp make_pair
#define savitr ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
	savitr
	string str, res;
	cin>>str;
	string s;
	for (int i = 0; i < str.size(); i ++) {
		if (str[i] == '+') {
			continue;
		}
		else {
			s.pb(str[i]);
		}
	}
	sort(s.begin(), s.end());
	for(int i = 0; i < s.size() - 1; i ++) {
		cout<<s[i]<<"+";
	}
	cout<<s[s.size()-1];
	return 0;
}