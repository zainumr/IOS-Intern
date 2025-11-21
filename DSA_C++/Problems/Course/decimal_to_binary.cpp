#include <iostream>
#include <vector>
using namespace std;

int binaryToDecimal(int n){
    int ans = 0;
    int power = 1;

    while (n > 0)
    {
        int remainder = n % 2;
        ans += remainder * power;
        n /= 2;
        power *= 10;
    }

    return ans;
}

int main()
{
    int n = 10;
    cout<< binaryToDecimal(n) << '\n';

    return 0;
}