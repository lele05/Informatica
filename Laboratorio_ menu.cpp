#include <iostream>
#include <conio.h>
using namespace std;

#define NUM_VOTI 5

double voti[NUM_VOTI];
double somma=0;
int conteggio=0;

void caricamento();
void visualizzazione();
void accumulazione();
void insufficienze();

int main() {
	int scelta=0;
	do {
		system("cls");
		cout << "1. CARICAMENTO" << endl;
		cout << "2. VISUALIZZAZIONE" << endl;
		cout << "3. ELABORAZIONE --> ACCUMULAZIONE" << endl;
		cout << "4. ELABORAZIONE --> INSUFFICIENZE" << endl;
		cout << "5. FINE LAVORO" << endl;
		cout << "Scegli: ";
		cin >> scelta;
		switch(scelta) {
			case 1: caricamento();
			break;
			case 2: visualizzazione();
			break;
			case 3: accumulazione();
			break;
			case 4: insufficienze();
			break;
			case 5: cout <<"FINE LAVORO"<<endl;
			break;
		}
	} while (scelta != 5);
	system("pause");
}


void caricamento() {
	for (int i = 0; i < NUM_VOTI; i++) {
	    cout << "VOTO " << i+1 << ": ";
		cin >> voti[i];
	}

	cout << "Premi invio per continuare ..."; getch();
}
 
void visualizzazione() {
	for (int i = 0; i < NUM_VOTI; i++) {
		cout << "VOTO " << i+1 << ": " << voti[i] << endl;
	}

	cout << "Premi invio per continuare ..."; getch();
}

void accumulazione() {
	for (int i = 0; i < NUM_VOTI; i++) {
		somma = somma + voti[i];
	}

	cout << "SOMMA: " << somma << endl;
	cout << "Premi invio per continuare ..."; getch();
}

void insufficienze() {
	for (int i = 0; i < NUM_VOTI; i++) {
		if (voti[i] < 6) {
			conteggio = conteggio+1;
		}
	}
	cout<< "INSUFFICIENZE: " << conteggio << endl;
	getch();
}
