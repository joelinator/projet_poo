
#!/bin/bash
#
# examen de POO
# MATRICULE: 24NTIL01A
# Nom: ASA MAPA JOEL GEDEON
# CLASSE: GINFO/TIC4
# Configuration
COMPILER="g++"
SOURCE="main.cpp"
DIST_DIR="./dist"
OUTPUT="$DIST_DIR/personne"
INCLUDE_DIR="./include"
CFLAGS="-I$INCLUDE_DIR -Wall"

# Compilation
$COMPILER $CFLAGS -o "$OUTPUT" "$SOURCE"

# Displaying the result
if [ $? -eq 0 ]; then
  echo "Compilation successful!"
  echo "Executable path: $OUTPUT"
else
  echo "Compilation error!"
fi
