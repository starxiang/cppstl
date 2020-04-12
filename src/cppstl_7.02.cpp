#include <vector>
#include <iostream>

using namespace std;

class A{

};

int main(int argc, char* argv[])
{
    std::vector<int> int_ect;
    int_ect.push_back(1);
    int_ect.push_back(2);
    int_ect.push_back(3);
    /*
    for(int i=0;i<int_ect.size();i++)
    {
        cout<<int_ect[i]<<endl;
    }
    */
    /*
    for(int i=0;i<int_ect.size();i++)
    {   
        cout<<int_ect.at(i)<<endl;
    }
    */

    vector<int>::iterator int_vec_iter = int_ect.begin();
    while(int_vec_iter!=int_ect.end())
    {
        cout<<*int_vec_iter<<endl;
        int_vec_iter++;
    }

    return 0;
}