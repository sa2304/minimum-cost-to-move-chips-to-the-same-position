#include <cassert>
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
 public:
  int minCostToMoveChips(vector<int>& position) {
    int odd_chips_count = 0;
    int even_chips_count = 0;
    for (int pos: position) {
      if (0 == pos % 2) {
        ++even_chips_count;
      } else {
        ++odd_chips_count;
      }
    }

    return min(even_chips_count, odd_chips_count);
  }
};

void TestMinCostToMoveChips() {
  Solution s;
  {
    vector<int> position{1,2,3};
    assert(1 == s.minCostToMoveChips(position));
  }
  {
    vector<int> position{2,2,2,3,3};
    assert(2 == s.minCostToMoveChips(position));
  }
  {
    vector<int> position{1,1000000000};
    assert(1 == s.minCostToMoveChips(position));
  }
}

int main() {
  TestMinCostToMoveChips();
  std::cout << "Ok!" << std::endl;
  return 0;
}
