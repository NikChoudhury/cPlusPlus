#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int main(){
    //Some Mathematical Functions in math.h

    cout<<"acos(-0.5) = "<<acos(-0.5)<<endl; //2.0944
    cout<<"asin(10) = "<<asin(10)<<endl; //nan
    cout<<"atan(10.0) = "<<atan(10.0)<<endl; //1.47113
    cout<<"atan2(-1.0,1.0) = "<<atan2(-1.0,1.0)<<endl; //-0.785398
    cout<<"cos(5.5) = "<<cos(5.5)<<endl; //0.70867
    cout<<"cosh(5.5) = "<<cosh(5.5)<<endl; //122.348
    cout<<"sin(6) = "<<sin(6)<<endl; //-0.279415
    cout<<"sinh(6) = "<<sinh(6)<<endl; //201.713
    cout<<"tan(6) = "<<tan(6)<<endl; //-0.291006
    cout<<"tanh(6) = "<<tanh(6)<<endl; //0.999988


    cout<<"exp(2.0) = "<<exp(2.0)<<endl; //7.38906
    cout<<"fabs(1.0) = "<<fabs(1.0)<<endl; //1
    cout<<"fabs(-1.0) = "<<fabs(-1.0)<<endl; //1
    cout<<"ceil(5.16) = "<<ceil(5.16)<<endl; //6
    cout<<"floor(5.16) = "<<floor(5.16)<<endl; //5
    cout<<"fmod(10.0,4.0) = "<<fmod(10.0,4.0)<<endl; //2
    cout<<"log(1.0) = "<<log(1.0)<<endl; //0
    cout<<"log10(1.0) = "<<log10(1.0)<<endl; //0
    cout<<"pow(4,2) = "<<pow(4,2)<<endl; //16
    cout<<"sqrt(16) = "<<sqrt(16)<<endl; //4
    getch();
    return 0;

}
