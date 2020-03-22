#include <vector>
#include <iostream>

// using namespace std;  // 使用using namespace std的时候，就不需要在每次调用函数的时候前面加std::了

class A {

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