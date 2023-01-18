#include <iostream>
#include <vector>
using namespace std;
// N枚のカードをi枚目にはa[i]という数字が書かれています。
// Alice Bobはこれらを交互に一枚ずつとっていく、とったカードの合計がその人の特典になる
// 自分の点数を最大化するには何点とるのがベスト？
int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    // アソートする
    sort(A.begin(), A.end(), greater<int>());
    int result = 0;

    for(int i = 0; i < N; i++){
        if (i % 2 == 0){
            result += A[i];
        } else {
            result -= A[i];
        }
    }
    cout << result << endl;
}