#include <stdio.h>
#include "LAB.h"



int main()
{
    
    int a;
    printf("номер необходимой лабы :\n");

    scanf("%d",&a);

    switch(a)
    {
        case 1:
        Lr1();
        break;
        case 2:
        Lr2();
        break;
        case 3:
        Lr3();
        break;
        case 4:
        Lr4();
        break;
        case 5:
        Lr5();
        break;
        case 6:
        Lr6();
        break;
        case 7:
        Lr7();
        break;
        case 8:
        Lr8();
        break;
    }


}