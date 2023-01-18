#include <iostream>
#include <vector>
using namespace std;

// 最小値を求めるけいは十分大きい値で初期化しておくと便利である

int how_many_times(int num){
    int counter = 0;
    while(num % 2 == 0){
        num = num / 2;
        counter++;
    }
    return counter;
}
// 十分大きい値を定義する
// python だと　2** 30　→ C++だとこうかくみたいですね。
constexpr int INF = 1 << 30;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    int result = INF;

    for(int j = 0; j < N; j++){
        int counter = how_many_times(j);
        result = min(result, counter);
    }
    cout << result << endl;
}