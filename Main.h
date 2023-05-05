#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
E -> TE'
E' -> +TE' | ε
T -> FT'
T' -> *FT' | ε
F -> (E) | i
*/


char cadena[50];
int pos = 0;
int error = 0;

int E();
int E_();
int T();
int T_();
int F();

int E() {
    if(T() && E_()) {
        return 1;
    } else {
        return 0;
    }
}
int E_() {
    if(cadena[pos] == '+') {
        pos++;
        if(T() && E_()) {
            return 1;
        } else {
            error = 1;
            return 0;
        }
    } else {
        return 1;
    }
}

int T() {
    if(F() && T_()) {
        return 1;
    } else {
        return 0;
    }
}

int T_() {
    if(cadena[pos] == '*') {
        if(F() && T_()) {
            return 1;
        } else {
            return 0;
        }
    } else {
        return 1;
    }
}

int F() {
    if(cadena[pos] == '(') {
        pos++;
        if(E()) {
            if(cadena[pos] == ')') {
                pos++;
                return 1;
            }
        }
        error = 1;
        return 0;
    } else if(cadena[pos] == 'i') {
        pos++;
        return 1;
    }
    return 0;
}
