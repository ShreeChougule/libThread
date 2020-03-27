/*
 * threadt.h
 *
 *  Created on: 26-Mar-2020
 *      Author: Shree
 */

#include "threadt.h"

namespace dev_core {

thread_t::~thread_t() {}

void thread_t::Start() { pthread_create(&ptid, NULL, &this->ThreadRun, NULL); }

void thread_t::Terminate() { pthread_cancel(ptid); }

} /* namespace dev_core */
