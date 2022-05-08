#include <iostream>
#include <string>
#include "include/rectangular.hpp"

using namespace std;

float panjang, lebar, midpx, midpy;

int main(){
    while(1){
       string yn;
        int operate;
        cout << "SELAMAT DATANG DI PROGRAM OPERATOR OVERLOAD" << endl;
        cout << "SILAHKAN INPUTKAN DATA PERSEGI PANJANG" << endl;
        cout << "Persegi panjang 1" << endl;
        cout << "Panjang        : "; cin >> panjang; cout << endl;    
        cout << "Lebar          : "; cin >> lebar; cout << endl;         
        cout << "Titik tengah x : "; cin >> midpx; cout << endl;    
        cout << "Titik tengah y : "; cin >> midpy; cout << endl;    
        cout << endl;
        persegiPanjang pp1(panjang, lebar, midpx, midpy);

        cout << "Persegi panjang 2" << endl;
        cout << "INPUTKAN DATA PERSEGI PANJANG" << endl;
        cout << "Persegi panjang 2" << endl;
        cout << "Panjang        : "; cin >> panjang; cout << endl;    
        cout << "Lebar          : "; cin >> lebar; cout << endl;         
        cout << "Titik tengah x : "; cin >> midpx; cout << endl;    
        cout << "Titik tengah y : "; cin >> midpy; cout << endl;    
        cout << endl;
        persegiPanjang pp2(panjang, lebar, midpx, midpy);
        persegiPanjang pp3(0,0,0,0);

        system("clear || CLS");

        cout << "DATA YANG DIGUNAKAN ADALAH" << endl;
        cout << "Persegi panjang 1" << endl; 
            pp1.hasil();
            cout <<endl;
        cout << "Persegi panjang 2" << endl;
            pp2.hasil();
            cout << endl;
        cout << "Data yang dimasukan sesuai (y/n) : ";
            cin >> yn;
                if(yn == "n" || yn == "N"){
                    main();
                }else {
                    continue;
                }

        
        while(1){
        system("clear || CLS");   
            cout << endl;
            cout << "Masukkan operator yang ingin digunakan" << endl;
            cout << "1. Operator +" << endl;
            cout << "2. Operator -" << endl;
            cout << "3. Operator ++ (persegi panjang 1)" << endl;
            cout << "4. Operator -- (persegi panjang 1)" << endl;
            cout << "5. Operator ++ (persegi panjang 2)" << endl;
            cout << "6. Operator -- (persegi panjang 2)" << endl;
            cout << "7. Operator []" << endl;
            cout << endl;
            cin >> operate;
            switch (operate){
                case 1:
                    {
                        cout << "OPERATOR +" <<endl;
                        pp3 = pp1 + pp2;
                        
                        }
                    
                    break;
                case 2:
                    {
                        cout << "OPERATOR - " << endl;
                        pp3 =pp1 - pp2;
                        if (pp1 == pp2){
                            pp3.hasil();
                            cout << endl;
                            cout << " Persegi Panjang Beririsan";
                        }else {
                            pp3.hasil();
                            cout << endl;
                            cout << " Persegi Panjang Tidak Beririsan";
                        }
                    }
                    break;
                case 3:
                    {
                        cout << "OPERATOR ++ persegi panjang 1" << endl;
                        ++pp1;
                        pp1.hasil();
                        --pp1;
                    }
                    break;
                case 4:
                    {
                        cout << "OPERATOR -- persegi panjang 1 " << endl;
                        --pp1;
                        pp1.hasil();
                        ++pp1;
                    }
                    break;
                case 5:
                    {
                        cout << "OPERATOR ++ persegi panjang 2 " << endl;
                        ++pp2;
                        pp2.hasil();
                        --pp2;
                    }
                    break;
                case 6:
                    {
                        cout << "OPERATOR -- persegi panjang 2 " << endl;
                        --pp2;
                        pp2.hasil();
                        ++pp2;
                    }
                    break;
                case 7:
                    {
                        const char *data[4] = {"xminimum", "xmaximum", "yminimum", "ymaximum"};
                        cout<<"OPERATOR [] Perbandingan dua persegi panjang"<<endl;
                        for (int i = 1; i < 5; i++){
                            cout << "Nilai " << data[i-1] << " Persegi Panjang 1: " << pp1[i] << endl;
                            cout << "Nilai " << data[i-1] << " Persegi Panjang 2 : " << pp2[i] << endl;
                            if (pp1[i] > pp2[i]){
                                cout << data[i-1] << " Persegi Panjang 1 lebih besar dari " << data[i-1] << " Persegi Panjang 2" <<endl;
                            }else if(pp2[i] > pp1[i]){
                                cout << data[i-1] << " Persegi Panjang 2 lebih besar dari " << data[i-1] << " Persegi Panjang 1" <<endl;
                            }else{
                                cout << "Kedua " << data[i-1] << "sama besar" << endl;
                            }
                        
                        }
                    }
                    break;
                case 8:
                    {
                        cout << endl;
                        cout << "OPERATOR == " << endl;
                        if (pp1==pp2){
                            cout << " Kedua Persegi Panjang Saling Beririsan" << endl;
                        }else{
                            cout << " Kedua Persegi Panjang Tidak Saling Beririsan " << endl;
                        }
                    }
                    break;
                }
            
            }
    
    }
return 0;
}
