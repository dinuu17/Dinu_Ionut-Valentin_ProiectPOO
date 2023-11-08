#include <iostream>
using namespace std;

// Delfinariu
// 1. Acvariu 2. Peste 3. Angajat

class Acvariu {
public:
	int nrSpecii;
	const float capacitate;
	static string material;
	float* preturi;

	Acvariu() : capacitate(300) {
		this->nrSpecii = 3;
		
		this->preturi = new float[this->nrSpecii];
		for (int i = 0; i < this->nrSpecii; i++)
		{
			this->preturi[i] = 256 * (i+1) ;
		}
	}

	Acvariu(int nrSpecii, float capacitate, float* preturi) : capacitate(capacitate)
	{
		this->nrSpecii = nrSpecii;

		this->preturi = new float[this->nrSpecii];
		for (int i = 0; i < this->nrSpecii; i++)
		{
			this->preturi[i] = preturi[i];
		}
	}

	void afisare()
	{
		cout << "Capacitate : " << this->capacitate << "\nMaterial : " << this->material << "\nNumar specii : " << this->nrSpecii << "\nPreturi specii: ";
		for (int i = 0; i < this->nrSpecii - 1; i++) {
			cout << this->preturi[i] << ", ";
		}
		cout << this->preturi[this->nrSpecii - 1] << endl;
	}

	static void setMaterial(string materialNou) {
		material = materialNou;
	}

};
string Acvariu::material = "sticla";

class Peste {
public:
	string specie;
	const int longevitate;
	static string rapitor;
	float* greutate; // string ?

	Peste() : longevitate(3) {
		this->specie = "Somon";

		this->greutate = new float [this->longevitate] ;
		for (int i = 0; i < this->longevitate; i++)
		{
			this->greutate[i] = 1.5 * (i + 1);
		}
	}

	Peste(string specie, int longevitate, float* greutate) : longevitate(longevitate)
	{
		this->specie = specie;

		this->greutate = new float[this->longevitate];
		for (int i = 0; i < this->longevitate; i++)
		{
			this->greutate[i] = greutate[i];
		}
	}

	void afisare()
	{
		cout << "Specie: " << this->specie << "\nLongevitate: " << this->longevitate << "\nGreutate in functie de ani: ";
		for (int i = 0; i < this->longevitate - 1; i++)
		{
			cout << this->greutate[i] << ", ";
		}
		cout << this->greutate[this->longevitate - 1] << endl;
	}

	static void setRapitor(string rapitorNou) {
		rapitor = rapitorNou;
	}
};
string Peste::rapitor = "nerapitor";

class Angajat {
public:
	string nume;
	const long CNP;
	int aniExperienta;
	static float salariu;
	float* prime;

	Angajat() : CNP(456378393)
	{
		this->nume = "Ion";
		int experienta = 5;

		this->prime = new float[this->aniExperienta];
		for (int i = 0; i < this->aniExperienta; i++)
		{
			this->prime[i] = (float)(this->salariu * 1.2);
		}

	}

	Angajat(string nume, long CNP, int aniExperienta, float* prime) : CNP(CNP)
	{
		this->nume = nume;
		this->aniExperienta = aniExperienta;
		this->prime = new float[this->aniExperienta];
		for (int i = 0; i < this->aniExperienta - 1; i++)
		{
			this->prime[i] = prime[i];
		}
	}

	void afisare() {
		cout << "Nume: " << this->nume << "\nCNP: " << this->CNP << "\nAni experienta: " << this->aniExperienta << "\nSalariu: " << this->salariu << "\nPrime: ";
		for (int i = 0; i < this->aniExperienta; i++)
		{
			cout << this->prime[i] << ", ";
		}
		cout << this->prime[this->aniExperienta - 1] << endl;
	}

	static void setSalariu(float salariuNou) {
		salariu = salariuNou;
	}
	
};
float Angajat::salariu = 3000;

void main()
{

	Acvariu acv1;
	acv1.afisare();
	cout << endl;

	Acvariu acv2;

	float* preturi = new float[3];
	for (int i = 0; i < 3; i++)
	{
		preturi[i] = (i + 1) * 10 + 2;
	}
	Acvariu acv3(2, 200, preturi);
	acv3.afisare();
	cout << endl;




	Peste p1;
	p1.afisare();
	cout << endl;

	Peste p2;

	float* greutate = new float[4];
	for (int i = 0; i < 4; i++)
	{
		greutate[i] = 2 * (i + 1);
	}
	Peste p3("Crap", 4, greutate);
	p3.afisare();
	cout << endl;





	Angajat a1;
	a1.afisare();
	cout << endl;

	Angajat a2;

	float* prime = new float[5];
	for (int i = 0; i < 5; i++)
	{
		prime[i] = 1.5 * i;
	}
	Angajat a3("Cristi", 2345124534, 5, prime);
	a3.afisare();
	cout << endl;


}