#include <iostream>
using namespace std;
// A以上B以下でKの倍数があるかどうかをみていこう

int main(){
    int K, A, B;
    cin >> K >> A >> B;
    bool exist = false;

    for(int i = A; i <= B; i++){
        if (i % K == 0){
            exist = true;
        }
    }

    if(exist){
        cout << "割り切れました" << endl;
    } else {
        cout << "割り切れませんでした" << endl;
    }
}