//65 => A to Z <=90
//97=> a to z <=122
// occupy one byte : 2^8 = 256

#include<iostream>  

int main()
{
    int i;
    for(i=65;i<123;i++)
    {
    char value = i ;
    std:: cout << static_cast<int>(value);
    std::cout<< "-"<<value << std:: endl;    
    }
    auto var1{12};
    std :: cout<<var1;

    return 0;
}