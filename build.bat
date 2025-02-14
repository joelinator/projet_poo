
@ECHO OFF
 REM Examen de POO.
 REM  Matricule: 24NTIL01A
 REM  Nom: ASA MAPA Joel Gedeon
 REM  Classe: GINFO/TIC
 REM

:: Configuration
SET COMPILER=g++
SET SOURCE=main.cpp
SET DIST_DIR=.\dist
SET OUTPUT=%DIST_DIR%\personne
SET INCLUDE_DIR=.\include
SET CFLAGS=-I%INCLUDE_DIR% -Wall

:: Compilation
%COMPILER% %CFLAGS% -o %OUTPUT% %SOURCE%   

::Afichage du resultat
IF %errorlevel% EQU 0 (
  ECHO Compilation reussie !
  ECHO chemin de l'executable: %OUTPUT% 
) ELSE (
  ECHO Erreur de compilation !
)
