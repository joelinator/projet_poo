/* Examen de POO.
 * Matricule: 24NTIL01A
 * Nom: ASA MAPA Joel Gedeon
 * Classe: GINFO/TIC4
 * */

#ifndef PERSONNE_H
#define PERSONNE_H
#include <iostream>
#include <string>

using namespace std;

// Classe de base Personne
class Personne {
public:
  string nom;
  int age;

  // Constructeur traditionnel (avec initialisation dans le corps)
  Personne(string nom, int age) {
    this->nom =
        nom; // Utilisation de this pour distinguer les attributs des paramètres
    this->age = age;
  }

  virtual void afficherInfos() { // Methode afficherIfos.
    cout << "+____________________________" << endl;
    cout << "|\t-Nom: \t" << nom << endl;
    cout << "|\t-Age: \t" << age << endl;
  }
};

// Classe Etudiant héritant de Personne
class Etudiant : public Personne {
public:
  string niveau;

  // Constructeur pour initialiser les attributs
  Etudiant(string nom, int age, string niveau)
      : Personne(nom, age) { // Appel au constructeur de la classe de base
    this->niveau = niveau;
  }

  // Redefinition de la methode afficherInfos
  void afficherInfos() override {
    cout << "+____________________________" << endl;
    cout << "|\tEtudiant\t" << endl;
    Personne::afficherInfos(); // Appel a la methode afficherInfos de la classe
                               // de base
    cout << "|\t-Niveau: " << niveau << endl;
    cout << "+____________________________" << endl;
  }
};

// Classe Enseignant héritant de Personne
class Enseignant : public Personne {
public:
  string matiere;

  // Constructeur pour initialiser les attributs.
  Enseignant(string nom, int age, string matiere)
      : Personne(nom, age) { // Appel au constructeur de la classe de base
    this->matiere = matiere;
  }
  // redifinition de la methode afficherInfos.
  void afficherInfos() override {
    cout << "+____________________________" << endl;
    cout << "|\tEnseignant\t" << endl;
    Personne::afficherInfos(); // Appel a la methode afficherInfos de la classe
                               // de base
    cout << "|\t-Matiere: " << matiere << endl;
    cout << "+___________________________" << endl;
  }
};
#endif
