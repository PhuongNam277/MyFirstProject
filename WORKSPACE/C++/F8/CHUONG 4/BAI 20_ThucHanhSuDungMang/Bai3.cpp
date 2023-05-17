#include "iostream"
using namespace std;
int main(){
    int a[20], n, x, y;

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
        cout << "Nhap x (0 <= x <= " << n-1 << ") : ";
        cin >> x;

    } while (x<0&&x>9);

        cout << "Nhap y : ";
        cin >> y;
   
    a[x] = y;

    cout << "Mang sau khi thay gia tri " << y << " vao vi tri thu " << x << " cua mang: ";

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    
    return 0;

}