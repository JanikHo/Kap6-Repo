#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> myvector(5);

    myvector[0] = 10;
    cout << "Enter Value 2" << endl;
    cin >> myvector[1];
    
    for (int i = 0; i < myvector.size()+1; i++)
    {
        cout << myvector[i] << endl;
       // cout << myvector.at(i) << endl;
    }

    cout << "Size: " << myvector.size() << endl;
    return 0;
}