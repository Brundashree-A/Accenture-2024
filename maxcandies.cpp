// halloween candies

#include <iostream>
#include <vector>

using namespace std;

int maxCandies(int n, const vector<int>& prices, int money) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (prices[i] % 5 == 0) {
            continue; // Free candy, no need to spend money
        }

        if (money >= prices[i]) {
            money -= prices[i];
            count++;
        }
    }

    return count;
}

int main() {
    int n = 3;
    vector<int> prices = {5, 5, 105};
    int money = 16;

    int maxCandiesCount = maxCandies(n, prices, money);
    cout << "Maximum candies Bob can buy: " << maxCandiesCount << endl;

}