#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int N, M;
    cin >> N >> M;
    vector<string> s(N), t(M);
    for(int i = 0; i < N; i++){
        cin >> s[i];
    }
    for(int j = 0; j < M; j++){
        cin >> t[j];
    }
    int answer_point = 0;
    for(int i = 0; i < N; i++){
        // 文字列ってこうやって取り出すんだ〜
        string suffix = s[i].substr(3); // 3から最後の配列までの数を取得する。
        bool match = false;
        for(int j = 0; j < M; j++){
            if(suffix == t[j]){
                match = true;
            }
        }
        if(match){
            answer_point++;
        }
    }
    cout << answer_point << endl;
    return 0;
}