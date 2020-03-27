/*
 * Sample.cpp
 *
 *  Created on: 26-Mar-2020
 *      Author: Shree
 */

#include "Sample.h"

#include <iostream>

namespace dev_core {

Sample::Sample() {  // TODO Auto-generated constructor stub
  this->Start();
}

Sample::~Sample() {
  // TODO Auto-generated destructor stub
}

Sample::Sample(const Sample &other) {
  // TODO Auto-generated constructor stub
}

Sample::Sample(Sample &&other) {
  // TODO Auto-generated constructor stub
}

Sample &Sample::operator=(const Sample &other) {
  // TODO Auto-generated method stub
}

Sample &Sample::operator=(Sample &&other) {
  // TODO Auto-generated method stub
}

int Sample::ThreadRun() {
  std::cout << "\n\t\t ThreadRun() Called !\n\n";
  return 0;
}

} /* namespace dev_core */
