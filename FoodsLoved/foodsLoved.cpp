#include<iostream>
#include<vector>
using namespace std;

int main(){
	int N,M;
  	cin >> N >> M;
  	vector<int> exist(M,0);
  	// 行
    for (int i = 0; i < N; i++){
        // 列
        int K; cin >> K;
        for (int j = 0; j < K; j++){
            int d;cin >> d;d--;
			// exist[d] = 1;　変わらない
            exist[d]++;
        }
    }
  	int result = 0;
  	for(int i = 0; i < M; i++){
		if(exist [i] == N){
			 result++;
		}
    }
  	cout << result << endl;
}