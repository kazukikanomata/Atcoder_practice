#include <iostream>
using namespace std;
// X個のアイテムをなるべく公平に分ける。どうなる？
// 10個を3人に配る。10% 3 = 1
// YをN個ずつ配る
int main(){
    int X, N;
    cin >> X >> N;
    if (X % N){
        cout << X / N + 1 << endl;
    } else {
        cout << X / N << endl;
    }
}