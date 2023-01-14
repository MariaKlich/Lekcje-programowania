#include <iostream>

using namespace std;

    bool czyPodzielnaPrzez3Lub5(int x)
    {
        if(x%3==0 || x%5==0)
            return true;

    else
        return false;
    }
int main()
    {
        int suma=0;

for(int i=3;i<1000;i++)
{
    if(czyPodzielnaPrzez3Lub5(i)==true)
    {
        cout<<i<<endl;
        suma=suma+i;
    }
}
cout<<suma;
system("pause");
return 0;

}
