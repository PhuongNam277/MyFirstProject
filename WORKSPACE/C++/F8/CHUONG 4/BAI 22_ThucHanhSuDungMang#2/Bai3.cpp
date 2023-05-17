#include "iostream"
using namespace std;
int main(){
    int x[100][100];
    int m,n;
    do
    {
        cout << "Nhap m (0 < m < 11) : ";
        cin >> m; 
    } while (m<0&&m>10);

    do
    {
        cout << "Nhap n (0 < n < 11) : ";
        cin >> n; 
    } while (n<0&&n>10);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "x[" << i << "]" << "[" << j << "] = ";
            cin >> x[i][j];
        }
    }
    cout << "Mang vua nhap: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m ; j++)
        {
            cout << x[i][j] << " ";
        }
        cout << "\n";
    }
    
    for (int i = 0; i < n; i++)
    {
        int max = x[i][0];
        for (int j = 0; j < m; j++)
        {
            if (x[i][j] > max)
            {
                max = x[i][j];
            }
            
        }
        cout << "\nMax hang " << i << " = " << max;
    }
    
    return 0;
}