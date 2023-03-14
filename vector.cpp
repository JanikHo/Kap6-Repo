#include <iostream>
#include <vector>

using namespace std;

int main(){
    // vector<int> myvector(5);

    // myvector[0] = 10;
    // cout << "Enter Value 2" << endl;
    // cin >> myvector[1];
    
    // for (int i = 0; i < myvector.size()+1; i++)
    // {
    //     cout << myvector[i] << endl;
    //    // cout << myvector.at(i) << endl;
    // }

    // cout << "Size: " << myvector.size() << endl;

    vector<double> getrunken;
    double now;
    do{
        cout << "Wie viel hast du getrunken?: " << endl;
        cin >> now;
        if(now != -1){
            getrunken.push_back(now);
        }
    }while (now != -1);

    double gesamt = 0.0;
    for(double &val : getrunken){
        gesamt += val;
    }

    cout << "Heute getrunken: " << gesamt << endl;
    return 0;
}