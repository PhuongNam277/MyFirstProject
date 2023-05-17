#include "iostream"
using namespace std;
int main(){
    int x[100][100],m, n;
    cout << "Nhap m va n: ";
    cin >> m >> n;
    cout << "Nhap cac phan tu: \n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> x[i][j];
        }
        
    }
    cout << "Ma tran vua nhap: \n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << x[i][j] << " ";
        }
        cout << "\n";
        
    }
    return 0;
}