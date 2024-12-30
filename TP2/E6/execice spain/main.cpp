#include <iostream>

using namespace std;

int main()
{
    int h;
    cout << " tapez l'hauteur de la cone :" << endl;
    cin>>h;
    int lar_tronc,haut_tronc;
    cout<<" tapez l'hauteur de tronc :"<<endl;
    cin>>haut_tronc;
    cout<<" tapez largeur de tronc :"<<endl;
    cin>>lar_tronc;
    for (int i=0;i<=h;i++){
        int netoile=(i*2)+1;
        int nespace=(h-1)-i;
        string etoile(netoile,'*');
        string espace(nespace,' ');
        cout<<espace<<etoile<<endl;
    }
    for(int i=0;i<haut_tronc;i++){
        int nespaces = h - (lar_tronc / 2);
        string espaces(max(nespaces, 0), ' ');
        string tronc(lar_tronc, '|');
        cout << espaces << tronc << endl;
   }

    return 0;
}
