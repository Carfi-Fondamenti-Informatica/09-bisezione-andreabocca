#include <iostream>
#include <cmath>
using namespace std;

float f(float y) {
    float c;
    c=(y*y)*cos(y)+1;
    return c;
}

int main() {
    float a=0,b=0,x=0,err=0;
    do {
        cout<<"inserire estremi"<<endl;
        cin>>a>>b;
    } while ((f(a)*f(b))>=0);
    do {
        x=(a+b)/2;
        if (f(x)==0) {
            cout<<x<<endl;
        } else {
            if ((f(a)*f(x))<0) {
                b=x;
            } else {
                a=x;
            }
            err=abs((b-a)/2);
        }
    } while (err>=(1*exp(-6)));
    cout<<x<<endl;

    return 0;
}
