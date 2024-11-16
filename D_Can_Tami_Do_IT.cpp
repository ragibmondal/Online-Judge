#include <iostream>
#include <vector>
using namespace std;

int solve_tami_days(int N, long long P, vector<long long>& food_items) {
    int days = 0;
    long long remaining_people = P;
    
    // Start from the largest food item and work backwards
    for (int i = N-1; i >= 0; i--) {
        long long current_food = food_items[i];
        
        // If this food item alone can feed everyone remaining
        if (current_food >= remaining_people) {
            days += 1;
            return days;
        }
        
        // If we need more food items
        if (i > 0) {
            // Calculate how many people we can feed with current food
            long long people_fed = (remaining_people / current_food) * current_food;
            if (people_fed > 0) {
                remaining_people -= people_fed;
                days += 1;
            }
        } else {
            // If this is the smallest food item and we still need it
            if (remaining_people > 0) {
                days += 1;
            }
        }
    }
    
    return days;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Read input
    int N;
    long long P;
    cin >> N >> P;
    
    vector<long long> food_items(N);
    for (int i = 0; i < N; i++) {
        cin >> food_items[i];
    }
    
    // Get result
    int days = solve_tami_days(N, P, food_items);
    
    // Print output
    cout << "Tami will be back after " << days << " day(s)" << endl;
    
    return 0;
}