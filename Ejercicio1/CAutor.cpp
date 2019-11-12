//
// Created by utec on 12/11/19.
//

#include "CAutor.h"

CAutor::CAutor(){

};

CAutor::CAutor(TipoString nombre, TipoString apellido):nombre(nombre),apellido(apellido){
};

void CAutor::SetNombre(TipoString nombre) {
    this->nombre=nombre;
}

void CAutor::SetApellido(TipoString apellido) {
    this->apellido=apellido;
}

TipoString CAutor::getNombre() {
    return  this->nombre;
}

TipoString CAutor::getApellido() {
    return  this->apellido;
}