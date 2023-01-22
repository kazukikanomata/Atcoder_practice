#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// 2点間の距離を求めるプログラム
double calc_dist(double x1, double y1, double x2, double y2){
    double res = (x1 - x2) * (x1 - x2) + (y1 - y2) + (y1 - y2);
    return res;
}

int main(){
    int N;
    cin >> N;
    vector<double> X(N), Y(N);
    for(int i = 0; i < N; i++){
        cin >> X[i] >> Y[i];
    }
    // 求める値を十分でかい数で初期化しておく
    double minimum_dist = 100000000.0;

    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            double dist_i_j = calc_dist(X[i], Y[i], X[j], Y[j]);
            if (dist_i_j < minimum_dist){
                minimum_dist = dist_i_j;
            }
        }
    }

    // Answer
    cout << minimum_dist << endl;
}