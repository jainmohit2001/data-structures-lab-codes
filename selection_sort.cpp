#include <bits/stdc++.h>
#include <stack>
#include <string>
#include <math.h>
#include <vector>
#include <string.h>
#include <map>
#define ll long long int
using namespace std;

int main(){
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        ll minn = arr[i];
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<minn){
                minn = arr[j];
                index = j;
            }
        }
        arr[index] = arr[i];
        arr[i] = minn;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}
