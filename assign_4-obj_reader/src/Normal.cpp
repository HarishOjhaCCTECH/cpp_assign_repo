#include "../headers/Normal.h"
Normal::Normal(){}
Normal::Normal(int a, int b, int c){
    mnx = a;
    mny = b;
    mnz = c;
}
Normal::~Normal(){}
int Normal::nx(){
    return mnx;
}
int Normal::ny(){
    return mny;
}
int Normal::nz(){
    return mnz;
}