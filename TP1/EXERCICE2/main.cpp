#include <iostream>

using namespace std;

int main()
{
        cout << "tapez 5 MOTS" << endl;
        string t[5];
        for(int i=0;i<5;i++){
            cout<<"donner t["<<i<<"]"<<endl;
            cin>>t[i];
        }
         int m;
         string mot;
         m=t[0].length();
        for(int i=1;i<5;i++){
           if (t[i].length() > m)
            mot=t[i];



        }
        cout<<"la chaine la plus long est "<<mot;




    return 0;
}
