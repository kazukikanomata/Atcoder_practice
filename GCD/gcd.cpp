#include <iostream>
using namespace std;
int waru;
int warareu;
int GCD(int warareu, int waru){
    if (waru == 0){
        return warareu; 
    }
    return GCD(waru ,warareu % waru);

}
int main(){
    cout << GCD(51, 15) << endl;
    cout << GCD(15, 51) << endl;
}