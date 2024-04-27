#include <iostream>
#include <string>
using namespace std;
int main(){
    int n, fistn, secn, sumfir, sumsec;
    cout << "Enter a six-digit number: "<<endl;
    string result;
    cin >> n;
    fistn = n / 1000;
    secn = n % 1000;    
    sumfir = (fistn/100)+(fistn%100/10)+(fistn%10);
    sumsec = (secn / 100) + (secn % 100 / 10) + (secn % 10);
    result = (sumfir = sumsec) ? "Number is happy" : " Number is not happy";
    cout << result << endl;
    return 0;
}