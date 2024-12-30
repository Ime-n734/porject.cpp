#include <iostream>
#include <vector>

using namespace std;
void remplissage(std::vector<int>&t,int taille){
t.resize(taille);

 for(int i=0;i<taille;i++){
    cout<<"taper l'element"<<i+1<<":";
    cin>>t[i];
    }


}
std::vector<int>tab_entier_positives(const std::vector<int>&t){
    std::vector<int>tab;
    for (int i=0;i<t.size();i++){

        if(t[i]>0){
           tab.push_back(t[i]);
           }
    }

    return tab;
}
void affichage(std::vector<int>&t){
    for(int i=0;i<t.size();i++){
        cout<<t[i]<<endl;
    }
}
int main()
{
    std::vector <int>t;
    std::vector <int>pos;

    int taille;
    cout <<"donner la taille de tableau" << endl;
    cin>>taille;

    remplissage(t,taille);
    pos=tab_entier_positives(t);
    affichage(pos);




    return 0;
}
