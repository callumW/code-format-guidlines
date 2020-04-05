# C/C++ Style Guidlines
See example.cpp for a simple example of the style I use.

```.clang-format``` is a [clang-format](https://clang.llvm.org/docs/ClangFormat.html) style file containing the rules for spacing, indentation, max
line width etc.

## Naming Conventions/Style
### Variables
Variables should be snake case: ```int my_var = 0;```

### Typedefs (C++ only)
Typedefs should be ```snake_case``` with a ```_t``` identifier:
```
typedef int my_favourite_type_t;
```

### Structs
Structs should be ```snake_case``` and typedef'd, like so:
```
typedef struct my_struct {
    int struct_member;
} my_struct_t;
```

### Classes
Class names should follow a ```CamelCase``` format:
```
class MyClassInCamelCase {
```

Class functions should be ```snake_case```:

```
class MyClassInCamelCase {
    void has_function_in_snake_case();
};
```

Member variables should also be denoted with an ```m_```, like so:

```
class MyClassInCamelCase {
    void has_function_in_snake_case();

    int m_var;
};
```
