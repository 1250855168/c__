//
// Created by CHENMENG on 2022/11/8.
//

#include <iostream>

using namespace std;

template<class T>
T Max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    double a = 2, b = 3.4;
    float c = 5.1, d = 3.2;
    //在模板调用时进行参数类型的强制转换
    cout << "2, 3.2    的最大值是：" << Max(double(2), 3.2) << endl;
    cout << "a, c    的最大值是：" << Max(float(a), c) << endl;
    cout<< sizeof(long *)<<endl;
    //显示指定函数模板实例化的参数类型
    cout << "'a', 3    的最大值是：" << Max<int>('a', 3) << endl;
}
