#include <iostream>
#define fastio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)

void times_record_broken(int scores[], int size)
{
    int max_score = scores[0], min_score = scores[0];
    int best_count{0}, worst_count{0};
    for (int i = 1; i < size; i++)
    {
        if (scores[i] > max_score)
        {
            max_score = scores[i];
            best_count++;
        }
        if (scores[i] < min_score)
        {
            min_score = scores[i];
            worst_count++;
        }
    }
    std::cout << best_count << " " << worst_count << "\n";
    return;
}

int main()
{
    using namespace std;
    fastio;
    int T{0};
    cin >> T;
    int scores[T] = {0};
    int i = 0;
    while (i < T)
    {
        cin >> scores[i];
        i++;
    }
    times_record_broken(scores, T);
    return 0;
}