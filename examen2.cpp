#include <iostream>
#include <string>

int main () {

    std:: string nombre = "osman ";
    std:: string nombre2 = "jose " ;
    std:: string apellido = "ruiz "  ;
    std:: string apellido2 = "layett " ;

    std:: string nombrecompleto = nombre + nombre2 + apellido + apellido2;
    std:: cout << "nombre completo: " << nombrecompleto << std::endl;

    std:: string sub = nombrecompleto.substr(0,5);
    std:: cout << "primer nombre " << sub << std::endl;

    return 0;







}
