#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, first, last, n;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        last = n % 10;
        
        while(n!=0){
            first = n;
            n = n/10;
        }
        cout<<last+first<<endl;
    }
}