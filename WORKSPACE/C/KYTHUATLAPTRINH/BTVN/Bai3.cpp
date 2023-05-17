#include "iostream"
using namespace std;
int main(){
    float tu[11], mau[11];
    for (int i = 0; i < 10; i++)
    {
        cout << "Nhap tu so phan so thu " << i+1 << " : ";
        cin >> tu[i];
        cout << "Nhap mau so phan so thu " << i+1 << " : ";
        cin >> mau[i];
    }
    cout << "Phan so theo thu tu tang dan: ";

    for (int i = 0; i < 9; i++)
    {
        for (int j = i+1; j <10; j++)
        {
            if ((tu[j]/mau[j])<(tu[i]/mau[i]))
            {
                int tempTu = tu[i];
                tu[i] = tu[j];
                tu[j] = tempTu;
                int tempMau = mau[i];
                mau[i] = mau[j];
                mau[j] = tempMau;
            }
            
        }
        
    }
    
    for (int i = 0; i < 11; i++)
    {
        cout << tu[i] << "/" << mau[i] << "  ";
    }
    return 0;

}