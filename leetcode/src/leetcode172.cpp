#include <iostream>
using namespace std;

class Solution {
public:
    int trailingZeroes(int n) {
        int res = 0;
        while (n) {
            res += n / 5;
            n /= 5;
        }
        return res;
    }
};


int main(int argc, char const *argv[])
{
    std::cout << Solution().trailingZeroes(25) << std::endl;
    return 0;
}