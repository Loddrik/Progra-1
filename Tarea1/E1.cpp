#include <iostream>
using namespace std;
int main(){
    float monto, descuento;
    cin >> monto>> descuento;
    float precio_final = monto - (monto * (descuento/100));
    cout << precio_final;


return 0;
}
