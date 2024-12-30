#include "Etudiant.h"
#include <cstring>
int Etudiant::compteur=0;
//constructeurs
Etudiant::Etudiant():matricule(compteur++),nbr_notes(0),tab_notes(nullptr)
{
    this->nom="inconnu";
    //ctor
}

 Etudiant::Etudiant(const std::string& nom,int nbr_notes, const float* notes){
    this->nom = nom;
    this->nbr_notes = nbr_notes;
    this->matricule=compteur++;
       if (nbr_notes > 0) {
        tab_notes = new float[nbr_notes];
        for (int i = 0; i < nbr_notes; i++) {
         tab_notes[i] = notes[i];
        }
    } else {
        tab_notes = nullptr;
    }
 }
  Etudiant::Etudiant(Etudiant& e):matricule(compteur++) nbr_notes(e.nbr_notes) nom(e.nom){
      if (nbr_notes>0){
        tab_notes=new float[nb_notes];
        for(int i=0;i<nbr_note;i++){
            tab_notes[i]=e.tab_note[i];
        }
      }

  }



 void Etudiant::saisie(){
       std::cout << "Saisie des notes pour l'étudiant " << nom << " : " << std::endl;
    std::cout << "Nombre de notes : ";
    std::cin >> nbr_notes;

    delete[] tabNotes;
    tabNotes = new float[nbrNotes];
  for(int i=0;i<nbr_notes;i++){
    cout<<"veillez tapez votre note"<<endl;
    cin>>tab_notes[i];

  }
 }
 void Etudiant::affichage

Etudiant::~Etudiant()
{
    //dtor
}
