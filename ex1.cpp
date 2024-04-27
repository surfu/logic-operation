#include <iostream>
using namespace std;

int main(){
    int choose;
    cin >> choose;
    int dev = choose % 2;
    if(dev==0){
        cout << "Number is " << endl;
    }
    else{
        cout << "Number is not " << endl;
    }
}