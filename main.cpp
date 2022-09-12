#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];            //N_ELEMENTS 
    std::cout << '1-100 ertekek duplazasa'
    for (int i = 0;) // Hiányzik a végső érték amit az i felvehet és a léptetés mértéke
    {
        b[i] = i * 2;  //(i+1)*2 kell írni
    }
    for (int i = 0; i; i++) // ez a for ciklus nem kell, belemehet a másikba
    {
        std::cout << "Ertek:" // hiányzik: << b[i]
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;                               //kezdőértéket kell megadni, illetve átlagot double-el szokták számolni, mert ritkán egész az eredmény (mint itt)
    for (int i = 0; i < N_ELEMENTS, i++)  // ; kell , helyett
    {
        atlag += b[i]                     //hiányzik a ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
