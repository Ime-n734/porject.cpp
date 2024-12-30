#include <iostream>

using std::cout;
using std::endl;
using std::cin;


int main()
{
     int choix;
     cout<<"choisir l'unité de conversion:(1:km,0:miles)"<<endl;
     cin>>choix;
     cout<<"donner la valeur a convertir :"<<endl;
     double val;
     cin>>val;
     if (choix==1){
        cout<<val<<"km="<<val*0.6<<"miles";
     }
     else
        cout<<val<<"mile="<<val*1.6<<"km";



    return 0;
}
