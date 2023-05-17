#include "iomanip"
#include "iostream"
using namespace std;
int main(){
    float n;
    cout << "Nhap n" ;
    cin >> n;


    cout << fixed << setprecision(3) << n;

    return 0;
}