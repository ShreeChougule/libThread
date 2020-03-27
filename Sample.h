/*
 * Sample.h
 *
 *  Created on: 26-Mar-2020
 *      Author: Shree
 */

#ifndef SAMPLE_H_
#define SAMPLE_H_

#include "threadt.h"

namespace dev_core {

class Sample : public thread_t {
 public:
  Sample();
  virtual ~Sample();
  Sample(const Sample &other);
  Sample(Sample &&other);
  Sample &operator=(const Sample &other);
  Sample &operator=(Sample &&other);
  int ThreadRun();
};

} /* namespace dev_core */

#endif /* SAMPLE_H_ */
