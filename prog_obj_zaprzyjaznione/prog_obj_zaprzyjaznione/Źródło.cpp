#include <iostream>
#include "przyjaciele.h"
using namespace std;

void sedzia(Punkt pkt, Prostokat p)
{
	if ((pkt.x >= p.x) && (pkt.x <= p.x + p.szerokosc) && (pkt.y >= p.y) && (pkt.y <= p.y + p.wysokosc))
		cout << "Punkt " << pkt.nazwa << "Nalezy do prostokata" << p.nazwa;
	else
		cout << "Punkt " << pkt.nazwa << "lezy poza prostokatem:" << p.nazwa;
}


int main()
{
	Punkt pkt1; ("A", 3, 1);
	//pkt1.wczytaj();

	Prostokat p1; ("Prostokat", 0, 0,6,4);
	//pkt1.wczytaj();

	sedzia(pkt1, p1);
}