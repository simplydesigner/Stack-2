#include <stack.cpp>
#include <catch.hpp>
#include <iostream>
using namespace std;

SCENARIO("count", "[count]"){
  stack<int> s;
  s.push(1);
  REQUIRE(s.count()==1);
}

SCENARIO("push", "[push]"){
  stack<int> s;
  s.push(1);
  REQUIRE(s.count()==1);
  REQUIRE(s.pop()==1);
}

SCENARIO("pop", "[pop]"){
  stack<int> s;
  s.push(1);
  REQUIRE(s.count()==1);
  REQUIRE(s.pop()==1);
}


SCENARIO("prisv", "[prisv]"){
  stack<int> s;
  s.push(1);
  stack<int> s2;
  s2=s;
  REQUIRE(s.count()==1);
  REQUIRE(s.pop()==1);
}
SCENARIO("copy", "[copy]"){
  stack<int> s;
  s.push(1);
  stack <int> a = s;
  REQUIRE(a.count()==1);
  REQUIRE(a.pop()==1);
}
SCENARIO("test", "[test]"){
  stack<int> s;
  REQUIRE(s.count()==0);
}
