#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float x1,x2,y1,y2;
    cin >> x1>> y1>>x2>>y2;

    float distancia = sqrt(pow(y2 - y1,2)+ pow(x2-x1,2));

    cout << distancia;



return 0;
}

