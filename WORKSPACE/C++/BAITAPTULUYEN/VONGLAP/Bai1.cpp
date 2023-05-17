#include "iostream"
using namespace std;
int main(){
    int n;
    cout << "n = ";
    cin >> n;
    for (int i = 1; i <= 15; i++)
    {
        if (i%n==0)
        {
            cout << i << " ";
        }
        
    }
    return 0;
}