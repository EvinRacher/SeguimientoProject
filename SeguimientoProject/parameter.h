#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <cstdio>
#include <cctype>
#include "data.h"

using namespace std;

class Parameter{
 public:
  Parameter(Data dat);
  Parameter();
  int getQSize();
  string ask();
 protected:
  vector<string> questions;
  void inicialize();
  string read(bool lim);
  string temp;
  Data data;
  string observation(string msg, bool cinq);
};

class Health : public Parameter {
 public:
  Health();
  Health(Data data);
  string ask();
 private:
  void inicialize();
};

class Education : public Parameter{
public:
  Education();
  Education(Data data);
  string ask();
 private:
  void inicialize();
};

class Feeding : public Parameter{
public:
  Feeding();
  Feeding(Data data);
  string ask();
 private:
  void inicialize();
};

class Sleep : public Parameter{
public:
  Sleep();
  Sleep(Data data);
  string ask();
 private:
  void inicialize();
};

class Hygiene : public Parameter{
public:
  Hygiene();
  Hygiene(Data data);
  string ask();
 private:
  void inicialize();
};

class Leisure : public Parameter{
public:
  Leisure();
  Leisure(Data data);
  string ask();
 private:
  void inicialize();
};
