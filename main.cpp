#include <iostream>

int main()
{
    size_t val;
    
    std::cout << "Decimal to Binary: " << std::endl;
    
    std::cin >> val;
    
    size_t biggestPowerOfTwo = 1;
    
    size_t i = 0;
    while ((biggestPowerOfTwo * 2) <= val)
    {
        biggestPowerOfTwo *= 2;
        i++;
    }
    
    char* finalBinary = new char[i + 1];

    for (int ib = 0; ib < i + 1; ib++)
    {
        finalBinary[ib] = '0';   
    }

    while (val >= 1)
    {
        biggestPowerOfTwo = 1;
        
        size_t it = 0;
        while ((biggestPowerOfTwo * 2) <= val)
        {
            biggestPowerOfTwo *= 2;
            it++;
        }   
        
        val -= biggestPowerOfTwo;
        finalBinary[i - it] = '1';
    }
    
    std::cout << finalBinary << std::endl;
    
    delete[] finalBinary;
}
