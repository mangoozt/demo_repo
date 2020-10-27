#include "Vector2.h"
#include <iostream>


int main(int argc, char** argv){
    using namespace Vectors;
    // это комментарий
    /*
        тоже комментарий (С-style)
    */
    std::cout << "Hello world!" << std::endl;
    Vector2 a{0,2};
    Vector2 b{1,2};
    std::cout << a+b << std::endl;
    return 0;
}