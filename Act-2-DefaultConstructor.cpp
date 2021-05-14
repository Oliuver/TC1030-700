// Randy Oliver Ortega Cota
// A00232304
// TC1030 gpo 700
// 13 de mayo de 2021

#include <iostream>
#include <string>

using namespace std;

class Vendedor{
    private:
        string Cve_Vendedor;
        string Nombre;
    public:
        Vendedor();
        Vendedor(string clave, string nom);
        string GetCveVen(){return Cve_Vendedor;};
        string GetNombreVen(){return Nombre;};
};

Vendedor::Vendedor(){
Cve_Vendedor = "Vacante";
Nombre = "Nadie";
};

Vendedor::Vendedor(string clave, string nom){
    Cve_Vendedor = clave;
    Nombre = nom;
};

class Inventario{
    private:
        string Cve_Articulo;
        string Descripcion; 
        double Precio;

    public:
        Inventario();
        Inventario(string clave, string descrip, double prec);
        string GetClave(){return Cve_Articulo;};
        string GetDescripcion(){return Descripcion;};
        double GetPrecio(){return Precio;};
};

Inventario::Inventario(){
    Cve_Articulo = "Ninguno";
    Descripcion = "Nohay";
    Precio = 0.0;
};
Inventario::Inventario(string clave, string descrip, double prec){
    Cve_Articulo = clave;
    Descripcion = descrip;
    Precio = prec;
};

class Cliente{
    private:
        string Cve_Cliente;
        string Nombre;
    public:
        Cliente();
        Cliente(string cliente, string nombre);
        string getClave(){return Cve_Cliente;};
        string getNombre(){return Nombre;};
};

Cliente::Cliente(){
    Cve_Cliente = "Ninguno";
    Nombre = "Nadie";
};
Cliente::Cliente(string cliente, string nombre){
    Cve_Cliente = cliente;
    Nombre = nombre;
};

int main(){
    Vendedor ven1;
    Vendedor ven2("V101","Juan Tuercas");
    Inventario inv1;
    Inventario inv2("A001","Martillo",54.99);
    Cliente cln1;
    Cliente cln2("C003","Refacciones Pepe");

    cout<<"\nVendedor 1: "<<ven1.GetCveVen()<<"\t"<<ven1.GetNombreVen()<<endl;
    cout<<"Vendedor 2: "<<ven2.GetCveVen()<<"\t"<<ven2.GetNombreVen()<<endl;
    cout<<"\n\nArticulo 1: "<<inv1.GetClave()<<"\t"<<inv1.GetDescripcion()<<"\t\t"<<inv1.GetPrecio()<<endl;
    cout<<"Articulo 2: "<<inv2.GetClave()<<"\t"<<inv2.GetDescripcion()<<"\t"<<inv2.GetPrecio()<<endl;
    cout<<"\n\nCliente 1: "<<cln1.getClave()<<"\t"<<cln1.getNombre()<<endl;
    cout<<"Cliente 2: "<<cln2.getClave()<<"\t\t"<<cln2.getNombre()<<endl;

    return 0;
}