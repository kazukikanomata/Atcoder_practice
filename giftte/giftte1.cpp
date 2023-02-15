#include <iostream>
#include <sstream>
using namespace std;

void Multiplicate(int a, int b){
    int result = a * b;
    cout << result << endl; 
}

int main(void){
    string str;
    cin >> str;
    int a, b;
    istringstream s(str);
    s >> a >> b;
    Multiplicate(a,b);
    return 0;
}
