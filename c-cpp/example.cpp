#include <stdio>

namespace MyNamespace {
// No indent in namespace body

template<class T>
class MyContainer {
// Note: no indentation for public/private
public:
    MyContainer(T& val)
        : m_mem(val)
    {
    };

    T get_val() const
    {
        return m_mem;
    }

private:
    T m_mem;
};
} // namespace MyNamespace


int main(int argv, char** argv)
{   // Braces for functions go on new line
    if (argv > 1) { // Space between control keyword (if, else if, for, do, while) and ()
                    // and space between ) {
        std::cout << "Arguments:" << std::endl;
        for (int i = 0; i < argv; i++) {
            std::cout << "Arg " << i << ": " << argv[i] << std::endl;
        }
    }
    else {  // else goes on new line
        std::cout << "No arguments passed" << std::endl;
    }

    MyContainer<int> my_int_container{354};

    std::cout << "MyContainer holds: " << my_int_container.get_val() << std::endl;

    return 0;
}
