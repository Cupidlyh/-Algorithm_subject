class Solution {
public:
    //利用逻辑运算符的短路性质
    //&&运算符左右都为真返回真，有一个假和两个假返回假
    //&&运算符当左为假时，右边就不进行判断，因为右边结果无论如何都是返回假
    //&&运算符左边真时，右边还要继续进行判断
    int sum(int n) {
        n && (n = n + sum(n - 1));
        return n;
    }

    int sumNums(int n) {
        return sum(n);
    }
};
