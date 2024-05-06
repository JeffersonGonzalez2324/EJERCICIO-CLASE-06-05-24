#include <iostream>

int main() {
    char opcion;

    std::cout << "Seleccione una comida:\n";
    std::cout << "1. Pizza\n";
    std::cout << "2. Hamburguesa\n";
    std::cout << "3. Pasta\n";
    std::cout << "4. Sushi\n";
    std::cout << "5. Salir (x)\n";
    std::cout << "Ingrese su elección: ";
    std::cin >> opcion;

    switch(opcion) {
        case '1':
            std::cout << "Has seleccionado Pizza.\n";
            break;
        case '2':
            std::cout << "Has seleccionado Hamburguesa.\n";
            break;
        case '3':
            std::cout << "Has seleccionado Pasta.\n";
            break;
        case '4':
            std::cout << "Has seleccionado Sushi.\n";
            break;
        case 'x':
            std::cout << "Saliendo del programa...\n";
            return 0; // Termina el programa
        default:
            std::cout << "Opción no válida. Por favor, intente de nuevo.\n";
            break;
    }

    return 0;
}
