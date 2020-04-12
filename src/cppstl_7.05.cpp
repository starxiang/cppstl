#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> vec(10,5); // 5,5,5,5,5,5,5,5,5,5

    vector<int> int_vec;
    for(int i=0;i<10;i++)
    {
        int_vec.push_back(i);
    }

    //int_vec.erase(int_vec.begin()+4);
    int_vec.erase(int_vec.begin()+1, int_vec.begin()+5);
    
    
    
    // Output
    for(int i=0;i<int_vec.size();i++)
    {
        cout<<int_vec[i]<<endl;
    }
}