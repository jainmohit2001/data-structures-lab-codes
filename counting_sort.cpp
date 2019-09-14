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
    ll minn = INT_MAX,maxx=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<minn){
            minn  = arr[i];
        }
        if(arr[i]>maxx){
            maxx = arr[i];
        }
    }
    int c[maxx-minn +1] = {0};
    for(int i=0;i<n;i++){
        c[arr[i] - minn]++;
    }
    for(int i=1;i<maxx-minn+1;i++){
        c[i] += c[i-1];
    }

    ll out[n];
    for(int i=n-1;i>=0;i--){
        out[c[arr[i]-minn]-1] = arr[i];
        c[arr[i]- minn]--;
    }
    for(int i=0;i<n;i++){
        cout<<out[i]<<" ";
    }

cout<<endl;
return 0;
}
