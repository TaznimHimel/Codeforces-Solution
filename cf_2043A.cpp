// #include <iostream>
// #include <cmath>

// int maxCoins(double n)
// {
//     // Base case
//     if (n <= 3)
//     {
//         return 1; // No operations possible, only one coin remains
//     }

//     // Number of operations (steps) k
//     int k = 0;
//     while (n > 3)
//     {
//         n /= 4; // Divide by 4 to simulate steps
//         k++;
//         // std::cout << "Step " << k << ": n = " << n << std::endl; // Debugging output
//     }

//     // The maximum number of coins is 2 raised to the power of k
//     return std::pow(2, k);
// }

// int main()
// {
//     int t;
//     std::cin >> t; // Read number of test cases
//     while (t--)
//     {
//         double n;
//         std::cin >> n;

//         if (n <= 3)
//         {
//             std::cout << 1 << std::endl; // No operations possible, only one coin remains
//         }
//         else
//         {
//             int result = maxCoins(n);
//             std::cout << result << std::endl;
//         }
//     }
//     return 0;
// }

//----------------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <cmath>

int maxCoins(double n)
{
    // Base case
    if (n <= 3)
    {
        return 1; // No operations possible, only one coin remains
    }

    // Calculate the number of steps (k) using logarithms
    int k = std::floor(std::log(n / 3) / std::log(4));

    // The maximum number of coins is 2 raised to the power of k
    return std::pow(2, k);
}

int main()
{
    int t;
    std::cin >> t; // Read number of test cases
    while (t--)
    {
        double n;
        std::cin >> n;

        if (n <= 3)
        {
            std::cout << 1 << std::endl; // No operations possible, only one coin remains
        }
        else
        {
            int result = maxCoins(n);
            std::cout << result << std::endl;
        }
    }
    return 0;
}
