#include "sortingalgorithms.h"

#include <stdio.h> // printf
#include <algorithm>
using namespace std;

// Uppdraget som beskrivs i häftet går i korthet ut på att analysera
// nedanstående algoritmer för olika typer av indata. Se uppdragsbeskrivning.
//




/**********************************************************************************
 * ANROP:   bubbleSortI( pBegin, pEnd);
 * UPPGIFT: pBegin och pEnd definierar en array av element (pBegin pekar på det
 *          första elementet och pEnd EFTER det sista).
 *          Funktionen sorterar arrayen så att det minsta elementet hamnar först.
 *
 *          Algoritmen som används måste vara den version av bubbleSort som
 *          beskrivs i uppdragshäftet!!
 * ********************************************************************************/
void bubbleSortI(float *pBegin, float *pEnd){
    int size = pEnd - pBegin;
    for (int maxIndex = size-1 ; maxIndex>0 ; maxIndex -= 1)
        for (int i=0 ; i<maxIndex ; i+=1)
            if (pBegin[i]>pBegin[i+1])
                swap( (pBegin[i]), (pBegin[i+1]) );
}


void insertSortP(float *pBegin, float *pEnd){

    for (float *pLastInOrder=pBegin; pLastInOrder<pEnd-1 ; pLastInOrder+=1){
        float x = *(pLastInOrder+1);
        float *p = pLastInOrder;
        for (   ; p>=pBegin && *p>x ; p-=1)
            *(p+1) = *p;
        *(p+1) = x;
    }
}

void testingSortAlgoritms(){

    // Här kan du skriva testkod om du vill experimentera med algoritmerna

}


const char* nameOfStudent1(){
    return "Linus Jönsson"; // ändra till ditt namn
}

/***********************************************************************

 Resultat av analysen:

 TODO


Fyll i nedanstående tabell och var  beredd på att förklara
hur du gjort analysen!

----------------------------------------------------------
            |  ordnat   | nästan ordnat |  slumpmässigt   |
----------------------------------------------------------
bubbleSort  |   O(n)    |     O(n)      |     O(n^2)      |
----------------------------------------------------------
insertSort  |   O(n)    |     O(n)      |     O(n^2)      |
----------------------------------------------------------

************************************************************************/

