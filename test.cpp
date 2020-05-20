#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int dzialanie;
float delta, pierdelta, x0, x1, x2;
float a,b,c,p,q;

int main()

{

cout << "##### Kalkulator funkcji kwadratowej by elvis #####" << endl << endl;
cout << "Wybierz typ rownania wpisujac jego numer." << endl << endl;
cout << "1. ax^2 + bx + c" << endl << endl;
cout << "2. ax^2 + bx + c (gdzie c = 0) czyli postac to ax^2 + bx" << endl << endl;
cout << "3. a (x - p)^2 + q" << endl << endl;
cout << "4. a (x + x1)(x - x2)" << endl << endl;
cin >> dzialanie; cout << endl;

if (dzialanie == 1)
{
    cout << "Podaj wartosc a: "; cin >> a;
    cout << "Podaj wartosc b: "; cin >> b;
    cout << "Podaj wartosc c: "; cin >> c;
    system("cls");
    delta = pow(b, 2) - (4*a*c);
    pierdelta = sqrt(delta);
    p = (-b)/(2*a);
    q = (-delta)/(4*a); 



        if (delta > 0)
            {
                x1 = (-b-pierdelta)/(2*a);
                x2 = (-b+pierdelta)/(2*a);
            }
        if (delta == 0)
            {
                x0 = -b/(2*a);
            }

    
    cout << "Gdy zobaczysz gdzies ujemne zero, zapisz je normalnie jako 0, to blad programu." << endl << endl;
    cout << "Jesli pierwiastek z delty to (nan) znaczy to, ze pierwiastek jest nie wyciagalny." << endl;
    cout << "Nalezy wtedy po prostu wstawic delte pod pierwiastek." << endl << endl;

        if (b >= 0 && c >= 0)
            {
            cout << "Twoje rownanie to: " << a  << "x^2 + " << b << "x + " << c << endl << endl;
            }
        if (b < 0 && c >= 0)
            {
            cout << "Twoje rownanie to: " << a  << "x^2 - " << b*(-1) << "x + " << c << endl << endl;
            }
        if (b >= 0 && c < 0)
            {
            cout << "Twoje rownanie to: " << a  << "x^2 + " << b << "x - " << c*(-1) << endl << endl;
            }
        if (b < 0 && c < 0)
            {
            cout << "Twoje rownanie to: " << a  << "x^2 - " << b*(-1) << "x - " << c*(-1) << endl << endl;
            }



        if (p >= 0 && q >= 0)
            {
            cout << "Postac kanoniczna: " << a << "(x - " << p << ") + " << q << endl << endl;
            }
        if (p < 0 && q >= 0)
            {
            cout << "Postac kanoniczna: " << a << "(x + " << p*(-1) << ") + " << q << endl << endl;
            }
        if (p >= 0 && q < 0)
            {
            cout << "Postac kanoniczna: " << a << "(x - " << p << ") - " << q*(-1) << endl << endl;
            }
        if (p < 0 && q < 0)
            {
            cout << "Postac kanoniczna: " << a << "(x + " << p*(-1) << ") - " << q*(-1) << endl << endl;
            }



        if (delta > 0)
            {
                if (x1 >= 0 && x2 >= 0)
                {
                cout << "Postac iloczynowa: " << a << "(x - " << x1 << ")(x - " << x2 << ")" << endl << endl;
                }
                if (x1 < 0 && x2 >= 0)
                {
                cout << "Postac iloczynowa: " << a << "(x + " << x1*(-1) << ")(x - " << x2 << ")" << endl << endl;
                }
                if (x1 >= 0 && x2 < 0)
                {
                cout << "Postac iloczynowa: " << a << "(x - " << x1 << ")(x + " << x2*(-1) << ")" << endl << endl;
                }
                if (x1 < 0 && x2 < 0)
                {
                cout << "Postac iloczynowa: " << a << "(x + " << x1*(-1) << ")(x + " << x2*(-1) << ")" << endl << endl;
                }           
            }



        if (delta == 0)
            {
                if (x0 >= 0)
                {
                cout << "Postac iloczynowa: " << a << "(x - " << x0 << ")^2" << endl << endl;
                }
                if (x0 < 0)
                {
                cout << "Postac iloczynowa: " << a << "(x + " << x0*(-1) << ")^2" << endl << endl;
                }             
            }




    cout << "Delta: " << delta << endl << endl;
    cout << "Pierwiastek z delty: " << pierdelta << endl << endl;
    cout << "P: " << p << endl << endl;
    cout << "Q: " << q << endl << endl;
    cout << "Wierzcholek: (" << p << " , " << q << ")" << endl << endl;



        if (a > 0)
            {
                cout << "Zbior wartosci: <" << q << " , nieskonczonosc)" << endl << endl;
            }
        if (a < 0)
            {
                cout << "Zbior wartosci: ( -nieskonczonosc , )" << q << endl << endl;
            }



    if (delta > 0)
            {
                cout << "Miejsca zerowe:" << endl;
                cout << "x1: " << x1 << endl;
                cout << "x2: " << x2 << endl << endl;
                cout << "Wykres: ";
                    if (a > 0)
                        {
                            cout << "ramiona paraboli skierowane do gory." << endl;
                        }
                    if (a < 0)
                        {
                            cout << "ramiona paraboli skierowane do dolu." << endl;
                        }
            }



        if (delta == 0)
            {
                cout << "Miejsca zerowe: " << endl << endl;
                cout << "x0: " << x0 << endl << endl;
                cout << "Wykres: ";
                    if (a > 0)
                        {
                            cout << "ramiona paraboli skierowane do gory." << endl;
                        }
                    if (a < 0)
                        {
                            cout << "ramiona paraboli skierowane do dolu." << endl;
                        }
            }



        if (delta < 0)
            {
                cout << "Miejsca zerowe: brak" << endl << endl;
                cout << "Wykres: ";
                    if (a > 0)
                        {
                            cout << "ramiona paraboli skierowane do gory." << endl;
                        }
                    if (a < 0)
                        {
                            cout << "ramiona paraboli skierowane do dolu." << endl;
                        }
            } 
}

if (dzialanie == 2)
{
    cout << "Podaj wartosc a: "; cin >> a;
    cout << "Podaj wartosc b: "; cin >> b;
    system("cls");
    delta = pow(b, 2) - (4*a);
    pierdelta = sqrt(delta);
    p = (-b)/(2*a);
    q = (-delta)/(4*a); 



        if (delta > 0)
            {
                x1 = (-b-pierdelta)/(2*a);
                x2 = (-b+pierdelta)/(2*a);
            }
        if (delta == 0)
            {
                x0 = -b/(2*a);
            }

    
    cout << "Gdy zobaczysz gdzies ujemne zero, zapisz je normalnie jako 0, to blad programu." << endl << endl;
    cout << "Jesli pierwiastek z delty to (nan) znaczy to, ze pierwiastek jest nie wyciagalny." << endl;
    cout << "Nalezy wtedy po prostu wstawic delte pod pierwiastek." << endl << endl;

        if (b >= 0)
            {
            cout << "Twoje rownanie to: " << a  << "x^2 + " << b << endl << endl;
            }
        if (b < 0)
            {
            cout << "Twoje rownanie to: " << a  << "x^2 - " << b*(-1) << endl << endl;
            }


        if (p >= 0 && q >= 0)
            {
            cout << "Postac kanoniczna: " << a << "(x - " << p << ") + " << q << endl << endl;
            }
        if (p < 0 && q >= 0)
            {
            cout << "Postac kanoniczna: " << a << "(x + " << p*(-1) << ") + " << q << endl << endl;
            }
        if (p >= 0 && q < 0)
            {
            cout << "Postac kanoniczna: " << a << "(x - " << p << ") - " << q*(-1) << endl << endl;
            }
        if (p < 0 && q < 0)
            {
            cout << "Postac kanoniczna: " << a << "(x + " << p*(-1) << ") - " << q*(-1) << endl << endl;
            }



        if (delta > 0)
            {
                if (x1 >= 0 && x2 >= 0)
                {
                cout << "Postac iloczynowa: " << a << "(x - " << x1 << ")(x - " << x2 << ")" << endl << endl;
                }
                if (x1 < 0 && x2 >= 0)
                {
                cout << "Postac iloczynowa: " << a << "(x + " << x1*(-1) << ")(x - " << x2 << ")" << endl << endl;
                }
                if (x1 >= 0 && x2 < 0)
                {
                cout << "Postac iloczynowa: " << a << "(x - " << x1 << ")(x + " << x2*(-1) << ")" << endl << endl;
                }
                if (x1 < 0 && x2 < 0)
                {
                cout << "Postac iloczynowa: " << a << "(x + " << x1*(-1) << ")(x + " << x2*(-1) << ")" << endl << endl;
                }           
            }



        if (delta == 0)
            {
                if (x0 >= 0)
                {
                cout << "Postac iloczynowa: " << a << "(x - " << x0 << ")^2" << endl << endl;
                }
                if (x0 < 0)
                {
                cout << "Postac iloczynowa: " << a << "(x + " << x0*(-1) << ")^2" << endl << endl;
                }             
            }




    cout << "Delta: " << delta << endl << endl;
    cout << "Pierwiastek z delty: " << pierdelta << endl << endl;
    cout << "P: " << p << endl << endl;
    cout << "Q: " << q << endl << endl;
    cout << "Wierzcholek: (" << p << " , " << q << ")" << endl << endl;



        if (a > 0)
            {
                cout << "Zbior wartosci: <" << q << " , nieskonczonosc)" << endl << endl;
            }
        if (a < 0)
            {
                cout << "Zbior wartosci: ( -nieskonczonosc , )" << q << endl << endl;
            }



    if (delta > 0)
            {
                cout << "Miejsca zerowe:" << endl;
                cout << "x1: " << x1 << endl;
                cout << "x2: " << x2 << endl << endl;
                cout << "Wykres: ";
                    if (a > 0)
                        {
                            cout << "ramiona paraboli skierowane do gory." << endl;
                        }
                    if (a < 0)
                        {
                            cout << "ramiona paraboli skierowane do dolu." << endl;
                        }
            }



        if (delta == 0)
            {
                cout << "Miejsca zerowe: " << endl << endl;
                cout << "x0: " << x0 << endl << endl;
                cout << "Wykres: ";
                    if (a > 0)
                        {
                            cout << "ramiona paraboli skierowane do gory." << endl;
                        }
                    if (a < 0)
                        {
                            cout << "ramiona paraboli skierowane do dolu." << endl;
                        }
            }



        if (delta < 0)
            {
                cout << "Miejsca zerowe: brak" << endl << endl;
                cout << "Wykres: ";
                    if (a > 0)
                        {
                            cout << "ramiona paraboli skierowane do gory." << endl;
                        }
                    if (a < 0)
                        {
                            cout << "ramiona paraboli skierowane do dolu." << endl;
                        }
            } 
}

if (dzialanie == 3)
{
    cout << "Podaj wartosc a: "; cin >> a;
    cout << "Podaj wartosc p: "; cin >> p;
    cout << "Podaj wartosc q: "; cin >> q;
    system("cls");
    delta = pow(b, 2) - (4*a);
    pierdelta = sqrt(delta);

        cout << a << "x^2 + " << a*2*(-p) << "x" << " + " << a*pow(p,2)+q;


        if (delta > 0)
            {
                x1 = (-b-pierdelta)/(2*a);
                x2 = (-b+pierdelta)/(2*a);
            }
        if (delta == 0)
            {
                x0 = -b/(2*a);
            }

    
    cout << "Gdy zobaczysz gdzies ujemne zero, zapisz je normalnie jako 0, to blad programu." << endl << endl;
    cout << "Jesli pierwiastek z delty to (nan) znaczy to, ze pierwiastek jest nie wyciagalny." << endl;
    cout << "Nalezy wtedy po prostu wstawic delte pod pierwiastek." << endl << endl;
}

cout << endl;
system ("pause");

return 0;

}