#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vect vector<int>
#define pb push_back
#define mp make_pair
#define savitr ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
	savitr
	int x, y;
	cin>>x>>y;
	string str;
	cin>>str;
	for (int i = 0; i < str.size(); i ++) {
		if (str[i] == 'U')
			y += 1;
		else if (str[i] == 'D')
			y -= 1;
		else if (str[i] == 'L')
			x -= 1;
		else if (str[i] == 'R')
			x += 1;
	}
	cout<<x<<" "<<y<<endl;
	return 0;
}