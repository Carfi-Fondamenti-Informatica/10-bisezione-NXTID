#include <iostream>
#include <cmath>
using namespace std;

void stampa (float x){
    cout << int (x*10000)/10000.0<<endl;
}

float f(float x){
    float a=(x*x*cos(x))+1;
    return a;
}

bool v(float a, float b){
    if(f(a)*f(b)>=0) {
        return true;
    }else {
        return false;
    }
}

int main() {
    float x=0;
    float a=0;
    float b=0;

    do{
        cout<<"inserire estremi"<<endl;
        cin>>a;
        cin>>b;
    }while(v(a,b));

    float err;

    do {
        x = (a + b) / 2;

        if (f(x) == 0) {
            break;
        } else if (!v(a,b)){
            b = x;
        } else {
            a = x;
        }

        err = abs(((b - a) / 2));

    }while(err>=1e-6);


    stampa(x);
    stampa(f(x));

    return 0;
}
