#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n, m;
        cin >> n >> m;
        
        int x, y;
        cin >> x >> y;
        
        for (int i = 0; i < n ; i++){
            int cf, cp;
            cf=0, cp=0;

            for (int j = 0; j < m; j++){
                char ch;
                cin >> ch;
                if (ch == 'U') continue;      
                if (ch == 'F') cf++;
                if (ch == 'P') cp++;
            }
            if (cf >= x || cf ==(x-1) && cp >= y){
                cout << 1;
            }
            else{
                cout << 0;
            }
        }cout << endl;
        
    }
    
}
