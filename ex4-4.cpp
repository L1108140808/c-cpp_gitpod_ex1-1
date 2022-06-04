using namespace std;
int r = 0;

int main(){
    cin >> r;
    if (r >= 0 ){
        cout <<"圆面积:"<<r*r*3.14;
        cout <<"圆周:"<<r*2*3.14;
    }
    else{
        cout << "错误";
    }  

    return 0;
}
