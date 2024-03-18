#include <iostream>

int main()
{
    /*for(int i=0;i<10;i++)
    {
        std::cout<<i+1<<" welcome" << std:: endl;
    }

    for (size_t i{0}; i<10; ++i)
    {
        std :: cout <<i<< ": hello user " << std:: endl;
    }

    */

   /* //size of size_1
    std:: cout << "size " << sizeof(size_t);

    */
    /*// iterator outside of loop
    size_t i{0};

    for (i ; i<9 ; i++)
    {
        std:: cout << "sahi "<< i << std::endl;
    }
    std :: cout<<"i " << i << std:: endl;*/

    int i = 0;
    int j=0;
    int n=5;
    for (i ; i<5; i++){
        for(j ; j<5; j++){
            std::cout<<"\n*" <<std::endl;
        }
        std::cout<<""<<std::endl;
    }

    return 0;
}