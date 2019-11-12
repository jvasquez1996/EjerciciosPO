//
// Created by utec on 12/11/19.
//

#include "CLibro.h"

Clibro::Clibro() {}

Clibro::Clibro(TipoString titulo, CAutor *pAutor, TipoString genero):titulo(titulo),pAutor(pAutor),genero
        (genero){}

void Clibro::SetAutor(CAutor *pAutor) {
    this->pAutor=pAutor;
}

void Clibro::setTilulo(TipoString titulo) {
    this->titulo=titulo;
}

void Clibro::SetGenero(TipoString genero) {
    this->genero=genero;
}

CAutor* Clibro::getAutor() {
    return  this->pAutor;
}

TipoString Clibro::getTitulo() {
    return  this->titulo;
}

TipoString Clibro::getGenero() {
    return  this->genero;
}