#include <iostream>
using namespace std;

int calc_sum_digits(int n){
    int sum_digit = 0;
    while(n > 0){
        sum_digit += n % 10;
        n /= 10;
    }
    return sum_digit;
}
// 1以上N以下の整数のうち、十進数での各桁の和がA以上B以下のであるものの総和を求めてください。
int main(){
    int N, A,B;
    cin >> N >> A >> B;
    
    int result = 0;
    for(int i=0; i<=N; i++){
        int x = calc_sum_digits(i);

        if (A <= x && x <= B){
            result += i;
        }
    }
    cout << result << endl;
}