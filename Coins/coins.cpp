#include <iostream>
using namespace std;
// 500円玉をA枚　100円玉をB枚　50円玉をC枚　持っている　→ ちょうどこれらの硬貨から何枚を選んで、合計金額をちょうどX円とするには
// 何枚硬貨が必要？
int main(){
    int A, B, C, X;
    cin >> A >> B >> C >> X;

    int result = 0;
    
    for(int i = 0; i <= A; i++){
        for(int j = 0; j <= B; j++){
            for(int h = 0; h <= C; h++){
                if (500 * i + 100 * j + 50 * h == X){
                    result++;
                }
            }
        }
    }
    cout << result << endl;
}