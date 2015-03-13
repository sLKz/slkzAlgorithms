#include <stdio.h>

typedef unsigned long int ulong;
typedef unsigned short int ushort;

long int cautareBinara(ulong sir[100000], ulong numarElemente, ulong numar, ushort tipIntrebare);

int main()
{
    FILE* fisierIntrare;
    FILE* fisierIesire;
    
    ulong numarElemente;
    ulong sir[100000];
    ulong numarIntrebari;
    ushort tipIntrebare;
    ulong numar;
    
    fisierIntrare = fopen("cautbin.in", "r");
    fisierIesire = fopen("cautbin.out", "w");
    
    fscanf(fisierIntrare, "%lu", &numarElemente);
    for (ulong index = 0; index < numarElemente; index++)
    {
        fscanf(fisierIntrare, "%lu", &sir[index]);
    }
    
    fscanf(fisierIntrare, "%lu", &numarIntrebari);
    for (ulong index = 0; index < numarIntrebari; index++)
    {
        fscanf(fisierIntrare, "%hu", &tipIntrebare);
        fscanf(fisierIntrare, "%lu", &numar);
        
        cautareBinara(sir, numarElemente, numar, tipIntrebare);
    }
}

long int cautareBinara(ulong sir[100000], ulong numarElemente, ulong numar, ushort tipIntrebare)
{
    ulong stanga = 0;
    ulong dreapta = numarElemente;
    
    if (tipIntrebare == 1)
    {
        if (stanga > dreapta)
        {
            return -1;
        }
        else
        {
            ulong mijloc = stanga + (dreapta - stanga) / 2;
            
            if (sir[mijloc] > numar)
            {
                dreapta = mijloc - 1;
            }
            else if (sir[mijloc] < numar)
            {
                stanga = mujloc + 1;
            }
            else if (sir[mijloc] == numar)
            {
                if (sir[mijloc + 1] == numar)
                {
                    stanga = mijloc + 1;
                }
                else
                {
                    return mijloc;
                }
            }
        }
    }
}
