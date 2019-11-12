

#include <vector>
#include "Tipos.h"
#include "CAutor.h"
#include "CLibro.h"

int main() {

    TipoString nombre,apellido;
    TipoInt numeroLiros;
    cout<<"Ingres Nombre Autor: ";
    cin>>nombre;
    cout<<"Ingres Apellido Autor";
    cin>>apellido;
    cout<<"Ingrese numero de libros";
    cin>>numeroLiros;
    vector<Clibro> libros;

    CAutor *autor = new CAutor(nombre,apellido);

    for(size_t i=0;i<numeroLiros;i++){
            TipoString titulo;
            TipoString genero;
            cout<<"Libro #"<<i+1<<endl;
            cout<<"Ingrese Titlo:";
            cin>>titulo;
            cout<<"Ingrese genero";
            cin>>genero;
            Clibro clibro(titulo,autor,genero);
            libros.emplace_back(clibro);
    }



    delete(autor);



    return 0;
}