#include<iostream>
#include<stdint.h>
#include<vector>


int main()
{

    uint8_t *var_ptr;
    int var1;
    std::vector<int> g1;
    for (int i = 1; i <= 5; i++)
    {
        g1.push_back(i);
    }
    for (auto i = g1.begin(); i != g1.end(); ++i)
    {
        std::cout << *i << " ";
        var1 = *i;
        var_ptr = (uint8_t *) &var1;
        std::cout << var1 << " ";
        std::cout << std::hex << *var_ptr << " ";
    }
    std::cout <<"\n";
    for (int j = 0; j < g1.size(); j++)
    {
        var1 = g1[j];
        std::cout << var1 << " ";
    }
    std::cout <<"\n";
}
