//
//  Kyle Samson
//  C++ Programming II
//  klingon.hpp
//

#ifndef klingon_hpp
#define klingon_hpp
#include <string>
using namespace std;

class Klingon
{
    public:
        Klingon(int firePhasers, int fireTorpedoes);
        ~Klingon();

        int klingonHealthPHA();
        int klingonHealthTOR();

        int klingonQuadrantRow;
        int klingonQuadrantColumn;
        int klingonsLeft = 1;

    private:
        int mFirePhasers;
        int mFireTorpedoes;
        int mScore;

        int mKlingonRow;
        int mKlingonColumn;
        
        int mKlingonEnergy;
};

#endif