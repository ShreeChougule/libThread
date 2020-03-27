/*
 * threadt.h
 *
 *  Created on: 26-Mar-2020
 *      Author: Shree
 */

#ifndef THREADT_H_
#define THREADT_H_

#include <pthread.h>

namespace dev_core {

class thread_t {
 public:
  virtual ~thread_t();
  virtual int ThreadRun() = 0;
  static void* thread_fun(void*);
  virtual void Start();
  virtual void Terminate();

 private:
  pthread_t ptid;
};

} /* namespace dev_core */

#endif /* THREADT_H_ */
