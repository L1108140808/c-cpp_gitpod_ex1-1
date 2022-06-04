#include <iostream>

using namespace std;
int y;

int main(){
    cin >> y;
    if (y % 4 == 0){
        if (y % 100 !=0){
            cout << "闰年";
        }
        else{
            cout << "平年";
        }
    }
    else{
        cout << "平年";
    }

    return 0;
}
