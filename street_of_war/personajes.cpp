#include "personajes.h"

personajes::personajes()
{

}

void personajes::CargarA()
{

}

float personajes::getPosx() const
{
    return posx;
}

void personajes::setPosx(float value)
{
    posx = value;
}

float personajes::getPosy() const
{
    return posy;
}

void personajes::setPosy(float value)
{
    posy = value;
}

int personajes::getResistencia() const
{
    return resistencia;
}

void personajes::setResistencia(int value)
{
    resistencia = value;
}

int personajes::getFuerza() const
{
    return fuerza;
}

void personajes::setFuerza(int value)
{
    fuerza = value;
}
/*
bool personajes::getSaltar() const
{
    return saltar;
}

void personajes::setSaltar(bool value)
{
    saltar = value;
}

bool personajes::getPatada() const
{
    return patada;
}

void personajes::setPatada(bool value)
{
    patada = value;
}

bool personajes::getGolpe() const
{
    return golpe;
}

void personajes::setGolpe(bool value)
{
    golpe = value;
}
*/