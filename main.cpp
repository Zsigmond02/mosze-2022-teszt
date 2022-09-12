#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];            //N_ELEMENTS 
    std::cout << "1-100 ertekek duplazasa"; // "" kell illetve ;
     for (int i=0; i<N_ELEMENTS; i++) // Hiányzik a végső érték amit az i felvehet és a léptetés mértéke
    {
        b[i] = (i+1) * 2;  //(i+1)*2 kell írni
          std::cout << "Ertek:" << b[i] << std::endl;
    }
   /* for (int i = 0; i; i++) // ez a for ciklus nem kell, belemehet a másikba
    {
        std::cout << "Ertek:" // hiányzik: << b[i]
    }*/    
    std::cout << "Atlag szamitasa: " << std::endl;
    double atlag = 0;                               //kezdőértéket kell megadni, illetve átlagot double-el szokták számolni, mert ritkán egész az eredmény (mint itt)
    for (int i = 0; i < N_ELEMENTS; i++)  // ; kell , helyett
    {
        atlag += b[i];                     //hiányzik a ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
