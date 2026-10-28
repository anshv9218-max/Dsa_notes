/*
Selection sort->

select the smallest element from the array and then swap the element from the first element 
then move the cursor to the next index and find the smallest element in that index and then swap it to the 1st index


time complexity->O(n^2)
*/

#include<bits./stdc++.h>
using namespace std;

void selection_sort( int arr[],int n){
    for(int i=0;i<n;i++){
        int mini=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
    for (int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    selection_sort(arr,n);

    return 0;
}