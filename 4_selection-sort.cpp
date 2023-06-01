#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
		
	for(int i=0; i<n-1; i++){
		int replace_index=i;
		int value = arr[i];		
		for(int j=i+1; j<n; j++){
			if(arr[j]<value){
				value = arr[j];
				replace_index=j;			
			}
		}
		swap(arr[i],arr[replace_index]);	
	}
}

void display(int arr[], int n){
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int main(){
	int n;
	cout<<"\nEnter the total number of elements in array: ";
	cin>>n;
	
	int arr[n];
	cout<<"\nEnter the elements of array :";
	for(int i=0; i<n; i++)
		cin>>arr[i];

	cout<<"\nArray before sorting : ";	
	display(arr,n);
	
	cout<<"\nArray after selection sort : ";	
	selection_sort(arr,n);
	display(arr,n);
}


/*
OUTPUT :
Enter the total number of elements in array: 6

Enter the elements of array :2
9
4
7
1
3

Array before sorting : 2 9 4 7 1 3 

Array after selection sort : 1 2 3 4 7 9 
*/
