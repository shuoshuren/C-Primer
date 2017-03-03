//
// Created by xiao on 2017/1/13.
//

#include <cstdlib>
#include "Customer.h"

/**
 * 设置到达的时间
 * @param when
 */
void Customer::set(long when) {
    processTime = std::rand() %3 +1;
    arrive = when;
}
