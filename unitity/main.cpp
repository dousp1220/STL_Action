#include "unitity.h"
#include <assert.h>

using namespace myStd;
using namespace myStd::rel_ops;
int main()
{
    typedef pair<int, char> myPair;

    myPair pp(1, 'd');

    myPair pp1 = make_pair<int, char>(2, 'b');

    assert(pp != pp1);
    assert(pp < pp1);

    return 0;
}
