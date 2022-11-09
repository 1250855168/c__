/**
*  类模板构建Stack
*/

#include <iostream>

using namespace std;

template<class T, int MAX>
class Stack {
private:
    T element[MAX];
    int top;
public:
    Stack();

    ~Stack() = default;

    void push(T element);

    T pop();

    bool is_full();

    bool is_empty();
};

template<class T, int MAX>
Stack<T, MAX>::Stack() {
    top = -1;
}

template<class T, int MAX>
void Stack<T, MAX>::push(T ele) {
    if (is_full()) {
        return;
    }
    element[++top] = ele;
}

template<class T, int MAX>
bool Stack<T, MAX>::is_full() {
    if (top == MAX - 1) {
        return true;
    } else {
        return false;
    }
}

template<class T, int MAX>
T Stack<T, MAX>::pop() {
    if (is_empty()){
        printf("容器为空!");
        return (T)0;
    }
    T t = element[top];
    top--;
    return t;
}

template<class T, int MAX>
bool Stack<T, MAX>::is_empty() {
    if (top==-1){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    Stack<int, 10> s;
    for (int i = 0; i < 10; ++i) {
        s.push(i);
    }
    for (int i = 0; i < 10; ++i) {
        cout << s.pop() << endl;
    }
    return 0;
}
