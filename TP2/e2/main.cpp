#include <iostream>

using namespace std;
void egalitv(int a,int b){
    if(a<b)
        cout<<"l'entier a est inferieur � b"<<endl;
    if (a>b)
        cout<<"l'entier a est superieur � b"<<endl;
    if(a==b)
        cout<<"les deux entiers sont �gaux"<<endl;
}
void egaliteR(int &ra ,int &rb){
    if(ra<rb)
        cout<<"l'entier a est inferieur � b"<<endl;
    if (ra>rb)
        cout<<"l'entier a est superieur � b"<<endl;
    if(ra==rb)
        cout<<"les deux entiers sont �gaux"<<endl;


}
void egalitA(int*pa,int*pb){
    if(*pa<*pb)
        cout<<"l'entier a est inferieur � b"<<endl;
    if (*pa>*pb)
        cout<<"l'entier a est superieur � b"<<endl;
    if(*pa==*pb)
        cout<<"les deux entiers sont �gaux"<<endl;

}

int main()
{
    int a,b;
    cout<<"donner a:"<<endl;
    cin>>a;
    cout<<"donner b:"<<endl;
    cin>>b;
    int &ra=a;
    int &rb=b;
    int*pa;
    int*pb;
    pa=&a;
    pb=&b;
    egalitv( a,b);
    egalitA(pa,pb);
    egaliteR(ra,rb);



    return 0;
}
