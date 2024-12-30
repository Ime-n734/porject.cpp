#ifndef VECTEUR3D_H
#define VECTEUR3D_H


class vecteur3d
{
    public:
        //constructeur
        vecteur3d();


        //getteur
        float getX();
        float getY();
        float getZ();

        //setteur
        void setX(float x);
          void setY(float y);
          void setZ(float z);

        //...
       void affiche( const vecteur3d& V);
       float somme(const vecteur3d& v1;const vecteur3d& v2);
       float produitSclaire(cconst vecteur3d& v1;const vecteur3d& v2);
       static bool coïncide(const vecteur3d& v1);
       static float  norme(const vecteur3d& V);

    protected:

    private:
        float x ,y,z;
};

#endif // VECTEUR3D_H
