#include <iostream>
using namespace std;
int main(){
    int one, two, three, four, five, six, seven, max;
    cin >> one >> two >> three >> four >> five >> six >> seven;
    max = one;
    if (two > max)
        max = two;
    if (three > max)
        max = three;
    if (four > max)
        max = four;
    if (five > max)
        max = five;
    if (six > max)
        max = six;
    if (seven > max)
        max = seven;
    cout << "Max number is: " << max << endl;
    return 0;
}