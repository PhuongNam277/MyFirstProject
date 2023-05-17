#include "iostream"
using namespace std;
int main(){
    int a[20], n, x;

    do
    {
        cout << "Nhap n (toi da 10 phan tu) : ";
        cin >> n;
    } while (n>10);
    
    cout << "Nhap cac phan tu: ";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    

    do
    {
        cout << "Nhap x: ";
        cin >> x;
    } while (x>=10&&x<0);
    
    for (int i = x; i < n-1; i++)
    {
        a[i] = a[i+1];
        
    }
    n--;

    cout << "Mang sau khi xoa phan tu thu " << x << " : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    
    return 0;



}