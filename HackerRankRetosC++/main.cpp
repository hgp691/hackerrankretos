//
//  main.cpp
//  HackerRankRetosC++
//
//  Created by Horacio Guzman on 13/04/20.
//  Copyright © 2020 HoracioGuzman. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, const char * argv[]) {
    // int, long, char, float, and double,
//    Int ("%d"): 32 Bit integer
//    Long ("%ld"): 64 bit integer
//    Char ("%c"): Character type
//    Float ("%f"): 32 bit real value
//    Double ("%lf"): 64 bit real value
    int entero;
    long largo;
    char caracter;
    float flotante;
    double doble;
    
    scanf("%d %ld %c %f %lf", &entero, &largo, &caracter, &flotante, &doble);
    
    printf("%d\n", entero);
    printf("%ld\n", largo);
    printf("%c\n", caracter);
    printf("%f\n", flotante);
    printf("%lf\n", doble);
    
    return 0;
}


