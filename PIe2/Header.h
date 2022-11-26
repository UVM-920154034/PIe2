#include<iostream>
#include<fstream>
using namespace std;
ofstream MyFile("Alumnos.txt");
ofstream MyFile2("Materia.txt");
ofstream MyFile3("Profesores.txt");

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
	cout << "Ingresar nombre:";
	cin >> nombre;
	cout << "Ingresarapellido:";
	cin >> apellido;
	nombre_apellido = nombre + " " + apellido;
	cout << "Sexo:";
	cin >> sexo;
	cout << "Edad:";
	cin >> edad;

}
void DatosGenerales::imprimirDatos() {
	cout << "Id:";
	int Id;
	cout << "Nombre Completo:";
	std::string nombre_apellido;
	cout << "Sexo:";
	std::string sexo;
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
	cout << "Ingresar semestre:";
	cin >> semestre;
	cout << "Ingresar materias:";
	cin >> materias;
	
}
void Alumnos::getdatos() {
	ofstream Myfile;
	Myfile.open("Alumnos.txt", ios::out);
	MyFile << Id <<" "<<nombre_apellido<< " " << sexo<<" " << edad << " " << ctrlescolar << " " << semestre << " " << materias << endl;
	MyFile.close();
}
void Alumnos::imprimirDatos() {
	cout << "Id de alumno:";
	cout << Id;
	cout << "Número de control escolar del alumno:";
	cout << ctrlescolar;
	cout << "Semestre que cursa el alumno:";
	cout << semestre;
	cout << "Materia que cursa el alumno:";
	cout << materias;

}
Alumnos::~Alumnos() {

}

////Profesores/___________________________________________________________________________________________________________________________________________________________
class Profesores : public DatosGenerales {
public:

	string tituprofe;
	int cedula;
	int materia;


	void getdatos();
	void imprimirDatos();
	Profesores();
	~Profesores();

};
Profesores::Profesores() {
	
	cout << "Ingresar titulo o profesion del profesor:";
	cin >> tituprofe;
	cout << "Ingresar número de cédula profesional:";
	cin >> cedula;
	cout << "Ingresar materia:";
	cin >> materia;

}
void Profesores::getdatos() {
	ofstream Myfile3;
	Myfile3.open("Profesores.txt", ios::out);
	MyFile3 << Id << " " << nombre_apellido << " " << sexo << " " << edad << " " << tituprofe << " " << cedula << " " << materia << endl;
	MyFile3.close();
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
	cout << "Ingresar materia:";
	cin >> materia;
	cout << "Ingresar creditos:";
	cin >> creditos;
	cout << "Ingresar nombre del profesor:";
	cin >> profesor;

}
void Materia::getdatos() {
	ofstream Myfile2;
	Myfile2.open("Profesores.txt", ios::out);
	MyFile2 << IdMateria << " " << materia << " " << creditos << " " << profesor << endl;
	MyFile2.close();
}
void Materia::imprimirDatos() {
	cout << "Id de la materia:";
	cin >> IdMateria;
	cout << "Materia:";
	std::string materia;
	cout << "Numero de creditos:";
	cin >> creditos;
	cout << "Nombre del profesor:";
	std::string profesor;

}
Materia::~Materia() {

}