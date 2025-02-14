 REM Examen de POO.
 REM  Matricule: 24NTIL01A
 REM  Nom: ASA MAPA Joel Gedeon
 REM  Classe: GINFO/TIC
 REM
@echo off
:: Configuration
echo %COMPILER%
set SOURCE=main.cpp
set DIST_DIR=.\dist
set OUTPUT=%DIST_DIR%\personne
set INCLUDE_DIR=.\include
set CFLAGS=-I%INCLUDE_DIR% -Wall
:: Compilation
%COMPILER% %CFLAGS% -o %OUTPUT% %SOURCE%   
::Afichage du resultat
IF %errorlevel% EQU 0 (
  echo Compilation reussie !
  echo chemin de l'executable: %OUTPUT% 
) ELSE (
  echo Erreur de compilation !
)
