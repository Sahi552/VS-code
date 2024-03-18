#include <iostream>

int main(){
    
    int age ;
    std::cout<<"enter your age"<<std::endl;
    std::cin >>age;
    if(age > 18)
    {
        std::cout<<"your are eligible for voting"<< std:: endl;
    }
    else{
        std::cout<<"you are not eligible for voting"<< std:: endl;
    }
}


/*int main()
{
    bool red{false};
    bool green(true);

    std:: cout<<"red "<<red <<std::endl;
    std:: cout<<"green "<<green <<std:: endl;

    //size of boolean values
    std::cout<<"size of boolean values "<< sizeof(red)<< std:: endl;

    //boolaplpha to print true or false
    std::cout<<std::boolalpha;
    std:: cout<<"red "<<red <<std::endl;
    std:: cout<<"green "<<green <<std:: endl;

}
*/
