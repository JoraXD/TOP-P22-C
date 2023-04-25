#include <iostream>

// Если функция вернула -1
// То Это ошибка ввода пользователя
// Если функция вернула -2
// То Это ошибка деление на ноль
void input_n(int *n) {
    std::cout << "Введите число от 15 до 45 ";
    std::cin >> *n;

    if (*n < 15 || *n > 45) {
    throw "Input error!";
    }
}

void del_func(int *n) {
    int m;
    std::cout << "Введите ";
    std::cin >> m;
    if (m == 0)
        throw "Zero div error!";
    std::cout  << "n/m =" << *n / m;
    }

int main(int argc, char const *argv[])
{

    int *n = new int();
    try{
        input_n(n);
        del_func(n);
    }
    catch(const char *error){
        delete n;
        std::cout<<error<<"\n";
    }
    catch(...){
        std::cout<<"Error\n";
    }

    return 0;
}
