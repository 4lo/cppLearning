#pragma once
//将来用于存储图形信息，等以后用文件进行保存
#include <fstream>
#include "Shape.h"
#include "Bar.h"
#include "Circle.h"
#include "delta.h"
using std::ofstream;

void save(Shape* shape);
