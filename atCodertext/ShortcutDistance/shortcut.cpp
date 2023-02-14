#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
constexpr int INF = 1 << 30;

int main(){
    int N;
    cin >> N;
    vector<int> x(N), y(N);
    for(int i = 0; i < N; i++){
        cin >> x[i];
    }
    for(int j=0; j < N; j++){
        cin >> y[j];
    }
    int minimum_dist = INF;
    for(int a = 0; a < N; a++){
        for(int b = 0; b < N; b++){
            // a番目の点とb番目の距離の2乗を求める
            int dx = x[a] - x[b];
            int dy = y[a] - y[b];
            int dist = dx * dx + dy * dy;
            // 最小値スイッチ
            minimum_dist = min(minimum_dist, dist);
        }
    }
    cout << minimum_dist << endl;
}