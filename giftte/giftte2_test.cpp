#include <iostream>
#include <sstream>
#include <unordered_map>
#include <vector>

using namespace std;

void sample_method(const string& s) {
    stringstream ss(s);
    string word;
    unordered_map<string, int> count;
    vector<string> words;

    while (ss >> word) {
        count[word]++;
        if (count[word] == 1) {
            words.push_back(word);
        }
    }

    for (const string& w : words) {
        cout << w << ":" << count[w] << endl;
    }
}

int main() {
  	string str;
  	getline(cin,str);
  
    sample_method(str);
    return 0;
}
