#include <vector>
#include <iostream>

using namespace std;


int main()
{
    vector<int> int_vec;
    int_vec.push_back(1);
    int_vec.push_back(2);
    int_vec.push_back(3);
    
    vector<int>::iterator int_vec_modify = int_vec.begin();
    *int_vec_modify = 20;

    int_vec[1] = 5;

    vector<int>::iterator int_vec_ite = int_vec.begin();
    while(int_vec_ite != int_vec.end())
    {
        cout<<*int_vec_ite<<endl;
        int_vec_ite++;
    }

}