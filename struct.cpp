#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct mystruct{
        string brand;
        unsigned short size;
        double price;
    };

int main(){

    mystruct tempSchuh;

    vector<mystruct> schuhliste;

    tempSchuh.brand = "Nike";
    tempSchuh.size = 48;
    tempSchuh.price = 99.99;
    schuhliste.push_back(tempSchuh);

    tempSchuh.brand = "Adidas";
    tempSchuh.size = 46;
    tempSchuh.price = 129.99;
    schuhliste.push_back(tempSchuh);

    // vector<mystruct> alleSchuhe;
    // alleSchuhe.push_back({"Adidas", 49, 129.99});
    cout << schuhliste[0].brand << endl;
    return 0;
}