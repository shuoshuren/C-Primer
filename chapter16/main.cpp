#include <iostream>
#include "smartptr.h"
#include <memory>

/**
 * 测试智能指针
 */
void test_smart_ptr(){
    std::auto_ptr<Report>pa(new Report("auto ptr"));
    pa->content();
    std::cout<<std::endl;

    std::unique_ptr<Report>pu(new Report("unique ptr"));
    pu->content();
    std::cout<<std::endl;

    std::shared_ptr<Report>ps(new Report("shared ptr"));
    ps->content();
    std::cout<<std::endl;

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    test_smart_ptr();
    return 0;
}