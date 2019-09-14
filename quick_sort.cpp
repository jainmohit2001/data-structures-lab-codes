#include <bits/stdc++.h>
#include <stack>
#include <string>
#include <math.h>
#include <vector>
#include <string.h>
#include <map>
#define ll long long int
using namespace std;

void print(ll arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void Swap(ll *x,ll *y){
    ll temp = *x;
    *x = *y;
    *y = temp;

}
int part(ll arr[],int l,int r){
    int i=l-1;
    int j = l;
    int pt = arr[r];
    for(j=l;j<r;j++){
        if(arr[j] < pt){
            i++;
            Swap(&arr[i],&arr[j]);
        }
    }
   Swap(&arr[r],&arr[i+1]);
    return i+1;

}

void quicksort(ll arr[],int l,int r){
    if(l<r){
        int pi = part(arr,l,r);

        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
}


int main(){
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    print(arr,n);
    cout<<endl;
}
