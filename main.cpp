/* Examen de POO.
 * Matricule: 24NTIL01A
 * Nom: ASA MAPA Joel Gedeon
 * Classe: GINFO/TIC4
 * */
#include "personne.h"
#include "utils.h"
int main() {
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
