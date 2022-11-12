#include <iostream>

int main()
{
    int a, b, dzialanie;
    std::cout << "KALKULATOR" << std::endl;
    std::cout << "Podaj liczbe calkowita a:";
    std::cin >> a;

    std::cout << "Podaj liczbe calkowita b:";
    std::cin >> b;

    std::cout << "Wybierz dzialanie: [1] Dodawanie, [2] Odejmowanie, [3] Mnozenie, [4] Dzielenie:" << std::endl;
    std::cin >> dzialanie;

    switch( dzialanie )
    {
    case 1:
        std::cout << "a+b = " << a + b;
        break;
    case 2:
        std::cout << "a-b = " << a - b;
        break;
    case 3:
        std::cout << "a*b = " << a * b;
        break;
    case 4:
        if( b == 0 )
        {
            std::cout << "Nie mozna podzielic przez 0";
            return( 0 );
        }
        std::cout << "a%b = " << a % b;
        break;
    }
    return 0;
}
