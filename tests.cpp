#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <iostream>
#include "funcs.h"
#include <vector>
using std::cout;

bool taskAVerify(std::vector<int> v, int sizeParam) {
  if (sizeParam < 0 && v.size() == 0) { return true; }
  if (sizeParam != v.size()) { return false; }
  for (int i = 0; i < v.size(); i++) {
    if (v[i] < 0 || v[i] >= sizeParam) { return false; }
  }
  return true;
}

bool sameContents(std::vector<int> v1, std::vector<int> v2) {
  if (v1.size() != v2.size()) { return false; }
  for (int i = 0; i < v1.size(); i++) {
    if (v1[i] != v2[i]) { return false; }
  }
  return true;
}

TEST_CASE("TASK A") {
  CHECK(taskAVerify(makeVector(8), 8));
  CHECK(taskAVerify(makeVector(0), 0));
  CHECK(taskAVerify(makeVector(1), 1));
  CHECK(taskAVerify(makeVector(-4), -4));
}

TEST_CASE("TASK B") {
  std::vector<int> v = {1,2,-1,3,4,-1,6}; std::vector<int> vAns = {1,2,3,4,6};
  CHECK(sameContents(goodVibes(v), vAns));
  v = {-9000,-9000,-9000,-9000,-9000,-9000,-9001}; vAns = {};
  CHECK(sameContents(goodVibes(v), vAns));
  v = {}; vAns = {};
  CHECK(sameContents(goodVibes(v), vAns));
  v = {0,2,4,6}; vAns = {2,4,6};
  CHECK(sameContents(goodVibes(v), vAns));
}

TEST_CASE("TASK C") {
  std::vector<int> v = {1,2,3}; std::vector<int> v2 = {4,5};
  std::vector<int> vAns = {1,2,3,4,5}; std::vector<int> v2Ans = {};
  gogeta(v, v2); bool checkBool = sameContents(v, vAns) && sameContents(v2, v2Ans);
  CHECK(checkBool);
  v = {9000,9000,9000}; v2 = {2000,2000,2000};
  vAns = {9000,9000,9000,2000,2000,2000};
  gogeta(v, v2); checkBool = sameContents(v, vAns) && sameContents(v2, v2Ans);
  CHECK(checkBool);
  v = {}; v2 = {};
  vAns = {};
  gogeta(v, v2); checkBool = sameContents(v, vAns) && sameContents(v2, v2Ans);
  CHECK(checkBool);
  v = {-420}; v2 = {};
  vAns = {-420};
  gogeta(v, v2); checkBool = sameContents(v, vAns) && sameContents(v2, v2Ans);
  CHECK(checkBool);
}

TEST_CASE("TASK D") {
    std::vector<int> v = {1,2,3}; std::vector<int> v2 = {4,5}; std::vector<int> ans = {5,7,3};
    CHECK(sameContents(sumPairWise(v,v2), ans));
    v = {}; v2 = {}; ans = {};
    CHECK(sameContents(sumPairWise(v,v2), ans));
    v = {-124,44,68}; v2 = {}; ans = {-124,44,68};
    CHECK(sameContents(sumPairWise(v,v2), ans));
    v = {0,0,0}; v2 = {0}; ans = {0,0,0};
    CHECK(sameContents(sumPairWise(v,v2), ans));
}
