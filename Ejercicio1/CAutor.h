//
// Created by utec on 12/11/19.
//

#ifndef EJERCICIO1_CAUTOR_H
#define EJERCICIO1_CAUTOR_H


#include "Tipos.h"


class CAutor{

private:
    TipoString nombre;
    TipoString apellido;
public:
    CAutor();
    CAutor(TipoString nombre,TipoString apellido);
    void SetNombre(TipoString nombre);
    void SetApellido(TipoString apellido);
    TipoString getNombre();
    TipoString getApellido();


};


#endif //EJERCICIO1_CAUTOR_H
