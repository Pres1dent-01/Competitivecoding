#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    int t,i,n;
    cin>>t;
    int arr[t]; 

    for (i = 0; i < t; i++){
        cin >> arr[i];
    }
    sort(arr, arr+t);
    for (i = 0; i < t; i++){
        cout << arr[i]<<endl;
    }
}