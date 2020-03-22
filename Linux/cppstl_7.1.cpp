#include <vector>
#include <iostream>

class A{

};

int main(int argc, char* argv[])
{
    std::vector<int> int_ect;
    std::vector<float> flo_vect;
    std::vector<A> cA_vect;
    std::vector<A*> cpA_vect;

    std::cout << "Init success!" << std::endl;

    return 0;
}