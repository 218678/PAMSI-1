#ifndef LISTA_KLASA_HH
#define LISTA_KLASA_HH

#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <cstdlib>
#include <string>
#include "interfejs.h"

//Tomasz Perczy�ski 226481, PAMSI �roda 14:00-16:00.
// LISTA KLASA
using namespace std;

class costam {
	public:
	costam* nastepny;
	int a;
	costam(int liczba) {
		nastepny = 0;
		a=liczba;
	}
};

class lista: public interfejs {
	costam* pierwszy;
	costam* nowy;

	public:
	int licznik;
	lista();
	void wyswietl_liste();
	void add(int element);
	int get();
	void find(int element);
	int size();
	void wypelnij(int ilosc);
	void wyczysc();

	int get(int idx) {
		costam* elem1 = pierwszy;
		costam* elem2 = nullptr;
		for (int i=0; i<size(); i++) {
			if (i == idx) {
				if (elem2 != nullptr) {
					elem2->nastepny = elem1->nastepny;
					licznik--;
					return elem1->a;
				}
			} else {
				elem2 = elem1;
				elem1 = elem1->nastepny;
			}
		}
	}
	void insert(int wartosc_elem, int idx) {
		costam* _elem_1 = pierwszy;
		costam* _elem_2 = nullptr;
		costam* _nowy_elem = new costam(wartosc_elem);
		for (int i=0; i<=size(); i++) {
			if ( i == idx ) {
				_elem_2->nastepny = _nowy_elem;
				_nowy_elem = _elem_1;
				licznik++;
			} else {
				_elem_2 = _elem_1;
				_elem_1 = _elem_1->nastepny;
			}
		}
	}

};

lista::lista()
{
	pierwszy=NULL;
	licznik=0;
}

void lista::wyczysc()
{
	costam* uno;
	costam* dos;
	uno=pierwszy;
	while(uno)
	{
		dos=uno;
		uno=uno->nastepny;
		delete dos;
	}
	pierwszy = NULL;
}

void lista::wypelnij(int ilosc)
{
	for(int i=0; i<ilosc; i++)
	{

		add(rand()%100);
	}
}

	int lista::get()
	{
		costam* temp=pierwszy;
		while(temp ->nastepny)
		{
			temp = temp -> nastepny;
		}
		return temp->a;
	}

	void lista::find(int element)
	{
		costam* temp=pierwszy;
		while(temp -> nastepny)
		{
			if(element == temp->a )
			{
				cout << "Poszukiwany element znajduje sie w liscie."<<endl;
				break;
				}
			temp = temp-> nastepny;
		}
	}

	int lista::size()
	{
		return licznik;
	}

void lista::wyswietl_liste()
{
	costam *t = pierwszy;
	while(t)
	{
		cout << t->a<<endl;
		t=t->nastepny;

	}
}

void lista::add(int liczba)
{
	nowy = new costam(liczba);
	nowy->nastepny=NULL;
	if(pierwszy==NULL)
	{
		pierwszy=nowy;
	}
	else
	{
		costam* t = pierwszy;
		while(t->nastepny)
		{
			t=t->nastepny;
		}
	t->nastepny=nowy;
	nowy->nastepny=NULL;
	licznik++;
	}
}

#endif
