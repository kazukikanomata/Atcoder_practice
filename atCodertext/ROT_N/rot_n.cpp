#include<iostream>
#include<string>
using namespace std;

int main(){
    // むずい
    // Z以降の操作ができない
    int N;
    cin >> N;
    string S;
    cin >> S;
    int x;
    for(int i = 0; i < S.size(); i++){
        x = S[i] - '97';
        x = (x + N) % 26;
    }
    cout << x + '97' << endl;
    // for(int i = 0; i < S.size(); i++){
    //     int x = S[i] - 'A';
    //     x = (x + N) % 26;
    // }
    // cout << 'A' + x << endl;

}