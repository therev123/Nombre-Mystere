#include <iostream>
using namespace std;

int main(int agrc, char** argv)
{
	int nbrUser;
	int nbrMystere = 5;

	cout << "Bienvenu dans le jeu Nombre Mystere!!!\n";
	cout << "Entrez un nombre entre 0 et 10: ";
	cin >> nbrUser;
	//Teste si le nombre entré par l'utilisateur est semblable au nombre mystère
	if (nbrUser == nbrMystere)
	{
		cout << "Bravo tu as trouver le nombre mystère!!!\n";
	}
	else
	{
		cout << "Meilleure chance la prochaine fois\n";
	}
	system("pause");
	return 0;
}