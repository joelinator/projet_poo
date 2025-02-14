#!/bin/bash
# Examen de POO.
# Matricule: 24NTIL01A
# Nom: ASA MAPA Joel Gedeon
# Classe: GINFO/TIC

# Configuration
COMPILER="g++"
SOURCE="main.cpp"
DIST_DIR="./dist"
OUTPUT="$DIST_DIR/personne"
INCLUDE_DIR="./include"
CFLAGS="-I$INCLUDE_DIR -Wall"

# Compilation
$COMPILER $CFLAGS -o "$OUTPUT" "$SOURCE"

# Affichage du resultat
if [ $? -eq 0 ]; then
  echo "Compilation réussie !"
  echo "Chemin de l'exécutable: $OUTPUT"
else
  echo "Erreur de compilation !"
fi
