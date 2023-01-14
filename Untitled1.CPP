#include <iostream>

using namespace std;

int main()
{
    int tab[10];
   for(int i=0; i<10; i++)
   {
       cin >> tab[i];
   }
   for(int i=0; i<10; i++)
   {
       if(tab[i]%3==0 && tab[i]%5==0)
           cout << tab[i] << endl; // program wypisuje liczby podzielne jednoczeœnie
                                          // przez 3 i przez 5
   }
  system("pause");
  return 0;
}


