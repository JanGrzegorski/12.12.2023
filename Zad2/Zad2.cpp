#include <iostream>
#include <vector>
using namespace std;
class Zakupy
{
public:
	string Nabial;
	string Warzywo;
	string Pieczywo;
	int cenaNabialu;
	int cenaWarzywa;
	int cenaPieczywa;
public:
	Zakupy(string Nabial, string Warzywo, string Pieczywo, int cenaNabialu, int cenaWarzywa, int cenaPieczywa) {
		this->Nabial = Nabial;
		this->Warzywo = Warzywo;
		this->Pieczywo =Pieczywo;
		this->cenaNabialu = cenaNabialu;
		this->cenaWarzywa = cenaWarzywa;
		this->cenaPieczywa = cenaPieczywa;
	}
};
int main()
{
	vector <Zakupy> tablica;
	int ileProduktow;
	int suma = 0;
	cout << "Podaj ile produktow dodac do koszyka = "; cin >> ileProduktow;
	for (size_t i = 0; i < ileProduktow; i++) {
		string Nabial;
		string Warzywo;
		string Pieczywo;
		int cenaNabialu;
		int cenaWarzywa;
		int cenaPieczywa;
		cout << "nr " << i + 1 << " podaj Nabial = "; cin >> Nabial;
		cout << "nr " << i + 1 << " podaj cene Nabialu = "; cin >> cenaNabialu;
		cout << "nr " << i + 1 << " podaj Warzywo = "; cin >> Warzywo;
		cout << "nr " << i + 1 << " podaj cene Warzywa = "; cin >> cenaWarzywa;
		cout << "nr " << i + 1 << " podaj Pieczywo = "; cin >> Pieczywo;
		cout << "nr " << i + 1 << " podaj cene Pieczywa = "; cin >> cenaPieczywa;

		tablica.push_back(Zakupy(Nabial, Warzywo, Pieczywo,cenaNabialu,cenaWarzywa,cenaPieczywa));
	}
	for (size_t i = 0; i < tablica.size(); i++)
	{
		cout << "Nabial: " << tablica[i].Nabial << " Warzywo: " << tablica[i].Warzywo << " Pieczywo: " << tablica[i].Pieczywo << " cena: " << endl;	
		suma = suma + tablica[i].cenaNabialu;
		suma = suma + tablica[i].cenaWarzywa;
		suma = suma + tablica[i].cenaPieczywa;

	}
	cout << "Suma Nabialu: " << suma;
	cout << "Suma Warzywa: " << suma;
	cout << "Suma Pieczywa: " << suma;

	return EXIT_SUCCESS;
}
