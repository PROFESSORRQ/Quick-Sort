#include <bits/stdc++.h>
#include <algorithm>
#include <hashtable.h>
#include <math.h>
#include <vector>
#include <string>
using namespace std;
#define Nmax INT_MAX;
void swap(int arr[],int i, int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int pivot(int arr[], int l, int r){
int piv=arr[r];
int i=l-1;
for(int j=l;j<r;j++){
    if(arr[j]<piv){
        i++;
        swap(arr,i,j);
    }

}
swap(arr,i+1,r);
return i+1;
}
void quicksort(int arr[],int l,int r,int n){
    if(l<r){
       int pi=pivot(arr,l,r);
        quicksort(arr,l,pi-1,n);
        quicksort(arr,pi+1,r,n);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
    

}