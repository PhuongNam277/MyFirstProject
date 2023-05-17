#include "iostream"
#include "cstring"
using namespace std;
struct SINHVIEN
{
    int tuoi; string hoten;
};

int main(){
    SINHVIEN sv1;
    cout << "Nhap ten: ";
    getline(cin, sv1.hoten);
    cout << "Nhap tuoi: ";
    cin >> sv1.tuoi;
    cout << "\n\nDanh sach vua nhap: \n "<< sv1.hoten << "\n" << sv1.tuoi;
    return 0;
}