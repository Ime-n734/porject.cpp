#include <iostream>
#include <utility>

using namespace std;
std::pair<int,int> echange(int a ,int b){
   int c;
   c=a;
   a=b;
   b=c;
   return std::make_pair(a,b);
   }
std::pair<int,int>echange2(int a,int b){
       int*pa;
       int*pb;
       int p;
       pa=&a;
       pb=&b;
       p=*pb;
       b=*pa;
       a=p;
       return std::make_pair(a,b);
}
int main()
{
    int a,b;
    cout << "donner a:" << endl;
    cin>>a;
    cout<<"donner b:"<<endl;
    cin>>b;
    std::pair<int, int> result=echange(a,b);
    std::cout<<"valeur de a:"<<result.first<<std::endl;
    std::cout<<"valeur de b:"<<result.second<<std::endl;
    std::pair<int,int>res=echange2(a,b);
    std::cout<<"la valeur de a devient:"<<res.first<<std::endl;
    std::cout<<"la valeur de b devient:"<<res.second<<std::endl;
    return 0;
}
