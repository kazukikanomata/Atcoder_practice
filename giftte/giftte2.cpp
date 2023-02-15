#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<map>
using namespace std;
int main(){
  
  	vector<string> words;
  	map<string, int> numbers;
  
  	string s, str;
  	getline(cin,str);
  
    stringstream ss(str);
  
  	while (getline(ss, s, ' ')){
        words.push_back(s);
    }
   	for (auto s : words){
      	numbers[s]++;
    }

  	for(auto &words: numbers){
      cout << words.first << ":" << words.second << endl;
    }
	
}