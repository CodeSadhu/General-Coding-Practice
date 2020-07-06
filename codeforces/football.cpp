// Unsolved yet

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vect vector<int>
#define pb push_back
#define mp make_pair
#define savitr ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
	savitr
	string team;
	cin>>team;
	int flag = 0;
	for (int i = 0; i < team.size(); i ++) {
		if (team[i] == '1') {
			for (int j = 1; j <= 6; j ++) {
				if (team[i+j] == '1')
					flag = 1;
				else
					flag = 0;
			}
		}
		else if (team[i] == '0') {
			for (int j = 1; j <= 6; j ++) {
				if (team[i+j] == '0')
					flag = 1;
				else
					flag = 1;
			}
		}
	}
	return 0;
}