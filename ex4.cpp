#include <iostream>
using namespace std;

int main(){
    double lon1, lon2, v1= 300, v2, weight,choise;
    cout << " " << endl;
    cin >> lon1;
    cout << " " << endl;
    cin >> lon2;
    cout << " " << endl;
    cin >> weight;
    if(weight>2000){
        cout << "Weight so big!" << endl;
        return 1;
    }
    if(weight<500){
        choise = 1;
    }
    else if(weight<1000 && weight>=500){
        choise = 4;
    }
    else if (weight < 1000 && weight >= 500)
    {
        choise = 7;
    }
    else if (weight < 1000 && weight >= 500)
    {
        choise = 9;
    }
    if(v1<(weight*choise)){
        cout << "wrong!!!" << endl;
    }else{
        cout << " " << weight * choise << endl;
    }
}