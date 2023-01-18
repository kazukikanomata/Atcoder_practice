#include <iostream>
#include <vector>
using namespace std;

// N個の整数が書かれているとして、それを2で割ったものに置き換えることができる。最大で何回われるか？
int main(){
    // 入力
    int N;
    cin >> N;
    vector<int> A(N);

    
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    // 範囲for文という考えもあるみたい
    // 新しい規格の書き方
    // 配列Aから値を一個取り出して、変数aにコピーする
    // for(auto& a : A){
    //     cin >> a;
    // }

    int counter = 0;
    while(true){
        bool can_do = true;
        for(int i = 0; i < N; i++){
            if(A[i] % 2 == 1){
                can_do = false;
            }
        }
        if(!can_do){
            break;
        }
        for(int i = 0; i < N; i++){
            A[i] /= 2;

        }
        counter++;
    }
    // 出力
    cout << counter << endl;
}