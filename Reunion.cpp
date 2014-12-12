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
        for (int j = 0; j < m; ++j)
        {
            found = false;

            for (int g = 0; g < k; ++g)
            {
                if (a[i] == r[g] or b[j] == r[g])
                {
                    found = true;
                }
            }

            if (a[i] != b[j] and !found)
            {
                r[k++] = a[i];
                r[k++] = b[j];
            }
        }
    }

    std::cout << "Reuniunea celor doua multimi este: ";

    for (int i = 0; i < k; ++i)
    {
        std::cout << r[i] << " ";
    }
}
