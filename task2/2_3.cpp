//2.3 Пересечение множеств
//Даны два массива неповторяющихся целых чисел, упорядоченные по возрастанию.A[0..n - 1] и B[0..m - 1].n » m.
//Найдите их пересечение.Требуемое время работы : O(m* log k), где k - позиция элементта B[m - 1] в массиве A..
//В процессе поиска очередного элемента B[i] в массиве A пользуйтесь результатом поиска элемента B[i - 1].n, k ≤ 10000.

#include <iostream>

int min(int x, int y) {
    return (x < y) ? x : y;
}

int BinarySearch(int array[], int left, int right, int element)
{
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (array[mid] == element)
            return mid;
        if (array[mid] < element)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int ExponentialSearch(int array[], int n, int element)
{
    if (n == 0) {
        return -1;
    }
    int bound = 1;
    while (bound < n && array[bound] < element) {
        bound *= 2;
    }
    return BinarySearch(array, bound / 2, min(bound, n - 1), element);
}

int main()
{

    int l_a, l_b;
    std::cin >> l_a >> l_b;
    int* a = new int[l_a];
    int* b = new int[l_b];

    for (int i = 0; i < l_a; i++) {
        std::cin >> a[i];
    }

    for (int i = 0; i < l_b; i++) {
        std::cin >> b[i];
    }

    int left = 0, right = l_a - 1, element;

    for (int i = 0; i < l_b; i++) {
        element = b[i];
        int k = ExponentialSearch(a, l_a, element);
        if (k != -1) {
            std::cout << a[k] << " ";
            left = k;
        }
        
    }
}

