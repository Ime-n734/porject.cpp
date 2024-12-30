#include <cstring>
#ifndef ETUDIANT_H
#define ETUDIANT_H


class Etudiant
{
    public:
        Etudiant();

        Etudiant(const char* nom,int nbr_notes);

        Etudinat(Etudiant& e);
        //getteurs
    const std::string get_nom() const;
    const float* getTab_notes() const;
    int getNbr_notes() const;
    int get_matricule() const;
        //setteur
    void set_nom(const char* nom);

    void setNbr_notes(int nbr_notes);

    void setTab_notes(int tab_notes);
        //...
    void saisie();
    void affichage();
    float moyenne();
    bool admis();
    static bool comparer();



        virtual ~Etudiant();




    protected:

    private:

    static int compteur;
    int matricule;
    std::string nom;
    int nbr_notes;
    float* tab_notes;

};

#endif // ETUDIANT_H
