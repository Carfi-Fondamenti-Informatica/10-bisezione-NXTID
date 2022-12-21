#include <iostream>
#include <cmath>
using namespace std;

void stampa (float x){
    cout << int (x*10000)/10000.0;
}

float f(float x){
    float a=x*x*cos(x)+1;
    //float a=pow(x,3)-x-2;
    return a;
}

int main() {
    float x=0;
    float a=0;
    float b=0;
    bool j=false;

    cout<<"inserire estremi";
    cin>>a;
    cin>>b;

    while((f(a)*f(b)) >= 0){
        cout<<"inserire estremi";
        cin>>a;
        cin>>b;
    }

    while(j==false){
        x=(a+b)/2;

        if(f==0){
            j=true;
        }else{
            if(f(a)*f(b) < 0){
                b=x;
            }else{
                a=x;
            }

            float err=abs((b-a)/2);

            if(err<=1e-6){
                j=false;
            }else{
                j=true;
            }
        }
    }

    stampa(x);

    return 0;
}
