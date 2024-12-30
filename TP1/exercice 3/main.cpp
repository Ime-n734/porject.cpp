#include <iostream>
#include <cmath>

using namespace std;
double distance(float xa,float xb,float ya,float yb){
 double distance;
 float a,b;
 a=pow((xb-xa),2);
 b=pow((yb-ya),2);
 distance=sqrt(a + b);
 return distance;
 }


int main()
{
    cout << "donnez xa" << endl;
    float xa,ya,yb,xb;
    cin>>xa;
    cout<<"donner ya"<<endl;
    cin>>ya;
    cout<<"donner xb"<<endl;
    cin>>xb;
    cout<<"donner y"<<endl;
    cin>>yb;
    float d;
    d=distance(xa,xb,ya,yb);
    cout<<"la distance est" <<d;

    return 0;
}
