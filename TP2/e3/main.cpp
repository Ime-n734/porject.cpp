#include <iostream>

using namespace std;
int inc(int &ra){
 return ra=ra+1;
}
void echanger(int &ra,int &rb){
   int aux;
   aux=ra;
   ra=rb;
   rb=aux;
   cout<<"la valeur de a devient"<<ra<<"la valeur de b devient "<<rb<<endl;
}

int main()
{
   int a,b;
   cout<<"tapez un valeur:"<<endl;
   cin>>a;
   cout<<"donner b:"<<endl;
   cin>>b;
   int &ra=a;
   int &rb=b;

   cout<<"la nouvelle valeur de a est:"<<inc(ra)<<endl;
   echanger(ra,rb);

    return 0;
}
