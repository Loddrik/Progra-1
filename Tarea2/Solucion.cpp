#include<iostream>
using namespace std;

int main(){

    int e,t;
    cout << "Ingrese energia de la persona." << endl;
    cin >> e ;
    //Validamos entrada de energia.
    while(e <=0){
        cout << "Ingrese una cantidad mayor a 0." << endl;
        cin >> e ;
    }
    //Validamos entrada de tareas
    cout << "Ingrese cantidad de tareas a agregar" << endl;
    cin >> t;
    while(t<=0){
            cout << "Ingrese cantidad de tareas mayor que 0." << endl;
            cin >> t;

    }

    //Definimos arreglos
    string nombre[t];
    int energia[t];
    int prioridad[t];
    int sumaE = 0;



    for(int i = 0; i< t; i++)
    {

        //Pedimos y guardamos los datos en los arreglos
        cout << "Ingrese nombre, coste de energia y prioridad de la tarea " << i + 1 << "." << endl;
        cin >> nombre[i] >> energia[i] >> prioridad[i];
        //Validamos entrada.
        while(energia[i] <= 0 || prioridad[i] <= 0 || prioridad[i] > 100){
                cout << "Ingrese nombre, coste de energia y prioridad de la tarea " << i + 1 << " nuevamente." << endl;
                cin >> nombre[i] >> energia[i] >> prioridad[i];
        }

        sumaE = sumaE + energia[i];
    }



    if(sumaE <= e){

            //ORDENAMOS POR PRIORIDAD
        int temp;
        string temp2;

        for (int i = 0; i< t;i++){
            for(int j = i+1; j<t;j++){

                if(prioridad[i] < prioridad[j]){

                    temp = prioridad[j];
                    prioridad[j] = prioridad[i];
                    prioridad[i] = temp;

                    temp2 = nombre[j];
                    nombre[j] = nombre[i];
                    nombre[i] = temp2;

                    temp = energia[j];
                    energia[j] = energia[i];
                    energia[i] = temp;

                }
            }
        }
            //MOSTRAMOS POR PRIORIDAD
        cout<< "El orden de las tareas es: " << endl;
        cout << "N ----> Nombre , Energia, Prioridad" << endl;

        for(int k=0; k<t;k++){
        cout << k+1 << " ----> " << nombre[k] << " , " <<  energia[k]<< " , "  << prioridad[k] << endl;
        }
        cout << "La energia sobrante es: " << e - sumaE << endl;
        cout << "El promedio de energia que se gastara en el dia es: " << (float)sumaE/t << endl;

    }
    else{
        cout << "La energia no alcanza." << endl;
    }







    return 0;
}
