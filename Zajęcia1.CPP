#include <iostream>
using namespace std;
int main()
{
    string login="asia";
    string password="123";
    string l;
    string h;
    cout<<"Podaj login: ";
    cin>>login;
    cout<<"Podaj password: ";
    cin>>password;
    cout<<"zaloguj sie, podaj login ";
    cin>>l;
    cout<<"Podaj haslo: ";
    cin>>h;
    if(login==l && password==h){
        cout<<"zalogowano";
    }
       else{
           if(login!=l && password==h)
        cout<<"niezalogowano, zly login";
            if(password!=h && login==l)
        cout<<"niezalogowano, zle haslo";
       }

    }




