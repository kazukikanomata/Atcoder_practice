#include<iostream>
#include<string>
using namespace std;
int main(){
    // 数字から文字列にするやつ
	string s;
  	for(int i = 0; i < 26; i++){
    	int p;
      	cin >> p;
      	p--;
      	s = s +(char)('a' + p);	
    }
    cout << s << endl;
}