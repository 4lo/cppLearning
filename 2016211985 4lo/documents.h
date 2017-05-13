#pragma once
//将来用于存储图形信息，等以后用文件进行保存
#include <fstream>
#include <string>
#include "Coordinate.h"
#include "Color.h"
#include "Bar.h"
#include <graphics.h>
using std::string;
using std::ifstream;
using namespace std;

void readfile(string a, int number);