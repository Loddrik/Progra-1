

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float pi = M_PI;
    float perimetro;
    cin >> perimetro;

    float radio  = perimetro / (2 * pi);


    float area = 4* pi * pow(radio,2);
    //float perimetro = 2 * pi * radio;
    float volumen = (float)4/3 *pi*pow(radio,3);

    cout << area <<endl;
    cout << perimetro <<endl;
    cout<< volumen<<endl;

return 0;
}
