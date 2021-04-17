#include <iostream>
using namespace std;

int main(){
    int t, i, a, b, c;
    cin>>t;
    for (i = 0; i < t; i++){
        cin>>a>>b;
        c = a%b;
        cout<<c<<endl;
    }
}