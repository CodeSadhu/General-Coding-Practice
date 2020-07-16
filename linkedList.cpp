#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vect vector<int>
#define pb push_back
#define mp make_pair
#define savitr ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

class Node {
	public:
    	int data;
    	Node *next;
};

void disp(Node *head) {
	Node *temp = new Node();
	temp = head;
	while (temp != NULL) {
		cout<<temp -> data<<" ";
		temp = temp -> next;
	}
}

int main()
{
// 	savitr;
	Node *head = new Node();
	head = NULL;
	char resp = 'n';
	int val;
	do {
	    Node *node = new Node();
		cout<<"\nEnter value: ";
		cin>>val;
		if (head == NULL) {
			node -> data = val;
			node -> next = NULL;
			head = node;
		}
		else {
		    Node *temp = head;
		    while (temp -> next != NULL)  {
		        temp = temp -> next;
		    }
		    node -> data = val;
		    node -> next = NULL;
		    temp -> next = node;
		}
		cout<<"\nAdd more? [Y/N]: ";
		cin>>resp;
	} while (resp == 'y' || resp == 'Y');
	disp(head);
	return 0;
}
