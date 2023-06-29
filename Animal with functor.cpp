#include <iostream>

class LionFunc {
public:
    void operator()(const std::string& name, int age) {
        std::cout << name << " It's the name" << std::endl;
        number_of_legs(name);
        sound(name);
        color(name);
        behavior(name);
    }

private:
    void number_of_legs(const std::string& name) {
        std::cout << name << " has 4 legs." << std::endl;
    }

    void sound(const std::string& name) {
        std::cout << "The sound of " << name << " is RAR." << std::endl;
    }

    void color(const std::string& name) {
        std::cout << "The color of " << name << " is undefined." << std::endl;
    }

    void behavior(const std::string& name) {
        std::cout << "The behavior of " << name << " is aggressive." << std::endl;
    }
};

int main() {
    LionFunc lionFunctor;
    lionFunctor("Simba", 10);

    return 0;
}