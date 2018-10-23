#include <iostream>

using namespace std;

int main()
{
    int i=0;
    int max=0;
    int a,x;

    cout << "masukkan jumlah bilangan ke:";
    cin >>a;

    for (i;i<a;i++)
    {
    cout << "masukkan jumlah bilangan ke:" <<i+1<<":";
    cin >>x;

    if (x>max)
        max=x;
    }
    cout <<"bilangan terbesar adalah:"<<max<<endl;
}
