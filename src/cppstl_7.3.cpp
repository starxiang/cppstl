#include <vector>
#include <iostream>

using namespace std;

class A{
public:
    int n;
public:
    A(int n)
    {
        this->n = n;
    }
};

int main(int argc, char* argv[])
{
    /*
    vector<A> ca_vec;
    A a1(1);
    A a2(2);

    ca_vec.push_back(a1);
    ca_vec.push_back(a2);

    vector<A>::iterator ca_vec_iter = ca_vec.begin();
    while(ca_vec_iter != ca_vec.end())
    {
        cout<< ca_vec_iter->n <<endl;
        ca_vec_iter++;
    }
    */

   vector<A*> pca_vec;
   A* pa1 = new A(1);
   A* pa2 = new A(2);
   pca_vec.push_back(pa1);
   pca_vec.push_back(pa2);

   vector<A*>::iterator pca_vec_iter = pca_vec.begin();
   while(pca_vec_iter != pca_vec.end())
   {
       cout<<(*pca_vec_iter)->n<<endl;
       pca_vec_iter++;
   }

    return 0;
}