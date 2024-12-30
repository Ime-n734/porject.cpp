#include <iostream>

using namespace std;

int main()
{
    int n;
    cout <<"tapez le vleur de N:"<< endl;
    cin>>n;
    int f=1;
    for(int i=2;i<n+1;i++){
        f=f*i;
    }
    cout <<n<<"!="<<f<<endl;
    return 0;
}
