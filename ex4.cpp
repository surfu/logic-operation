#include <iostream>
#include <string>
using namespace std;

int main(){
    int one;
    int two;
    cin >> one;
    cin>> two;
    string result;
    result = (one = two) ? "Numbers are equal" : ((two > one) ? "secound num is biggest" : "first number is biggest");
    cout << result << endl;
    return 0;
}