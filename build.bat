SET dist_dir=dist
@ECHO ---------------------------------------------
@ECHO COMPILATION ET GENERATION DE L'EXECUTABLE
@ECHO ---------------------------------------------
g++ -o "%dist_dir%\exec" main.cpp
@ECHO Termine'. 

@ECHO executez a commande: ".\dist\exec.exe" pour lancer le programme
