#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long arr[n];
    long long mx = 0;
    int ind = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(mx<arr[i]){
            mx = arr[i];
            ind = i+1;
        }
    }
    cout<<ind<<endl;

return 0;
}