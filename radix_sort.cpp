#include <bits/stdc++.h>
#include <stack>
#include <string>
#include <math.h>
#include <vector>
#include <string.h>
#include <map>
#define ll long long int
using namespace std;

void countsort(ll arr[],int n,ll exp){
    int out[10] = {0};
    for(int i=0;i<n;i++){
        out[(arr[i]/exp )%10]++;
    }
    for(int i=1;i<10;i++){
        out[i] += out[i-1];
    }
    ll output[n];
    for(int i=n-1;i>=0;i--){
        output[out[(arr[i]/exp)%10] -1] = arr[i];
        out[(arr[i]/exp)%10]--;
    }
    for(int i=0;i<n;i++){
        arr[i] = output[i];
    }
}

int main(){
    int n;
    cin>>n;
    ll arr[n];
    int p=0;
    int mx=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i] > mx){
            mx = arr[i];
        }
    }
    for(p=1;mx/pow(10,p) >0;p++){
        countsort(arr,n,pow(10,p));
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
