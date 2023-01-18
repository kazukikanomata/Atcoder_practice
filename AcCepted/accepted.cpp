#include <iostream>
#include <string>
using namespace std;
bool isAC(string S){

    // Sの先頭が'A'ではない
    if (S[0] != 'A'){
        return false;
    }

    // Sの先頭2文字と末尾1文字を除いて'C'が１個以外
    int num_c = 0;
    for(int i = 0; i < S.size(); i++){
        if (S[i] == 'C'){
            num_c++;
        }
    }
    if (num_c != 1){
        return false;
    }

    // Sに含まれる大文字が2個以外
    int num_big = 0;
    for(int j=0; j< S.size(); j++){
        if(isupper(S[j])){
            num_big++;
        }
    }
    if (num_big != 2){
        return false;
    }
}
int main(){
    string S;
    cin >> S;
    bool ans = isAC(S);
    if (ans){
        cout << "AC" << endl;
    } else {
        cout << "WA" << endl;
    }
    return 0;
}