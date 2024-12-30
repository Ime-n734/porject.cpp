#include <iostream>
#include <vector>

using namespace std;
void remplir(std::vector<int>&t,int n){

for (int i=0;i<n;i++){
    int val;
    cout<<"donner la valeur de l'element "<<i+1<<endl;
    cin>>val;
    t.push_back(val);
}
}
void recherche(const std::vector<int>&t,int n,int v){
    bool trouve = false;
    for(int i=0;i<n;i++){
        if (t[i]== v){
          trouve = true;
          cout<<"v se trouve dans le tableau a la postion "<<i+1<<endl;
          break;
        }
}


 if (!trouve) {
     cout<<"V ne se trouve pas dans le tableau"<<endl;
}

}




int main()
{
    std::vector<int>t;
    int n,v;
    cout << "donner la taille de tableau : " ;
    cin>>n;
    cout<<"donner la valeur à rechercher : ";
    cin>>v;
    remplir(t,n);
    recherche(t,n,v);
    return 0;
}
