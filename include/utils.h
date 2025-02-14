/* Examen de POO.
 * Matricule: 24NTIL01A
 * Nom: ASA MAPA Joel Gedeon
 * Classe: GINFO/TIC4
 * */
#include <iostream>
#include <limits>
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
  while (!(cin >> age) || age <= 0) { // Tant que l'age entre n'est pas correct.
    cout << "Err: L'Age doit etre un entier positif" << endl;
    cin.clear(); //reinitialise l'ettat de cin apres l'erreur d'entree
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //ignorer tous les caracteres qui ont ete entre.
    cout << "Age:\t";
  }

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
