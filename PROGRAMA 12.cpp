
#include <iostream>
#include <string>

struct Persona {
    std::string nombre;
    int edad;
    void saludar() {
        std::cout << "Hola, mi nombre es "
                  << nombre << " y tengo "
                  << edad << " años."
                  << std::endl;
    }
};

int main() {
    Persona* ptrPersona = new Persona();
    ptrPersona->nombre = "Juan";
    ptrPersona->edad = 30;
    std::cout << "Nombre: " << ptrPersona->nombre << std::endl;
    std::cout << "Edad: " << ptrPersona->edad << std::endl;
    ptrPersona->saludar();
    delete ptrPersona;
    return 0;
}
