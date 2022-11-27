#include<iostream>
#include<stdlib.h>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<fstream>
#include<string>
#include "Header.h"

using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::ofstream;
int chc, chcb, chcd,chce;
int main()
{


    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
    cout << ":::::::::::::::::::::::: Escuela :::::::::::::::::::::::::::::" << endl;
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
    do {
        cout << "\n ::::::::::::::::Menu::::::::::::::::  \n";
        cout << "\n 1. Capturar datos.";
        cout << "\n 2. Mostrar datos.";
        cout << "\n 3. Salir.";
        cout << "\n Ingrese el numero de la opcion deseada ";
        cin >> chc;
        cin.ignore(10, '\n');

        switch (chc)
        {
        case 1: //Captura de datos
        {
            do {
                cout << "\n ::::::::::::::::Menu::::::::::::::::  \n";
                cout << "\n 1. Capturar Alumno.";
                cout << "\n 2. Capturar Materia.";
                cout << "\n 3. Capturar Profesor";
                cout << "\n Ingrese el numero de la opcion deseada ";
                cin >> chcb;

                switch (chcb) {
                case 1:
                {
                    Alumnos obj1;
                    obj1.getdatos();

                    break;

                }
                case 2:
                {
                    Materia obj1;
                    obj1.getdatos();


                    break;

                }
                case 3:
                {
                    Profesores obj1;
                    obj1.getdatos();

                    break;
                }
                }

                cout << "\n 3. Desea capturar otro tipo de dato?  1.Si o 2.no \n " << endl;
                cin.clear();
                cin.ignore(10, '\n');
                cin >> chcd;
                system("CLS");

            } while (chcd != 2);
            break;
        case 2: //Busqueda de datos
            do {
                cout << "\n ::::::::::::::::Menu::::::::::::::::  \n";
                cout << "\n 1. Buscar Alumno.";
                cout << "\n 2. Buscar Materia.";
                cout << "\n 3. Buscar Profesor";
                cout << "\n Ingrese el numero de la opcion deseada ";
                cin >> chce;

                switch (chce) {
                case 1:
                {

                    imprimirDatosAlumn();

                    break;

                }
                case 2:
                {

                    imprimirDatosMatr();

                    break;

                }
                case 3:
                {

                    imprimirDatosProf();
                    break;
                }
                }

                cout << "\n 3. Desea buscar otro tipo de dato?  1.Si o 2.no \n " << endl;
                cin.clear();
                cin.ignore(10, '\n');
                cin >> chcd;
                system("CLS");

            } while (chcd != 2);
            break;
        case 3:
            break;
        }
        }

    }while (chc != 3);
} 
