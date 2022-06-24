#include <iostream>
using namespace std;
int main()
{
    int i,j;
    for(i = 1; i < 10; i++){
        for(j = 1; j < 10; j++){
            cout << j << "*" << i << "=" << i*j;
            if(i*j > 9){
                cout << "  ";
            }else{
                cout << "   ";
            }
        }
        cout << endl;
    }
    return 0;
}
