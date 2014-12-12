#include <iostream>

int main()
{
    int a[20], b[30], r[50];
    int n, m, k = 0;
    bool found;

    std::cout << "Nr. de elem. pt. multimea A: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        std::cout << "a[" << i + 1 << "] = ";
        std::cin >> a[i];
    }

    std::cout << "\n";

    std::cout << "Nr. de elem. pt. multimea B: ";
    std::cin >> m;

    for (int i = 0; i < m; ++i)
    {
        std::cout << "b[" << i + 1 << "] = ";
        std::cin >> b[i];
    }

    std::cout << "\n";

    for (int i = 0; i < n; ++i)
    {
        r[k++] = a[i];
    }

    for (int i = 0; i < m; ++i)
    {
        r[k++] = b[i];
    }

    for (int i = 0; i < k; ++i)
    {
        for (int j = 0; j < k - 1; ++j)
        {
            if (r[j + 1] < r[j])
            {
                int temp = r[j + 1];
                r[j + 1] = r[j];
                r[j] = temp;
            }
        }
    }

    std::cout << "Diferenta celor doua multimi este: ";

    for (int i = 0; i < k; ++i)
    {
        std::cout << r[i] << " ";
    }
}
