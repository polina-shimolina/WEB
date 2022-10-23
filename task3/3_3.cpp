//Очередь с помощью стека
//Реализовать очередь с помощью двух стеков.Использовать стек, реализованный с помощью динамического буфера.

//Обрабатывать команды push back и pop front.

#include <iostream>
#include <stack>

int main()
{
    int n;
    int num;
    std::stack <int> s1, s2;
    int instruction;
    std::cin >> n;
    int result = 1;
    for (int i = 0; i < n; i++) {
        std::cin >> instruction;
        if (instruction == 2) {
            std::cin >> num;
            if (s2.empty()) {
                if (!s1.empty()) {
                    while (!s1.empty()) {
                        s2.push(s1.top());
                        s1.pop();
                    }
                }
                else {
                    if (num != -1) {
                        result*=0;
                    }
                    else {
                        s2.push(-1);
                    }
                }
            }
            if (s2.top() == num) s2.pop();
            else result*=0;
        }
        else if (instruction == 3) {
            std::cin >> num;
            s1.push(num);

        }
    }
    std::string output = (result == 0 ? "NO" :"YES");
    std::cout << output;
    return 0;
}

