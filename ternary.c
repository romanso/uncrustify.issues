#include <stdbool.h>

// indent_ternary_operator = 0 does not prevent from default indentation

static void
foo(bool cond)
{
#if 0
    // *INDENT-OFF*
    // one-liner
    bool var1 = cond ? true : false;

    // indented on one level
    bool var2 = cond
        ? true
        : false;

    // indent_ternary_operator=1 behavior
    bool var3 = cond
                ? true
                : false;

    // indent_ternary_operator=2 behavior
    bool var4 = cond ? true
                     : false;

    // *INDENT-ON*
#endif

    // one-liner
    bool var1 = cond ? true : false;

    bool var2 = cond
                ? true
                : false;

    bool var3 = cond
                ? true
                : false;

    bool var4 = cond ? true
                : false;


}

void
main(void)
{
}
