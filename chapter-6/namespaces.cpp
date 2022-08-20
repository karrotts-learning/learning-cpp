#include <iostream>
#include <cstdlib>

namespace foo
{
    void bar() {
        std::cout << "foobar" << endl;
    }
} // namespace name

int main() {
    foo::bar();
    return EXIT_SUCCESS;
}
