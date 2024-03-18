#include <iostream>
#include <string>

int main(){
    int age;
    std::string name;
    std::cout<<"enter your name "<< std:: endl;
    std::getline(std::cin,name);
    std::cout<<"enter your age "<< std :: endl;
    std::cin>>age;
    std::cout<<" Your name is "<< name  << " and you are "<< age <<" years old";
    return 0;
}
