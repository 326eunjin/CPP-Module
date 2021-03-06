#include <iostream>
#include <string>

int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str; // stringREF는 str의 또 다른 이름이다!
    std::cout << "------ADDRESS--------" << std::endl;
    std::cout << "str :" << &str << std::endl;
    std::cout << "stringPTR : " << stringPTR << std::endl;
    std::cout << "stringREF : " << &stringREF << std::endl;
    std::cout << "------VALUE--------" << std::endl;
    std::cout << "str :" << str << std::endl;
    std::cout << "stringPTR : " << *stringPTR << std::endl;
    std::cout << "stringREF : " << stringREF << std::endl;
}