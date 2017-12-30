#pragma once
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Parameter{
 public:
  Parameter();
  int getQSize();
  void ask();
 protected:
  // int size;
  vector<string> questions;
  vector<string>::iterator it;
  void inicialize();
};

class Health : public Parameter {
 public:
  Health();
  string ask();
 private:
  void inicialize();
};
/**
class Education : public Parameter{
public:
  Parameter();
  void ask();
 private:
  void inicialize();
};

class Feeding : public Parameter{
public:
  Parameter();
  void ask();
 private:
  void inicialize();
};

class Sleep : public Parameter{
public:
  Parameter();
  void ask();
 private:
  void inicialize();
};

class Hygiene : public Parameter{
public:
  Parameter();
  void ask();
 private:
  void inicialize();
};

class Leisure : public Parameter{
public:
  Parameter();
  void ask();
 private:
  void inicialize();
};
**/
