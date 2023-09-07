//
//
//  Tarea 3
//
//  Created by Julio Alexander Alvarado Morales on 6/09/23.
//  Clase que tiene funciones de manejo de cadenas

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    char cadena1[20] = "Hola";
    char cadena2[20] = "Mundo";

    // strcpy: Copia una cadena en otra
    strcpy(cadena1, cadena2);
    cout << "strcpy(cadena1, cadena2): " << cadena1 << endl;

    // strcat: Concatena dos cadenas
    strcat(cadena1, " ");
    strcat(cadena1, "Mundo2");
    cout << "strcat(cadena1, ' Mundo'): " << cadena1 << endl;

    // strlen: Obtiene la longitud de una cadena
    cout << "strlen(cadena1): " << strlen(cadena1) << endl;

    // strcmp: realiza una comparación ordinal de string1 y string2 y devuelve un valor que indica su relación.
    if (strcmp(cadena1, cadena2) == 0) {
        cout << "strcmp(cadena1, cadena2) es igual." << endl;
    } else {
        cout << "strcmp(cadena1, cadena2) no es igual." << endl;
    }

    char caracter = 'A';

    // isalnum: Verifica si un carácter es alfanumérico
    if (isalnum(caracter)) {
        cout << "isalnum(caracter): 'A' es alfanumérico." << endl;
    } else {
        cout << "isalnum(caracter): 'A' no es alfanumérico." << endl;
    }

    // isalpha: Verifica si un carácter es una letra
    if (isalpha(caracter)) {
        cout << "isalpha(caracter): 'A' es una letra." << endl;
    } else {
        cout << "isalpha(caracter): 'A' no es una letra." << endl;
    }

    char espacio = ' ';

    // isblank: Verifica si un carácter es un espacio en blanco
    if (isblank(espacio)) {
        cout << "isblank(espacio): El carácter es un espacio en blanco." << endl;
    } else {
        cout << "isblank(espacio): El carácter no es un espacio en blanco." << endl;
    }

    string texto = "Ejemplo de substr";

    // substr: Obtiene una subcadena de una cadena
    string subcadena = texto.substr(9, 5);
    cout << "substr(texto, 9, 5): " << subcadena << endl;

    char minuscula = 'a';

    // tolower: Convierte un carácter a minúscula
    char minuscula_convertida = tolower(minuscula);
    cout << "tolower(minuscula): " << minuscula_convertida << endl;

    char mayuscula = 'A';

    // toupper: Convierte un carácter a mayúscula
    char mayuscula_convertida = toupper(mayuscula);
    cout << "toupper(mayuscula): " << mayuscula_convertida << endl;

    return 0;
}

