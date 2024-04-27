#include <iostream>
#include <string>
using namespace std;

int main(){
    int x;
    string sdf;
    cin >> x;
    sdf = (x >0) ? "Num is positive" : ((x <0) ? "Num is negative": "Num is zero");
}