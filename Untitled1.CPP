#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand( time( NULL ) );

 int liczba =rand() % 100 + 1;

 cout << "Wylosowanie pierwsze: " << liczba <<endl;

}


