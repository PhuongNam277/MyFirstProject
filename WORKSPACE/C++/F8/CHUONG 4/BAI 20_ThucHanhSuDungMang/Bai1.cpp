#include "iostream"
using namespace std;
int main(){
    int array[20], x, n;
    do
    {
        cout << "Nhap n (toi da 10) : ";
        cin >> n;
    } while (n>10);
    
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    cout << "Nhap x: ";
    cin >> x;

    array[n] = x;
    n++;
    cout << "Mang sau khi them: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    
    return 0;
    
}