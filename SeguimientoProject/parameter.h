#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <cstdio>
#include <cctype>

using namespace std;

class Parameter{
 public:
  Parameter(Data data);
  int getQSize();
  string ask();
 protected:
  vector<string> questions;
  void inicialize();
  string read(bool lim);
  string temp;
  Data data;
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
  string ask(bool holidays);
 private:
  void inicialize();
};

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
