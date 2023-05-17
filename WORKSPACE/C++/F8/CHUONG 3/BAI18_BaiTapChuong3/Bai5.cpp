#include "iostream"
using namespace std;
int main(){
    int n;
    do
    {
        cout << "Nhap so nguyen duong n (n>0) : ";
        cin >> n; 
    } while (n<=0);
    int tong = 0;
    int soTemp = n ;
    while (soTemp!=0)
    {
        tong += soTemp % 10;
        soTemp /= 10;
    }
    
    cout << "Tong cac chu so cua so " << n << " la : " << tong;

    return 0;
}