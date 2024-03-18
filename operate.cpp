//operation

#include <iostream>

int main()
{
    /*addition
    int num1(4);
    int num2(45);

    int sum = num1 + num2;
    std:: cout << "add is "<<sum << std:: endl;

    //subraction
    int sub = num1 - num2 ;
    std :: cout <<"sub is " <<sub << std:: endl;

    //division
    int div = num1 / num2;
    std :: cout << "div is "<<div << std::endl;

    //modules return remainder
    int mod = num1 % num2;
    std :: cout << "div is "<<mod << std::endl;

    //decrement
    int num = 1;
    std:: cout<<"incre"<<num--<< std:: endl;

    //multiply
    int mul = num1 * num2;
    std :: cout << "div is "<<mul  << std::endl;

    //increment
    int nu = 1;
    std:: cout<<"incre"<<nu++<< std:: endl;

    //logical operator
    //and -one false then false
    //or -one true then true
    //not -true then false , false then true
    */

    bool a {true};
    bool b {false};
    bool c {true};

    std::cout << std::boolalpha;
    std::cout<<"a "  << a << std:: endl;
    std::cout<<"b " << b << std:: endl;
    std :: cout << "c " <<c << std::endl;

    std::cout<<"a && b "<< a && b << std::endl;
    std:: cout<<"a||b"<< a || c << std::endl;
    std::cout<<"a!"<< !a << std::endl;

    return 0 ;
}

