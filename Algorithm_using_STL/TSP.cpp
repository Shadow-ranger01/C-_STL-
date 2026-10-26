#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <climits>

int main() {
    // Example distance matrix for 4 cities
    std::vector<std::vector<int>> dist = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int n = dist.size();
    std::vector<int> cities(n);
    std::iota(cities.begin(), cities.end(), 0); // Fills with 0, 1, 2, ..., n-1

    int min_path = INT_MAX;

    // std::next_permutation generates all possible orderings of cities
    do {
        int current_path_weight = 0;
        for (int i = 0; i < n - 1; ++i) {
            current_path_weight += dist[cities[i]][cities[i + 1]];
        }
        // Return to starting city
        current_path_weight += dist[cities.back()][cities.front()];

        min_path = std::min(min_path, current_path_weight);
    } while (std::next_permutation(cities.begin() + 1, cities.end())); // Keep city 0 fixed

    std::cout << "Minimum TSP path cost: " << min_path << "\n";
    return 0;
}
