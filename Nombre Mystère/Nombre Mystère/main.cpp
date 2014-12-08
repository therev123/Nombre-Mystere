#include <iostream>
using namespace std;

int main(int agrc, char** argv)
{
	int nbrUser;
	int nbrMystere = 5;
	int nbrEssaie = 3;

	cout << "Bienvenu dans le jeu Nombre Mystere!!!\n";
	//Boucle du jeu
	do
	{
		cout << "Entrez un nombre entre 0 et 10: ";
		cin >> nbrUser;
		nbrEssaie--;
	} while (nbrUser != nbrMystere && nbrEssaie != 0);

	system("pause");
	return 0;
}