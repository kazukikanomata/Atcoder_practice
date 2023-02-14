#include <iostream>
#include <string>

using namespace std;
int main (){
    string S, T;
    cin >> S >> T;

    bool ans = false; // フラグの考え
    for(int i = 0; i< S.length(); i++){
        if(S == T){
            ans = true;
        }
        S = S.back() + S.substr(0,S.length()-1);
        // S.back()で末尾の要素を返却する
        // S[0]~ S[length()-1]
    }
    if (ans){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }


}