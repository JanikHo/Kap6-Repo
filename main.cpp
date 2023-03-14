#include <iostream>

using namespace std;


int main(){
    int myarray[3] = {1, 2, 3};

    cout << myarray << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << myarray[i] << endl;
    }

    cout << "Array 2: \n";
     int myarray2[5] = {1, 2};

    // modify array
    myarray2[2] = 10;
    // Klassische Ausdrucksweise
    for (int i = 0; i < sizeof(myarray2)/sizeof(int); i++)
    {
        cout << myarray2[i] << endl;
    }


    // range-basierte for-Schleife
    for (int &val : myarray2)
    {
        cout << val << endl;
    }

   
    return 0;
}