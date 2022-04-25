#include <iostream>
#include <vector>
using std::cout;

std::vector<int> makeVector(int n) {
  srand(time(NULL));
  std::vector<int> result;
  for (int i = 0; i < n; i++) {
    result.push_back(rand() % n);
  }
  return result;
}

std::vector<int> goodVibes(std::vector<int> v) {
  std::vector<int> result;
  for (int i = 0; i < v.size(); i++) {
    if (v[i] > 0) {
      result.push_back(v[i]);
    }
  }
  return result;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta) {
  // move all elements in vegeta to goku
  for (int i = 0; i < vegeta.size(); i++) {
    goku.push_back(vegeta[i]);
  }
  while (vegeta.size() != 0) {
    vegeta.pop_back();
  }
}

std::vector<int> copyVector(std::vector<int> v) {
  std::vector<int> result;
  for (int i = 0; i < v.size(); i++) {
    result.push_back(v[i]);
  }
  return result;
}

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2) {
  std::vector<int> result;
  // first get longer vector's size and then fill a copy of the shorter vector with zeroes until the sizes are equal
  std::vector<int> shorterVector;
  std::vector<int> longerVector;
  if (v1.size() > v2.size()) {
    shorterVector = copyVector(v2);
    longerVector = copyVector(v1);
  } else {
    shorterVector = copyVector(v1);
    longerVector = copyVector(v2);
  }
  while (shorterVector.size() != longerVector.size()) {
    shorterVector.push_back(0);
  }
  for (int i = 0; i < longerVector.size(); i++) {
    result.push_back(longerVector[i] + shorterVector[i]);
  }
  return result;
}
