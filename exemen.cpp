#include <iostrem>
#include <string>

int main () {

std:: string nombre = "osman"
std:: string nombre2 = "jose"
std:: string apellido = "ruiz"
std:: string apellido2 = "layett"

std:: string nombrecompleto = nombre + nombre2 + apellido + apellido2;
std:: cout << "nombre completo: " << nombrecompleto << std::endl;

std:: string sub = nombrecompleto.substr(1,8);
std:: cout << "primer nombre " << sub << std::endl;

return 0;







}
