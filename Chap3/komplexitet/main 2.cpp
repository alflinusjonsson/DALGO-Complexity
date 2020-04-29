#include <QCoreApplication>

#include "sortingalgorithms.h"
#include "experiments.h"
#include <assert.h>
#include <string>
using  namespace  std;

const char* nameOfStudent1();
const char* nameOfStudent2();
const char* nameOfStudent3();



int main(int , char **)
{
    printf("\n\n\nmain\n\n");

    assert( string("Homer Simpson") != nameOfStudent1() );

    testingSortAlgoritms();


    assert( string("Homer Simpson") != nameOfStudent2() );

    sixExperiments();



    stdSortExperiment();

    assert( string("Homer Simpson") != nameOfStudent3() );


}
