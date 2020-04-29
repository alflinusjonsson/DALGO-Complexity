#include "experiments.h"
#include <algorithm>

#include "sortingalgorithms.h"

#include <QElapsedTimer>
#include <stdio.h>
#define SIZE 100000

void swap(float &a, float &b){

    float temp = a;
    a = b;
    b = temp;
}

void sixExperiments(){

    printf("\n\nsixExperiments()\n");

    float *arr = new float[SIZE];
    float *arr1 = new float [SIZE];

    for (int i; i < SIZE; i++)
    {
        arr[i] = rand();
        arr1[i] = rand();
    }

    QElapsedTimer myTimer;

    printf("Testar Bubblesort\n\n");

    myTimer.start();
    bubbleSortI(&arr[0], &arr[SIZE]);
    float elapsedTime = (float) myTimer.elapsed()/ 1000.0;
    printf("Osorterad tog %.3f sekunder. \n", elapsedTime );

    swap(arr[0], arr[SIZE-1]);

    myTimer.start();
    bubbleSortI(&arr[0], &arr[SIZE]);
    elapsedTime = (float) myTimer.elapsed()/ 1000.0;
    printf("Nästan sorterad tog %.3f sekunder. \n", elapsedTime );

    myTimer.start();
    bubbleSortI(&arr[0], &arr[SIZE]);
    elapsedTime = (float) myTimer.elapsed()/ 1000.0;
    printf("Sorterad tog %.3f sekunder. \n", elapsedTime );

    printf("\nFörsta talet i arrayn är: %f", arr[0]);

    delete [] arr;

    printf("Testar Insertsort\n\n");

    myTimer.start();
    insertSortP(&arr1[0], &arr1[SIZE]);
    elapsedTime = (float) myTimer.elapsed()/ 1000.0;
    printf("Osorterad tog %.3f sekunder. \n", elapsedTime );

    swap(arr1[0], arr1[SIZE-1]);

    myTimer.start();
    insertSortP(&arr1[0], &arr1[SIZE]);
    elapsedTime = (float) myTimer.elapsed()/ 1000.0;
    printf("Nästan sorterad tog %.3f sekunder. \n", elapsedTime );

    myTimer.start();
    insertSortP(&arr1[0], &arr1[SIZE]);
    elapsedTime = (float) myTimer.elapsed()/ 1000.0;
    printf("Sorterad tog %.3f sekunder. \n", elapsedTime );

    printf("\nFörsta talet i arrayn är: %f", arr1[0]);

    delete [] arr1;

    printf("\n\nsixExperiments()\n");

}


void stdSortExperiment(){
    printf("\n\nstdSortExperiment()\n");


    float *arr = new float [10000000];
    QElapsedTimer myTimer;

    for (int i; i < 10000000; i++)
    {
        arr[i] = rand();
    }

    myTimer.start();
    std::sort(&arr[0], &arr[10000000]);
    float elapsedTime = (float) myTimer.elapsed()/ 1000.0;
    printf("Att sortera 10 miljoner tal med std::sort tog %.3f sekunder. \n", elapsedTime );


    delete [] arr;
}


const char* nameOfStudent2(){
    return "Linus Jönsson"; // ändra till ditt namn
}

/***********************************************************************

 Resultat av experimenten:

Fyll i körttid och komplexitet i nedanstående tabell

----------------------------------------------------------------
            |    ordnat    |   nästan ordnat |   slumpmässigt  |
----------------------------------------------------------------
bubbleSort  |  4.103s O(n) |   4.112s O(n)   |   15.380s O(n^2)|
----------------------------------------------------------------
insertSort  |  0.001s O(n) |   0.001s O(n)   |   1.387s O(n^2) |
----------------------------------------------------------------

TODO fyll också i nedanstående!

körtiden för insertSort (slumpmässig) skattas med t(n) = c*n^2
där c = t(n)/n^2

c = 1.387e-10

Tiden att sortera sortera 10 miljoner tal borde då bli

= 13780 sekunder, dvs 3.82 timmar.

Med std::sort tog det 0.79s att sortera 10 miljoner tal.


************************************************************************/
