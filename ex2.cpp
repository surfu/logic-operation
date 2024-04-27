#include <iostream>
#include <string>
using namespace std;
int main(){
    int num, fir, sec, thi, fuo;
    cin >> num;
    if((num/10000)==0 ||  (num/1000)!=0){
        cout << "Good choise!";
    }else{
        cout << "Num is not fuor-digut number";
        return 1;
    }
    fir = num / 1000;
    sec = (num / 100) - (fir * 10);
    thi = num%100 / 10;
    fuo = num%10;
    cout << sec << fuo << thi << fir;
    return 0;
}