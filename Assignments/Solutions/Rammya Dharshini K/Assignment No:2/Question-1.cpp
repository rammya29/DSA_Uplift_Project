/*  Given an array arr[] of size N, the task is to sort the array in ascending order

I/P: 
6
0 9 4 10 7 8
O/P:
0 4 7 8 9 10   */

#include<iostream>

using namespace std;

int main(){
	int n,j,i,temp;
	cin >> n;
	int arr[n];
	for(i=0;i<n;i++)
		cin >> arr[i];
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		cout << arr[i] << "\t";
	}	
		
	return 0;
}

