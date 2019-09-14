#include <bits/stdc++.h>
#include <stack>
#include <string>
#include <math.h>
#include <vector>
#include <string.h>
#include <map>
#define ll long long int
using namespace std;

void Merge(ll arr[],int l,int m,int r){
    int n1 = m-l+1;
    int n2 = r-m;
    ll Left[n1+1];
    ll Right[n2+1];
    for(int i=0;i<n1+1;i++){
        Left[i] = arr[i+l];
    }
    for(int j=0;j<n2+1;j++){
        Right[j] = arr[m+j+1];
    }
    Left[n1] = INT_MAX;
    Right[n2] = INT_MAX;
    int j=0,k=0;
    for(int i=0;i<n1+n2;i++){
        if(Left[j] <= Right[k]){
            arr[l+i] = Left[j];
            j++;
        }
        else{
            arr[l+i] = Right[k];
            k++;
        }
    }

}

void merge_sort(ll arr[],int l, int r){
    if(l<r){
    int mid = l + (r-l)/2;
    merge_sort(arr,l,mid);
    merge_sort(arr,mid+1,r);
    Merge(arr,l,mid,r);
    }
}

int main(){
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    merge_sort(arr,0,n-1);
for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
