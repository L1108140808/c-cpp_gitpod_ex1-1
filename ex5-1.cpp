#include <iostream>
using namespace std;
int main()
{
    int a[6] = {8,3,6,10,45,12};
    int i,n;
    
    n = sizeof(a)/sizeof(int);
    for(i=0;i < n;i++){
        printf("a[%d] = %d \n",i,a[i]);
    }
        cout<<"Hello World";

    return 0;
}
