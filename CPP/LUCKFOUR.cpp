#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    for (int i = 0; i<t; i++){
        cin >> n;
        int count = 0;
        while(n>0){
            if (n % 10 == 4)
            {
                count++; 
            }
            n/=10;
        }cout << count << endl;
        }
}
