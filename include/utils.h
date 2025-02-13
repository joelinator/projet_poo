#include <iostream>
/*#include <string>*/
using namespace std;

// Fonction pour saisir les informations d'une personne (étudiant ou enseignant)
template <typename T> // Template pour gérer les deux types (Etudiant et
                      // Enseignant)
T saisirPersonne(const string &type) {
  string nom,
      infoSupplementaire; // Nom et information spécifique (niveau ou matière)
  int age;

  cout << "Saisie des informations de " << type << ":\n";
  cout << "Nom:\t";
  getline(cin >> ws, nom);
  cout << "Age:\t";
  cin >> age;

  if (type == "l'Etudiant") {
    cout << "Niveau (ex: \"Licence 1\"): ";
    getline(cin >> ws, infoSupplementaire);
    cout << endl;
    return T(nom, age, infoSupplementaire); // Retourne un objet Etudiant
  } else {
    cout << "Matiere: ";
    getline(cin >> ws, infoSupplementaire);
    cout << endl;
    return T(nom, age, infoSupplementaire); // Retourne un objet Enseignant
  }
}
