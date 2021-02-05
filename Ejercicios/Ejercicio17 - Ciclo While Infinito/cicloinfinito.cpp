#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{   
    int ciclos = 0;
    
    while (ciclos < 1000000)
    {
        cout << "*";

        ciclos= ciclos + 1;
    }
    

    return 0;
}
