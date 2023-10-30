#include "Dugum.hpp"
#include <iostream>

Dugum::Dugum(int veri)//constructor
{
    this->veri = veri;
    this->sonraki = 0;
}

Dugum::~Dugum()//destructor
{
    std::cout << veri << " dugumu silindi" << std::endl; 
}