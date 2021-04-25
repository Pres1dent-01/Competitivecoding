#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        int x, y, xr, yr, d;
        float xf, yf, amin;
        cin >> x >> y >> xr >> yr >> d;
        xf = x/xr;
        yf = y/yr;
        amin = std::min(xf, yf);
       
        if (amin >= d){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

}


