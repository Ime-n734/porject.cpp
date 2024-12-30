#include "vecteur3d.h"

vecteur3d::vecteur3d():x(0.0),y(0.0),z(0.0)
{
    //ctor
}

//getteur
 float vecteur3d::getX(){return x;}
 float vecteur3d::getY(){return y;}
 float vecteur3d::getZ(){return z;}
//setteur

//...
void vecteur3d::affiche(const vecteur3d& v){
  cout<<"("<<v.getX()<<","<<v.getY<<","<<v.getZ<<")"<<endl;
}

 bool vecteur3d::coïncide(const vecteur3d& v1,const vecteur3d& v2){

    return v1.x==v2.x && v1.y==v2.y && v1.z==v2.z;

 }






