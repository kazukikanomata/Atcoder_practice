#include <iostream>
#include <string>
using namespace std;
int main(){
    string s,t;
    cin >> s;
    sort(s.begin(), s.end());
    cin >> t;
    
    sort(t.begin(), t.end());

    reverse(t.begin(), t.end()); // tを逆にする

    if (s < t){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

}