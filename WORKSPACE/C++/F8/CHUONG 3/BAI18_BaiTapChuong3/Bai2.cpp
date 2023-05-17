#include "iostream"
using namespace std;
int main(){
    int n;
    do
    {
        cout << "Nhap n (n<=100) : ";
        cin >> n;
    } while (n>100);
    int tong = 0;
    for (int i = 1; i <= n ;i++)
    {
        if (i%2!=0)
        {
            tong+=i;
        }
        
    }
    cout << "Tong cac so tu nhien le tu 1 den n = " << tong;
    return 0;
}