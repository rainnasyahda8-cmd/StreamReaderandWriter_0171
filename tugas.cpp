#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main()
{
    cout << "Awal Program" << endl;
    try
    {
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
}
