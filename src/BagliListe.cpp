#include "BagliListe.hpp"
#include <iostream>

BagliListe::BagliListe()
{
    ilk = 0;
}

BagliListe::~BagliListe()
{
    Dugum* gec = ilk;
    while (gec != 0)
    {
        Dugum* sil = gec;
        gec = gec->sonraki;
        delete sil;
    }
    
}

void BagliListe::yazdir()
{

}