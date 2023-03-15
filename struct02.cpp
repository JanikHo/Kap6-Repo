#include <iostream>
#include <vector>

using namespace std;

int main(){

    struct farbStruct
    {
        unsigned int rot;
        unsigned int blau;
        unsigned int gruen;
    };

    farbStruct mischung01 = {127, 128, 129};
    
    farbStruct mischung02;

    mischung02.rot = 10;
    mischung02.blau = 15;
    mischung02.gruen = 100;

    return 0;
}