#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int a, b, d;
    cin>>a>>b>>d;

    int n = ((b-a)/d) + 1;

    for(int i=1; i<=n; i++){
        cout<< a + (i-1)*d << " ";
    }
    cout << endl;
    
    return 0;
}