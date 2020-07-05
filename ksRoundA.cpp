#include <iostream>
using namespace std;

int main(){
	int testCase, n, b;
	int sortArr(int, int);
	int maxB = (10^5);
	cin>>testCase;
	if (testCase >= 1 && testCase <= 100){
		cin>>n>>b;
		int costs[maxB];
		for (int i = 1; i <= n; i ++){
			cin>>costs[i];
			sortArr(costs, n);
		}
	}
	return 0;
}

int sortArr(int arr[], int n){
	int temp, i, j;
	for(i = 0; i < n; i ++)
	{
		for(j = i + 1; j < n; j ++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return arr[];
}
