#include <iostream>
#include "funcs.h"
#include <vector>
using std::cout;

void printVector(std::vector<int> v) {
  cout << "{";
  for (int i = 0; i < v.size(); i++) {
    cout << v[i];
    if (i != v.size() - 1) { cout << ","; }
  }
  cout << "}";
}

int main() {
  cout << "============TASK A=============\n";
  cout << "makeVector(8) returns: "; printVector(makeVector(8)); cout << "\n";
  cout << "makeVector(0) returns: "; printVector(makeVector(0)); cout << "\n";
  cout << "makeVector(1) returns: "; printVector(makeVector(1)); cout << "\n";
  cout << "makeVector(-4) returns: "; printVector(makeVector(-4)); cout << "\n";
  cout << "============TASK B=============\n";
  std::vector<int> v = {1,2,-1,3,4,-1,6}; cout << "goodVibes with vector {1,2,-1,3,4,-1,6} returns: "; printVector(goodVibes(v)); cout << "\n";
  v = {-9000,-9000,-9000,-9000,-9000,-9000,-9001}; cout << "goodVibes with vector {-9000,-9000,-9000,-9000,-9000,-9000,-9001} returns: "; printVector(goodVibes(v)); cout << "\n";
  v = {}; cout << "goodVibes with vector {} returns: "; printVector(goodVibes(v)); cout << "\n";
  v = {0,2,4,6}; cout << "goodVibes with vector {0,2,4,6} returns: "; printVector(goodVibes(v)); cout << "\n";
  cout << "============TASK C=============\n";
  std::vector<int> v2 = {4,5}; v = {1,2,3}; gogeta(v, v2); cout << "gogeta with Goku as {1,2,3} and Vegeta as {4,5} changes Goku to: "; printVector(v); cout << " and Vegeta to: "; printVector(v2); cout << "\n";
  v = {9000,9000,9000}; v2 = {2000,2000,2000}; gogeta(v, v2); cout << "gogeta with Goku as {9000,9000,9000} and Vegeta as {2000,2000,2000} changes Goku to: "; printVector(v); cout << " and Vegeta to: "; printVector(v2); cout << "\n";
  v = {}; v2 = {}; gogeta(v, v2); cout << "gogeta with Goku as {} and Vegeta as {} changes Goku to: "; printVector(v); cout << " and Vegeta to: "; printVector(v2); cout << "\n";
  v = {-420}; v2 = {}; gogeta(v, v2); cout << "gogeta with Goku as {-420} and Vegeta as {} changes Goku to: "; printVector(v); cout << " and Vegeta to: "; printVector(v2); cout << "\n";
  cout << "============TASK D=============\n";
  v = {1,2,3}; v2 = {4,5}; cout << "sumPairWise with v1 as {1,2,3} and v2 as {4,5} returns: "; printVector(sumPairWise(v, v2)); cout << "\n";
  v = {}; v2 = {}; cout << "sumPairWise with v1 as {} and v2 as {} returns: "; printVector(sumPairWise(v, v2)); cout << "\n";
  v = {-124,44,68}; v2 = {}; cout << "sumPairWise with v1 as {-124,44,68} and v2 as {} returns: "; printVector(sumPairWise(v, v2)); cout << "\n";
  v = {0,0,0}; v2 = {0}; cout << "sumPairWise with v1 as {0,0,0} and v2 as {0} returns: "; printVector(sumPairWise(v, v2)); cout << "\n\n";
  return 0;
}
