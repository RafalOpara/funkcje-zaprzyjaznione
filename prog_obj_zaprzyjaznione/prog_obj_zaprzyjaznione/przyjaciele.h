#include <iostream>

using namespace std;

class Prostokat;

class Punkt
{
	float x, y;
	string nazwa;

public:
	Punkt(string = "A", float = 0, float = 0);
	void wczytaj();

	friend void sedzia(Punkt pkt, Prostokat);
};


class Prostokat
{
	string nazwa;
	float x, y, szerokosc, wysokosc;

public:
	Prostokat(string = "brak", float = 0, float = 0, float = 1, float = 1);
	void wczytaj();

	friend void sedzia(Punkt pkt, Prostokat);
};