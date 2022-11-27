#include<iostream>
#include<fstream>
#include<ostream>
using namespace std;
char line[500];
char search[20];
int i;
ofstream infile;

//CLASE DATOSGENERALES//---------------------------------------------------------------------------------------------------------------------------------

class DatosGenerales {
public:
	int Id;
	string nombre_apellido,nombre, apellido;
	int edad;
	string sexo;

	void imprimirDatos();
	DatosGenerales();
	~DatosGenerales();
};
DatosGenerales::DatosGenerales() {

	cout << "Ingresar Id:";
	cin >> Id;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Escriba un numero: ";
		cin >> Id;
	}
	cout << "Ingresar nombre:";
	cin >> nombre;
	while (!isalpha(nombre[0])) {
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Solo Letras,reingrese el dato: " << endl;
		cin >> nombre;
	}
	cout << "Ingresarapellido:";
	cin >> apellido;
	while (!isalpha(apellido[0])) {
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Solo Letras, reingrese el dato: " << endl;
		cin >> apellido;
	}
	nombre_apellido = nombre + " " + apellido;
	cout << "Sexo:";
	cin >> sexo;
	while (!isalpha(sexo[0])) {
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Solo Letras,reingrese el dato: " << endl;
		cin >> sexo;
	}
	cout << "Edad:";
	cin >> edad;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Escriba un numero: ";
		cin >> edad;
	}

}
void DatosGenerales::imprimirDatos() {
	cout << "Id:";
	int Id;
	cout << "Nombre Completo:";
	string nombre_apellido;
	cout << "Sexo:";
	string sexo;
	cout << "Edad:";
	cin >> edad;

}
DatosGenerales::~DatosGenerales() {

}
 


//Alumnos//___________________________________________________________________________________________________________________________________________________________
class Alumnos: public DatosGenerales{
public:

	long ctrlescolar;
	int semestre;
	int materias;

	void getdatos();
	void imprimirDatos();
	Alumnos();
	~Alumnos();

};
Alumnos::Alumnos() {
	
	
	cout << "Ingresar número de control escolar:";
	cin >> ctrlescolar;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Escriba un numero: ";
		cin >> ctrlescolar;
	}
	cout << "Ingresar semestre:";
	cin >> semestre;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Escriba un numero: ";
		cin >> semestre;
	}
	cout << "Ingresar materias:";
	cin >> materias;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Escriba un numero: ";
		cin >> materias;
	}
	
}
void Alumnos::getdatos() {
	ofstream infile;
	infile.open("Alumnos.txt", ios_base::app);
	infile << Id << "," << nombre_apellido << "," << sexo << "," << edad << "," << ctrlescolar << "," << semestre << "," << materias << endl;
	infile.close();
}
void Alumnos::imprimirDatos() {

   
}

Alumnos::~Alumnos() {

}

////Profesores/___________________________________________________________________________________________________________________________________________________________
class Profesores : public DatosGenerales {
public:

	string tituprofe;
	int cedula;
	string materia;


	void getdatos();
	void imprimirDatos();
	Profesores();
	~Profesores();

};
Profesores::Profesores() {
	
	cout << "Ingresar titulo o profesion del profesor:";
	cin >> tituprofe;
	while (!isalpha(nombre[0])) {
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Solo Letras,reingrese el dato: " << endl;
		cin >> tituprofe;
	}
	cout << "Ingresar número de cédula profesional:";
	cin >> cedula;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Escriba un numero: ";
		cin >> cedula;
	}
	cout << "Ingresar materia:";
	cin >> materia;
	while (!isalpha(materia[0])) {
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Solo Letras,reingrese el dato: " << endl;
		cin >> materia;
	}

}
void Profesores::getdatos() {
	ofstream infile;
	infile.open("Profesores.txt", ios_base::app);
	infile << Id << "," << nombre_apellido << "," << sexo << "," << edad << "," << tituprofe << "," << cedula << "," << materia << endl;
	infile.close();
}
void Profesores::imprimirDatos() {
	cout << "Id del profesor:";
	cout << Id;
	cout << "Titulo o profesion del profesor:";
	cout << tituprofe;
	cout << "Número de cedula del profesor:";
	cout << cedula;
	cout << "Materia que imparte:";
	cout << materia;

}
Profesores::~Profesores() {

}

//MATERIA//---------------------------------------------------------------------------------------------------------------------------------------------
class Materia {
public:
	string materia;
	string profesor;
	int creditos;
	int IdMateria;

	void getdatos();
	void imprimirDatos();
	Materia();
	~Materia();
};
Materia::Materia() {
	cout << "Ingresar Id de la materia:";
	cin >> IdMateria;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Escriba un numero: ";
		cin >> IdMateria;
	}
	cout << "Ingresar materia:";
	cin >> materia;
	while (!isalpha(materia[0])) {
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Solo Letras,reingrese el dato: " << endl;
		cin >> materia;
	}
	cout << "Ingresar creditos:";
	cin >> creditos;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Escriba un numero: ";
		cin >> creditos;
	}
	cout << "Ingresar nombre del profesor:";
	cin >> profesor;
	while (!isalpha(profesor[0])) {
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Solo Letras,reingrese el dato: " << endl;
		cin >> profesor;
	}

}
void Materia::getdatos() {
	ofstream infile;
	infile.open("Materia.txt", ios_base::app);
	infile << IdMateria << "," << materia << "," << creditos << "," << profesor << endl;
	infile.close();
}
void Materia::imprimirDatos() {
	cout << "Id de la materia:";
	cin >> IdMateria;
	cout << "Materia:";
	string materia;
	cout << "Numero de creditos:";
	cin >> creditos;
	cout << "Nombre del profesor:";
	string profesor;

}
Materia::~Materia() {

}

void imprimirDatosAlumn() {
	

	ifstream infile;
	infile.open("Alumnos.txt");
	cout << "\n 2. Escribe el ID de alumno" << endl;;
	cin >> search;
	if (infile.is_open()) {
		while (!infile.eof())
		{
			infile.getline(line, 500, ','); //leer linea
			for (i = 0; line[i] == search[i]; i++)
			{
				if (search[i] == '\0') // Buscar info
				{
					// imprimir info
					cout << "Datos:" << endl;
					cout << "ID:" << " " << line << endl;
					infile.getline(line, 500, ',');
					cout << "Nombre del alumno: " << " " << line << endl;
					infile.getline(line, 500, ',');
					cout << "Sexo: " << " " << line << endl;
					infile.getline(line, 500, ',');
					cout << "Edad: " << line << endl;
					infile.getline(line, 500, ',');
					cout << "No. De Control escolar: " << line << endl;
					infile.getline(line, 500, ',');
					cout << "semestre: " << line << endl;
					infile.getline(line, 500, '\n');
					cout << "No. de materias " << " " << line << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					break;
				}
				
				
				}
			}
			// No encontro
			for (int j = 0; j < 3; j++) infile.getline(line, 500, ',');
			infile.getline(line, 500, '\n'); 
			
			
		}
		
	else
	{
		cout << "Id no existe" << endl;
	}
	infile.close();

}
void imprimirDatosProf() {


	ifstream infile;
	infile.open("Profesores.txt");
	cout << "\n 2. Escribe el ID de Profesor" <<endl;
	cin >> search;
	if (infile.is_open()) {
		while (!infile.eof())
		{
			infile.getline(line, 500, ','); //leer linea
			for (i = 0; line[i] == search[i]; i++)
			{
				if (search[i] == '\0') // Buscar info
				{
					// imprimir info
					cout << "Datos:" << endl;
					cout << "ID:" << " " << line << endl;
					infile.getline(line, 500, ',');
					cout << "Nombre del alumno: " << " " << line << endl;
					infile.getline(line, 500, ',');
					cout << "Sexo: " << " " << line << endl;
					infile.getline(line, 500, ',');
					cout << "Edad: " << line << endl;
					infile.getline(line, 500, ',');
					cout << "Titulo: " << line << endl;
					infile.getline(line, 500, ',');
					cout << "Cedula: " << line << endl;
					infile.getline(line, 500, '\n');
					cout << "Materia que imparte: " << " " << line << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					break;
				}
				
			}
		}
		// no encontro
		for (int j = 0; j < 3; j++) infile.getline(line, 500, ','); 
		infile.getline(line, 500, '\n'); 


	}


	else
	{
		cout << "Id no existe" << endl;
	}
	infile.close();

}
void imprimirDatosMatr() {


	ifstream infile;
	infile.open("Materia.txt");
	cout << "\n 2. Escribe el ID de la Materia" << endl;
	cin >> search;
	if (infile.is_open()) {
		while (!infile.eof())
		{
			infile.getline(line, 500, ','); //leer linea
			for (i = 0; line[i] == search[i]; i++)
			{
				if (search[i] == '\0') // Buscar info
				{
					// imprimir info
					cout << "Datos:" << endl;
					cout << "IdMateria:" << " " << line << endl;
					infile.getline(line, 500, ',');
					cout << "Nombre de la materia: " << " " << line << endl;
					infile.getline(line, 500, ',');
					cout << "Creditos de la materia: " << " " << line << endl;
					infile.getline(line, 500, '\n');
					cout << "Profesor de la materia: " << line << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					break;
				}
				
			}
		}
		// no encontro
		for (int j = 0; j < 3; j++) infile.getline(line, 500, ','); 
		infile.getline(line, 500, '\n'); 


	}


	else
	{
		cout << "Id no existe" << endl;
	}
	infile.close();

}