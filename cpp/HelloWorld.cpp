#include "HelloWorld.h"

std::string STD_NAME_INPUT_TEXT = "Please enter your name, followed by <RETURN>: ";
std::string STD_GREETING = "Hello, ";

std::string HelloWorld::get_name()
{
    std::string name;
    bool input_result;

    do {
        std::cout << STD_NAME_INPUT_TEXT;
        input_result = std::getline(std::cin, name);
    } while (name.empty() || input_result == false);

    return name;
}

bool HelloWorld::name_given()
{
    return argc > 1;
}

int HelloWorld::run(int argc, char** argv)
{
    this->argc = argc;
    this->argv = argv;
    greeting = STD_GREETING;

    if (name_given()) {
        name = argv[1];
    } else {
        name = get_name();
    }

    std::cout << greeting << name << std::endl;

    return 0;
}
