#include <iostream>
#include <cstring>
#include "Fecha.h"

Fecha::Fecha() {
    setDia(1);
    setMes(1);
    setAnio(2023);
}

Fecha::Fecha(int dia, int mes, int anio)
{
    //ctor
    setDia(dia);
    setMes(mes);
    setAnio(anio);
}

Fecha::~Fecha()
{
    //dtor
}

void Fecha::setDia(int dia) {
    if (dia > 31 || dia < 1) {
        _dia = 1;
        std::cout << "Dia incorrecto. Se procederá a guardar el primer dia habil.";
    } else {
        _dia = dia;
    }
}

int Fecha::getDia() {
    return _dia;
}

void Fecha::setMes(int mes) {
    if (mes < 1 || mes > 12) {
        _mes = 1;
        std::cout << "Mes incorrecto. Se procederá a guardar el primer mes del año.";
    } else {
        _mes = mes;
    }
}

int Fecha::getMes() {
    return _mes;
}

void Fecha::setAnio(int anio) {
    if (anio > 1499 && anio < 2100) {
        _anio = anio;
    } else {
        _anio = 2023;
        std::cout << "Anio incorrecto. Se procederá a guardar el anio actual.";
    }
}

int Fecha::getAnio() {
    return _anio;
}


bool Fecha::esBisiesto(int anio) {
    bool resultado = false;
    if(anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)){
        resultado = true;
    }

    return resultado;
}

void Fecha::AgregarDia() {
    int diasEnCadaMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int anioActual = getAnio();
    int mesActual = getMes();
    int diaActual = getDia();

    //sumo  al primer dia del mes siguiente si no es dic
    if (diaActual == diasEnCadaMes[mesActual-1] && mesActual != 12) {
        setDia(1);
        setMes(mesActual+1);
    }
    //sumo al primer dias del mes siguiente y año si es dic
    else if (diaActual == diasEnCadaMes[mesActual-1] && mesActual == 12) {
        setDia(1);
        setMes(1);
        setAnio(anioActual+1);
    }
    //sumo un dia si no es fin de mes
    else if (diaActual != diasEnCadaMes[mesActual-1]) {
        setDia(diaActual+1);
    }
    //sumo un dia al ultimo dia de ferero si es bisiesto
    else if (mesActual == 2 && diaActual == 28 && esBisiesto(anioActual) ) {
        setDia(diaActual+1);
        setMes(mesActual+1);
    }

}


void Fecha::RestarDia() {
    int diasEnCadaMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int anioActual = getAnio();
    int mesActual = getMes();
    int diaActual = getDia();

    //resto 1 dia si es primeor enero
    if (mesActual == 1 && diaActual == 1) {
        setDia(31);
        setMes(12);
        setAnio(anioActual-1);
    }
    //resto un dia si es primero y no es enero
    else if (diaActual == 1 && mesActual != 1) {
        setDia(diasEnCadaMes[mesActual-2]);
        setMes(mesActual-1);
    }
    //resto un dia si es bisiesto y ultimo dia febrero
    else if (mesActual == 2 && diaActual == 29 && esBisiesto(anioActual) ) {
        setDia(diaActual-1);
    }
    else if (diaActual != 1) {
        setDia(diaActual-1);
    }

}


void Fecha::AgregarDias(int dias) {
    int diasEnCadaMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int anioActual = getAnio();
    int mesActual = getMes();
    int diaActual = getDia();

    if (dias > 0) {

    } else {

    }

}


char* Fecha::toString() {
    int anioActual = getAnio();
    int mesActual = getMes();
    int diaActual = getDia();
    char mesActualStr[3];
    char diaActualStr[3];
    char resultado[11];
    char aux[11];

    if (mesActual < 10) {
        strcpy(mesActualStr, "0");
        itoa(mesActual, aux, 10);
        strcat(mesActualStr, aux);
    } else {
        itoa(mesActual, aux, 10);
        strcpy(mesActualStr, aux);
    }

    if (diaActual < 10) {
        strcpy(diaActualStr, "0");
        itoa(diaActual, aux, 10);
        strcat(diaActualStr, aux);
    } else {
        itoa(diaActual, aux, 10);
        strcpy(diaActualStr, aux);
    }

    strcpy(resultado, diaActualStr);
    resultado[2] = '/';
    //strcat(resultado, '/');
    strcat(resultado, mesActualStr);
    resultado[5] = '/';
    //strcat(resultado, '/');
    itoa(anioActual, aux, 10);
    strcat(resultado, aux);

    std::cout << resultado;

    return resultado;
}


