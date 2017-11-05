#ifndef HELLOWORLD_H
#define HELLOWORLD_H
#include <iostream>

class HelloWorld
{
    public:
    int run(int argc, char** argv);

    private:
    int argc;
    char** argv;
    std::string greeting;
    std::string name;

    std::string get_name();
    bool name_given();
};
#endif /*HELLOWORLD_H*/
