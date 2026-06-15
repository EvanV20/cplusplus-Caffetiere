using namespace std;
#include "kf.h"
#include <iostream>

Caffetiere::Caffetiere()
{
    couleur = "Noir";
    volumeeau = 1;
}

void Caffetiere::FaireCafe()
{
    cout << "la caffetiere est de couleur " << couleur << "avec un volume d'eau de "<< volumeeau << "l" <<endl;
}

Caffetiere::~Caffetiere()
{
}
