#include <iostream>
#include <locale>
#include <windows.h>

#include "ModulesSereda.h"
#include "ModulesDmytrenko.h"
#include "ModulesBezkrovna.h"
#include "struct_type_project_1.h"

int main() {
    SetConsoleCP(65001); // Дозволяє вводити українською
    SetConsoleOutputCP(65001); // Дозволяє виводити українською

    List carRegistry;
    std::string filename;
    std::cout << "Введіть ім'я файлу: ";
    std::cin >> filename;
    bool running = true;

    // Завантаження існуючих даних із файлу
    List* loadedList = load_register(filename);
    if (loadedList != nullptr) {
        carRegistry = *loadedList;
        delete loadedList;
    }

    List *list = load_register(filename);

    if (list == nullptr){
        list = new List;
        list->head = nullptr;
        list->tail = nullptr;
    }

    while (running) {
        std::cout << "\n=== МЕНЮ ===\n";
        std::cout << "1. Додати новий запис\n";
        std::cout << "2. Вивести реєстр на екран\n";
        std::cout << "3. Вивести реєстр у текстовий файл\n";
        std::cout << "4. Пошук за державним номером\n";
        std::cout << "5. Видалити запис за номером\n";
        std::cout << "6. Вихід\n";
        std::cout << "Ваш вибір: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
                addNewCarRecord(&carRegistry);
                save_to_file(list, filename);
                break;

            case 2:
                printRegister(&carRegistry);
                break;
            case 3: {
                std::string textFilename;
                std::cout << "Введіть ім'я текстового файлу: ";
                std::cin >> textFilename;
                printRegistryToFile(&carRegistry, textFilename);
                break;
            }
            case 4: {
                std::string searchNumber;
                std::cout << "Введіть державний номер для пошуку: ";
                std::cin >> searchNumber;
                search_by_state_number(filename, searchNumber);
                break;
            }
            case 5: {tf
                std::string removeNumber;
                std::cout << "Введіть державний номер для видалення: ";
                std::cin >> removeNumber;
                if (removeByStateNumber(carRegistry, removeNumber)) {
                    std::cout << "Запис видалено.\n";
                } else {
                    std::cout << "Запис не знайдено.\n";
                }
                break;
            }
            case 6:
                running = false;
                save_to_file(&carRegistry, filename);
                deleteRegistry(&carRegistry);
                break;
            default:
                std::cout << "Невірний вибір. Спробуйте ще раз.\n";
        }
    }

    delete list;
    return 0;
}

