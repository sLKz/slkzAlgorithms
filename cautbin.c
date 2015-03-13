#include <stdio.h>

int main()
{
    FILE* fisierIntrare;
    FILE* fisierIesire;
    
    unsigned long int numarElemente;
    unsigned long int sir[100000];
    unsigned long int numarIntrebari;
    unsigned short int tipIntrebare;
    unsigned long int numar;
    
    fisierIntrare = fopen("cautbin.in", "r");
    fisierIesire = fopen("cautbin.out", "w");
    
    fscanf(fisierIntrare, "%lu", &numarElemente);
    for (unsigned long int index = 0; index < numarElemente; index++)
    {
        fscanf(fisierIntrare, "%lu", &sir[index]);
    }
    
    fscanf(fisierIntrare, "%lu", &numarIntrebari);
    for (unsigned long int index = 0; index < numarIntrebari; index++)
    {
        fscanf(fisierIntrare, "%hu", &tipIntrebare);
        fscanf(fisierIntrare, "%lu", &numar);
    }
}

