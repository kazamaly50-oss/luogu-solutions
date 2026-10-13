// 题号：P1001
// 题目链接：https://www.luogu.com.cn/problem/P1001
// 思路：读取两个整数并输出它们的和。
// 时间复杂度：O(1)；空间复杂度：O(1)
#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long long a, b;
    std::cin >> a >> b;
    std::cout << a + b << '\n';
    return 0;
}
