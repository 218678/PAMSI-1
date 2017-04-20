#ifndef INTERFEJS_HH
#define INTERFEJS_HH

#include<cstdio>
#include<iostream>
#include<fstream>
//Tomasz Perczy�ski 226481, PAMSI �roda 14:00-16:00.

using namespace std;

class interfejs
{
	public:
	interfejs() {}
	virtual void add(int element) = 0;
	virtual int get() = 0;
	virtual void find(int element) = 0;
	virtual int size() = 0;
	virtual ~interfejs() {}
};

#endif
