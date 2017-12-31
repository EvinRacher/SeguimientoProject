#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <cstdio>
#include <cctype>
using namespace std;

class Parameter{
 public:
  Parameter();
  int getQSize();
  string ask();
 protected:
  vector<string> questions;
  void inicialize();
};

class Health : public Parameter {
 public:
  Health();
  string ask();
 private:
  void inicialize();
};

class Education : public Parameter{
public:
  Education();
  string ask();
 private:
  void inicialize();
};
/**
class Feeding : public Parameter{
public:
  Feeding();
  string ask();
 private:
  void inicialize();
};

class Sleep : public Parameter{
public:
  Sleep();
  string ask();
 private:
  void inicialize();
};

class Hygiene : public Parameter{
public:
  Hygiene();
  string ask();
 private:
  void inicialize();
};

class Leisure : public Parameter{
public:
  Leisure();
  string ask();
 private:
  void inicialize();
};
**/
