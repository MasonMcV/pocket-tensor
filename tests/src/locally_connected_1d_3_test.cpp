/* Autogenerated file, DO NOT EDIT */
#include "test_util.h"

TEST_CASE("locally_connected_1d_3")
{
    pt::Tensor in{3, 1};
    in.setData({0.1436859667301177978515625, 0.375406324863433837890625, 0.2284090518951416015625});

    pt::Tensor expected{1};
    expected.setData({0.1469735950231552124023438});

    testModel(in, expected, "locally_connected_1d_3", 1e-6f);
}
