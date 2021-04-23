#include <iostream>

using namespace std;

int main(){
    int n, k,rv, c=0;
    cin >> n >> k;
    for (int i = 1; i <=n; i++){
        // int randomNumber = rand();
        cin>>rv;
        if (rv % k==0){
            c = c+1;
        }
    }
    cout<<c<<endl;
}