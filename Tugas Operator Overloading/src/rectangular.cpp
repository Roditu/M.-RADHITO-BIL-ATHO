#include <iostream>
#include <cmath>
#include "include/rectangular.hpp"

using namespace std;

persegiPanjang::persegiPanjang(float panjang, float lebar, float midpx, float midpy){
    
    this->xmax = panjang/2 + midpx;
    this->xmin = panjang/2 - midpx;

    this->ymax = panjang/2 + midpy;
    this->ymin = panjang/2 - midpy;
}

persegiPanjang persegiPanjang::operator+(persegiPanjang const &ov){
    
    
    if (*this == ov){
        persegiPanjang temp(0,0,0,0);
        temp.xmax = max(this-> xmax, ov.xmax);
        temp.xmin = min(this-> xmin, ov.xmin);

        temp.ymax = max(this-> ymax, ov.ymax);
        temp.ymin = min(this-> ymin, ov.ymin);

        return temp;
    }else{
        cout << "Dua Persegi Panjang Tidak Saling Beririsan" << endl;
    }
    
}

persegiPanjang persegiPanjang::operator-(persegiPanjang const &ov){
    persegiPanjang temp(0,0,0,0);
    
    if (*this == ov){
        temp.xmax = min(this-> xmax,ov.xmax);
        temp.xmin = max(this-> xmin,ov.xmin);
        
        temp.ymax = min(this-> ymax,ov.ymax);
        temp.ymin = max(this-> ymin,ov.ymin);

        return temp;
    }else{
        cout << "Dua Persegi Panjang Tidak Saling Beririsan" << endl;
    }
    
}

void persegiPanjang::operator++(){
    float panjang, lebar, midpx, midpy; 

    panjang = this->xmax - this->xmin;
    lebar = this->ymax - this->ymin;
    
    midpx = this->panjang/2 + xmin;
    midpy = this->lebar/2 + ymin;

    panjang *= 2;
    lebar *= 2;

    this->xmax = panjang/2 + midpx;
    this->xmin = panjang/2 - midpx;
    
    this->ymax = lebar/2 + midpy;
    this->ymin = lebar/2 - midpy;
}

void persegiPanjang::operator++(int){
    float panjang, lebar, midpx, midpy; 
   
    panjang = this->xmax - this->xmin;
    lebar = this->ymax - this->ymin;
    
    midpx = this->panjang/2 + xmin;
    midpy = this->lebar/2 + ymin;

    panjang *= 2;
    lebar *= 2;

    this->xmax = panjang/2 + midpx;
    this->xmin = panjang/2 - midpx;
    
    this->ymax = lebar/2 + midpy;
    this->ymin = lebar/2 - midpy;
}

void persegiPanjang::operator--(){
    float panjang = 0, lebar = 0, midpx = 0, midpy = 0; 
    
    panjang = this->xmax - this->xmin;
    lebar = this->ymax - this->ymin;
    
    midpx = this->panjang + xmin;
    midpy = this->lebar + ymin;

    panjang /= 2;
    lebar /= 2;

    this->xmax = panjang/2 + midpx;
    this->xmin = panjang/2 - midpx;
    
    this->ymax = lebar/2 + midpy;
    this->ymin = lebar/2 - midpy;
}

void persegiPanjang::operator--(int){
    float panjang, lebar, midpx, midpy; 
    
    panjang = this->xmax - this->xmin;
    lebar = this->ymax - this->ymin;
    
    midpx = this->panjang + xmin;
    midpy = this->lebar + ymin;

    panjang /= 2;
    lebar /= 2;

    this->xmax = panjang/2 + midpx;
    this->xmin = panjang/2 - midpx;
    
    this->ymax = lebar/2 + midpy;
    this->ymin = lebar/2 - midpy;
}

float persegiPanjang::operator[](int i){
    switch (i){
    case 1:
        return this->xmin;
        break;
    case 2:
        return this->xmax;
        break;
    case 3:
        return this->ymin;
        break;
    case 4:
        return this->ymax;
        break;
    }
}

bool persegiPanjang::operator==(persegiPanjang const &ov) const{
    if (this->xmax > ov.xmin && this->xmin < ov.xmax && this->ymax > ov.ymin && this->ymin < ov.ymax){
        return true;
    }else{
        return false;
    }
}

void persegiPanjang::hasil(){
    float panjang = this->xmax - this->xmin;
    float lebar   = this->ymax - this->ymin;

    float midpx = panjang/2 + this->xmin;
    float midpy = lebar/2 + this->ymin;

    float luas = panjang*lebar;

    cout << "Titik tengah x         : " << midpx << endl;
    cout << "Titik tengah y         : " << midpy << endl;
    cout << "Panjang                : " << panjang << endl;
    cout << "Lebar                  : " << lebar << endl;
    cout << "Nilai x minimum        : " << this->xmin << endl;
    cout << "Nilai x maximum        : " << this->xmax << endl;
    cout << "Nilai y minimum        : " << this->ymin << endl;
    cout << "Nilai y maximum        : " << this->ymax << endl;
    cout << "Luas persegi panjang   : " << luas << endl;

}