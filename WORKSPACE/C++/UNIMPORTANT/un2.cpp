#include "iostream"
using namespace std;
int main(){
    int n;
    do
    {
        cout << "Nhap n (n>=2): ";
        cin >> n;
    } while (n<2);
    int c;
    if (n==2)
    {
        cout << "So lon nhat khong vuot qua " << n << " chia het cho 2 la: " << n;
    }else{
        for (int i = n-1; i >= 0; i--)
        {
            if (i%2==0)
            {
                c = i;
                break;
            }
            
        }
        cout << "So lon nhat khong vuot qua " << n << " chia het cho 2 la: " << c;
    }
    return 0;
}