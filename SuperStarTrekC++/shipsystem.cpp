#include "starTrek.hpp"
#include "shipsystem.hpp"
#include <iomanip>
#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

void EnterpriseNavigation::navigation()
{
    cout << "Navigation" << endl;
}

void EnterpriseShortScan::shortscan()
{
    cout << "Short Range Scan" << endl;
}

void EnterpriseLongScan::longscan()
{
    cout << "Long Range Scan" << endl;
}

void EnterprisePhasers::phasers()
{
    cout << "Phasers" << endl;
}

void EnterpriseTorpedoes::torpedoes()
{
    cout << "Torpedoes" << endl;
}

void EnterpriseShields::shields()
{
    cout << "Shields" << endl;
}

void EnterpriseDamageCont::damagecont()
{
    cout << "Damage Control" << endl;
}

void EnterpriseLibraryComp::librarycomp()
{
    cout << "Library Computer" << endl;
}

void EnterpriseResignCommand::resigncommand()
{
    cout << "Resign Command" << endl;
}

void EnterpriseHelp::help()
{
    cout << "Help" << endl;
}