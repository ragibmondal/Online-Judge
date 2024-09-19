#include <bits/stdc++.h>
using namespace std;

const int TIME_PER_FLOOR = 4;
const int FIXED_TIME = 19; // 3 (door open) + 5 (enter) + 3 (door close) + 3 (door open) + 5 (exit)

int calculateLiftTime(int userFloor, int liftFloor) {
    int timeToReach = abs(userFloor - liftFloor) * TIME_PER_FLOOR;
    int timeToGround = userFloor * TIME_PER_FLOOR;
    return timeToReach + timeToGround + FIXED_TIME;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    for (int caseNum = 1; caseNum <= t; ++caseNum) {
        int userFloor, liftFloor;
        cin >> userFloor >> liftFloor;
        
        int totalTime = calculateLiftTime(userFloor, liftFloor);
        
        cout << "Case " << caseNum << ": " << totalTime << '\n';
    }
    
    return 0;
}