#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand( time( NULL ) );
 int a;
 cin>>a;
 int b;
 cin>>b;
int liczba =rand()%(b-a+1)+a;
 cout << "Wylosowanie pierwsze: " << liczba  <<endl;

}

