# Projet : Gestion des Personnes dans un Établissement Scolaire

**Matricule :** 24NTIL01A 
**Nom :** ASA MAPA JOEL GEDEON
**Classe :** GINFO/TIC4

## Description du projet

Ce projet est une application C++ permettant de gérer les enseignants et les étudiants d'un établissement scolaire. Il respecte les principes de la programmation orientée objet (POO) en utilisant des classes et l'héritage.

## Fonctionnalités

1.  **Classe `Personne` :**
    *   Attributs : `nom` (string), `age` (int)
    *   Constructeur pour initialiser les attributs
    *   Méthode `afficherInfos()` pour afficher le nom et l'âge

2.  **Classe `Etudiant` (hérite de `Personne`) :**
    *   Attribut supplémentaire : `niveau` (string)
    *   Constructeur et méthode `afficherInfos()` redéfinis pour inclure le niveau

3.  **Classe `Enseignant` (hérite de `Personne`) :**
    *   Attribut supplémentaire : `matiere` (string)
    *   Constructeur et méthode `afficherInfos()` redéfinis pour inclure la matière

4.  **Fonction `main()` :**
    *   Demande à l'utilisateur les informations d'un étudiant et d'un enseignant
    *   Crée les objets `Etudiant` et `Enseignant`
    *   Affiche les informations des deux objets

## Organisation du code

Le code est organisé en plusieurs fichiers pour faciliter la maintenance et la lecture :

*   `include/personne.h` : Déclaration et définition des classes `Personne`, `Etudiant` et `Enseignant`.
*   `include/utils.h` : Fonctions utilitaires, notamment pour la saisie des informations.
*   `main.cpp` : Fonction principale du programme.

## Compilation et exécution

Le projet utilise un script de compilation pour simplifier le processus.

### Sous Linux/macOS

1.  Assurez-vous d'avoir `g++` installé.
2.  Ouvrez un terminal et naviguez jusqu'au répertoire du projet.
3.  Exécutez le script de compilation : `./build.sh`
4.  L'exécutable se trouvera dans le répertoire `dist` : `./dist/personne`

### Sous Windows

1.  Assurez-vous d'avoir un compilateur C++ (comme MinGW) installé et configuré dans votre PATH.
2.  Ouvrez l'invite de commandes et naviguez jusqu'au répertoire du projet.
3.  Exécutez le script de compilation : `build.bat`
4.  L'exécutable se trouvera dans le répertoire `dist` : `.\dist\personne.exe`

## Remarques

*   Le code est commenté pour expliquer les choix de conception.
*   Les scripts de compilation (`build.sh` et `build.bat`) simplifient la création de l'exécutable.

## Améliorations possibles

*   Gestion des exceptions pour les erreurs de saisie.
*   Ajout de fonctionnalités pour enregistrer et charger les données.
*   Utilisation de structures de données pour gérer une liste d'étudiants et d'enseignants.

N'hésitez pas à me contacter si vous avez des questions ou des commentaires.
