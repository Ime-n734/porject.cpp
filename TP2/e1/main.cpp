#include <iostream>

using namespace std;

int main()
{
   int *p;
   int x=2;
   p=&x;
   cout<<"l'adresse: "<<p<<endl;
   cout<<"valeur : "<<*p<<endl;

    return 0;
}
