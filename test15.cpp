#include<iostream>


struct Instruction {
   void foo()         { std::cout << "Base::foo\n"; }
   virtual void randomize() {};
   virtual void do_randomize() = 0; // { std::cout << "Base::do_randomize\n"; }
};

struct rv_MvBase : Instruction {
   void foo()       { std::cout << "rv_MvBase::foo\n"; }
   void randomize()       { std::cout << "rv_MvBase::do_randomize\n"; }
   void do_randomize()  { rv_MvBase::do_randomize();}
};


struct Derived2 : rv_MvBase {
   void foo()         { std::cout << "Derived2::foo\n"; }
   void do_randomize()         { std::cout << "Derived2::do_randomize\n"; }
};

int main() {
    Derived2 d;
    Instruction* b = &d;
    b->foo(); // calls Base::foo
    b->randomize(); // calls rv_MvBase::bar
}
