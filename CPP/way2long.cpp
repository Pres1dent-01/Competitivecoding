#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

int main() {
  int n;
  cin >> n;

  while (n--) {
    string shabd;
    cin >> shabd;
    if (shabd.length() > 10){
      cout << shabd[0] << shabd.length()-2 << shabd[shabd.length()-1]<<'\n';
    }
    else{
      cout << shabd << '\n';
    }
  }
}
