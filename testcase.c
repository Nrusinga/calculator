#include"testcase.h"
void assertion()
{
    assert(addition(10,5)== 15);
    printf("\nok");
    assert(addition(-10,5)== -5);
    printf("\nok");
    assert(addition(10,0)== 10);
    printf("\nok");
    assert(addition(0,5)== 5);
    printf("\nok");
    assert(division(5,0)== 9);
    printf("\nok");
    assert(division(0,6)== 0);
    printf("\nok");
    assert(division(10,5)== 2);
    printf("\nok");
    assert(power(0,5)== 0);
    printf("\nok");
    assert(power(1,0)== 1);
    printf("\nok");
    assert(power(1,5)== 1);
    printf("\nok");
}
