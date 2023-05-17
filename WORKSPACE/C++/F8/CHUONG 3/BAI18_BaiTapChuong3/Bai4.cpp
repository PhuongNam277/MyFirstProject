#include "iostream"
#include "math.h"
using namespace std;
int main(){
    int n;
    cout << "Nhap n : ";
    cin >> n;
    if (n==1)
    {
        cout << "So " << n << " khong phai la so nguyen to";
    }
    
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if(n%i==0){
            dem++;
        }
    }
    if (dem>2)
    {
        cout << "So " << n << " khong phai la so nguyen to";
    }
    else if (dem==2&&n>1)
    {
        cout << "So " << n << " la so nguyen to";
    }
    
    return 0;

}