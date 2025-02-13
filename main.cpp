/* Examen de POO.
 * Matricule: 24NTIL01A
 * Nom: ASA MAPA Joel Gedeon
 * Classe: GINFO/TIC4
 * */
#include "include/main.h"
#include "include/utils.h"
int main() {
  // Declaration des variables nom, niveau, matiere et age pour y stocker les
  // valeurs saisies par l'utilisateur.
  string nom, niveau, matiere;
  int age;
  // Saisie des informations de l'étudiant
  Etudiant etudiant = saisirPersonne<Etudiant>("l'Etudiant");
  // Saisie des informations de l'enseignant
  Enseignant enseignant = saisirPersonne<Enseignant>("l'Enseignant");
  // Affichage des informations
  cout << "\t==========Informations==========\n";
  etudiant.afficherInfos();
  cout << endl
       << "................................" << endl
       << endl; // ligne pour separer l'affichage des infos de l'enseignant des
                // infos de l'etudiant
  enseignant.afficherInfos();
  return 0;
}
