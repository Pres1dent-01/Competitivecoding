#include <iostream>
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cpp_int ans=1;
        cin>>n;
        for (int i = 1; i <= n; i++){
            ans = ans*i;
        }
        cout << ans << endl;
    }
}