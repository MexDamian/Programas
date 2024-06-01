#ifndef PERSONA_H_
#define PERSONA_H_

class Persona {
    virtual double SaldoRestante()= 0;
    virtual double SemanasRestantes() = 0;
    virtual double Interes() = 0;
    virtual double PrestamoTotal() = 0;

};

#endif