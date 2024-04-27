#include <iostream>
using namespace std;

int main(){
    int one;
    int two;
    int max;
    cout << "First number" << endl;
    cin >> one;
    cout << "Second number" << endl;
    cin >> two;
    max = (one < two) ? two : one;
    cout << "Max num is " << max << endl;
    return 0;
}