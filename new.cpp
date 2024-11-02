#include <iostream>
#include <vector>
#include <algorithm>

void solve() {
    int n;
    std::cin >> n;

    // Read switch states
    std::vector<int> switches(2 * n);
    for (int i = 0; i < 2 * n; i++) {
        std::cin >> switches[i];
    }

    // Minimum number of lights on
    int min_lights = 0;

    // Possible ways to connect switches that might turn lights on
    int max_lights = 0;

    // Try all possible ways to connect switches to lights
    // A light is ON if it's toggled an odd number of times
    for (int mask = 0; mask < (1 << (2 * n)); mask++) {
        std::vector<int> connections(2 * n, -1);
        int lights_on = 0;

        // First, assign switches to lights
        int light_idx = 0;
        for (int i = 0; i < 2 * n; i++) {
            if (connections[i] == -1) {
                // Find another switch to connect this light to
                for (int j = i + 1; j < 2 * n; j++) {
                    if (connections[j] == -1) {
                        connections[i] = light_idx;
                        connections[j] = light_idx;
                        light_idx++;
                        break;
                    }
                }
            }
        }

        // Count lights toggled
        std::vector<int> light_states(n, 0);
        for (int i = 0; i < 2 * n; i++) {
            if (switches[i]) {
                light_states[connections[i]] ^= 1;
            }
        }

        // Count lights on
        lights_on = std::count(light_states.begin(), light_states.end(), 1);

        min_lights = std::min(min_lights, lights_on);
        max_lights = std::max(max_lights, lights_on);
    }

    std::cout << min_lights << " " << max_lights << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}