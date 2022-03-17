#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int minCostToMoveChips(vector<int>& position) {
    // FIXME
    return 0;
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
