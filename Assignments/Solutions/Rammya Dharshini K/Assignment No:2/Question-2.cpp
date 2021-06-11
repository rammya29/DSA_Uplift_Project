/* An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear 
before all positive numbers.

Note: Order of elements is not important here

I/P:
-2  -3 7 9 -4 2 5 

O/P:
-2 -3 �4 7 9 2 5     */

#include<iostream>

using namespace std;

int main(){
	int n,i,j,k,temp;
	cin >> n;
	int arr[n];
	for(i=0;i<n;i++)
		cin >> arr[i];
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>0 &&arr[j]<0){
				temp = arr[j];
				for(k=j;k>=i;k--)
					arr[k]=arr[k-1];
				arr[i] = temp;
			}
		}
		cout << arr[i];
	}
	return 0;
}

