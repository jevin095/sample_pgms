#include<iostream>
#include<stdint.h>

struct test_str {

    uint32_t t1;
    uint32_t t2;

};


//class Parent {
//    public :
//        static int temp;
//        int attr1;
//        static int set_temp() {temp = attr1};
//        static int get_temp() {return temp};
//
//}

class Child : public Parent {

}

int main()
{
    void *vtp;
    test_str *tstrp = new test_str;
    tstrp->t1 = 10;
    tstrp->t2 = 5;
    std::cout << "t1 =" << tstrp->t1 <<" t2 = "<< tstrp->t2 <<"\n";
    vtp = tstrp;
    test_str *t2strp;
    t2strp = (test_str *)vtp;
    std::cout << "vt1 =" << t2strp->t1 <<" vt2 = "<< t2strp->t2 <<"\n";
    //vtp = tstrp;
    return 0;
}

