/*
 * threadt.h
 *
 *  Created on: 26-Mar-2020
 *      Author: Shree
 */

#include "threadt.h"
#include<iostream>

namespace dev_core {

thread_t::~thread_t() {}

void* thread_t::thread_fun(void* arg){

	thread_t *instance =(thread_t *)arg;
	instance->ThreadRun();

}

void thread_t::Start() {
	pthread_create(&ptid, NULL, thread_t::thread_fun, this); 
}

void thread_t::Terminate() { pthread_cancel(ptid); }

} /* namespace dev_core */
