//
//  Kyle Samson
//  C++ Programming II
//  klingon.cpp
//

#include "starTrek.hpp"
#include "klingon.hpp"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

Klingon::Klingon(int firePhasers, int fireTorpedoes)
{
    cout << "KLINGON OBJECT BEING CREATED. " << this << endl;
    mFirePhasers = firePhasers;
    mFireTorpedoes = fireTorpedoes;

    klingonQuadrantRow = 4;
    klingonQuadrantColumn = 5;
    mKlingonRow = 3;
    mKlingonColumn = 3;
    mKlingonEnergy = 200;
};

Klingon::~Klingon()
{
    cout << "***KLINGON DESTROYED***" << endl;
    mScore = mScore + 10;
    klingonsLeft--;

    if (klingonsLeft <= 0)
    {
        mScore = mScore + 100;
        cout << "\nCONGRATULATIONS, CAPTAIN!"
                << "\n\nTHE LAST KLINGON BATTLE CRUISER MENACING THE FEDERATION HAS BEEN DESTROYED."
                << "\n\nYOUR EFFICIENCY RATING IS: " << mScore << endl;
    }
};

int Klingon::klingonHealthPHA()
{
    cout << mFirePhasers << endl;
    cout << mFirePhasers << " UNIT HIT ON KLINGON AT SECTOR " << mKlingonRow << " , " << mKlingonColumn << endl;
    mKlingonEnergy = mKlingonEnergy - mFirePhasers;

    if (mKlingonEnergy <= 0)
    {
        this->~Klingon();
    }
};

int Klingon::klingonHealthTOR()
{
    cout << "TORPEDO TRACK: " << endl;
    mKlingonEnergy = mKlingonEnergy - 200;

    if (mKlingonEnergy <= 0)
    {
        this->~Klingon();
    }
}