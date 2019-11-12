//
// Created by utec on 12/11/19.
//

#ifndef EJERCICIO1_CLIBRO_H
#define EJERCICIO1_CLIBRO_H

#include "Tipos.h"
#include "CAutor.h"

class Clibro{
private:
    TipoString titulo;
    CAutor* pAutor;
    TipoString genero;

public:
    Clibro(TipoString titulo,CAutor* pAutor,TipoString genero);
    Clibro();
    void setTilulo(TipoString titulo);
    void SetAutor(CAutor* pAutor);
    void SetGenero(TipoString genero);
    CAutor* getAutor();
    TipoString getTitulo();
    TipoString getGenero();


};

#endif //EJERCICIO1_CLIBRO_H
