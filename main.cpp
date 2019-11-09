#include <iostream>

using namespace std;

void header(string message)
{
    cout<< "===============\n" ;
    cout<< message      <<"\n";
    cout<< "===============\n" ;
    cout<<endl;
}
void Celcius()
{
    int valCelcius;
    header("   C-Celcius  ");

    cout << "Masukkan Derajat Suhu Celcius -> ";
    cin>> valCelcius;
    double CR = valCelcius * 0.8;
    cout << "Besar suhu C -> R = " <<CR <<"\n";
    double CK = valCelcius * 1.8 + 32;
    cout << "Besar suhu C -> K = " << CK <<"\n";
    double CF = valCelcius + 273.15;
    cout << "Besar suhu C -> F = " <<CF <<"\n";
}

void Fahrenheit()
{
    int valFahrenheit;
    header("  F-Fahrenheit ");

    cout << "Masukkan Derajat Suhu Fahrenheit -> ";
    cin>> valFahrenheit;
    double FC = (valFahrenheit-32)/ 1.8;
    cout << "Besar suhu F -> C = " <<FC <<"\n";
    double FR = (valFahrenheit-32)/2.25;
    cout << "Besar suhu F -> R = " << FR <<"\n";
    double FK = (valFahrenheit + 459.67)/1.8;
    cout << "Besar suhu F -> K = " <<FK <<"\n";

}

void Reamur ()
{
    int valReamur;
    header("    R-Reamur   ");

    cout << "Masukkan Derajat Suhu Reamur-> ";
    cin>> valReamur;
    double RC = valReamur*1.25;
    cout << "Besar suhu R -> C = " <<RC <<"\n";
    double RF = valReamur * 2.25 + 32 ;
    cout << "Besar suhu R -> F = " << RF <<"\n";
    double RK = valReamur * 1.25+273.15 ;
    cout << "Besar suhu R -> K = sd vcdx" <<RK <<"\n";
}

void Kelvin()
{
    int valKelvin;
    header("    K-Kelvin   ");

    cout << "Masukkan Derajat Suhu Reamur-> ";
    cin>> valKelvin;
    double KC = valKelvin-273.15;
    cout << "Besar suhu R -> C = " <<KC <<"\n";
    double KF = valKelvin * 1.8 - 459.67 ;
    cout << "Besar suhu R -> F = " << KF <<"\n";
    double KR = (valKelvin-273.15)*0.8;
    cout << "Besar suhu R -> K = " <<KR <<"\n";
}

int main()
{
    int pilih;
    char YN;
    do
    {
        system("cls");
        header(" KONVERSI SUHU ");

        cout << "1. C-Celcius \n";
        cout << "2. R-Reamur \n";
        cout << "3. F-Fahrenheit \n";
        cout << "4. K-Kelvin \n";
        cout << "5. Keluar \n";
        cout << "Silahkan Pilih Suhu -> ";
        cin>> pilih;

        switch (pilih)
        {
        case 1 :
            Celcius();
            break;
        case 2:
            Reamur();
            break;
        case 3:
            Fahrenheit();
            break;
        case 4 :
            Kelvin();
            break;
        case 5:
            exit(0);
            break;
        }
        cout<<endl;
        cout << "Apakah Ingin Di Ulang atau kembali Y/N : ";
        cin>>YN;
        cout<<endl;

    }
    while(YN=='y'||YN=='Y');
}
