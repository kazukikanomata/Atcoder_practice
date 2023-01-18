#include <iostream>
using namespace std;

// 体力がHのモンスターとバトって、Aの攻撃づつ減らしていく。これが何回やるの？を求める
int main(){
    int H , A;
    cin >> H >> A;
    if (H % A ==0){
        cout << H / A << endl;
    } else {
        cout << H / A+1 << endl;
    }
}