#include <iostream>

using namespace std;

int main()
{
            float wzrost, masa, BMI;
     cout<<"Podaj wzrost(w cm): ";
        cin>>wzrost;
     cout<<endl;

     cout<<"Podaj mase(w kilogramach): ";
        cin>>masa;
     cout<<endl;

                    BMI = masa / (wzrost/100 * wzrost/100);
                    cout<<"Twoje BMI: "<<BMI<<endl;

        if(BMI<16)
        cout<<"wyglodzenie"<<endl;
    else if(BMI>=16 && BMI<16.99 )
        cout<<"wychudzenie"<<endl;
    else if(BMI>=17 && BMI<18.49)
        cout<<"niedowaga"<<endl;
    else if(BMI>=18.5 && BMI<24.99 )
        cout<<"waga prawidlowa"<<endl;
    else if(BMI>=25.0 && BMI<29.9 )
        cout<<"nadwaga"<<endl;
    else if(BMI>=30.0 && BMI<34.99)
        cout<<" I stopieñ oty³oœci"<<endl;
    else if(BMI>=35.0 && BMI<39.99)
        cout<<" II stopien otylosci"<<endl;
    else if(BMI>40)
        cout<<"otylosc skrajna"<<endl;

}
return 0;
