#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float R = 1;
    int granos = 1000000;
    float x, y, z;

    srand48(time(NULL));

    int dentro = 0;
    for(int i = 0; i < granos; i++){
        x = drand48()*R*2 - R;
        y = drand48()*R*2 - R;
        z = drand48()*R*2 - R;

        if(x*x + y*y + z*z < R*R){
            dentro += 1;
        }
    }
    //V_e / V_c = # puntos dentro esfera / # puntos dentro del cubo.
    float v_esfera = pow(2*R, 3.0) * dentro / granos;
    float pi = 2.0*asin(1.0);

    cout << "Valor estimado: " << v_esfera << endl;
    cout << "Valor real: " << 4*pi*R*R*R/3.0 << endl;



}