/* Autogenerated file, DO NOT EDIT */
#include "test_util.h"

TEST_CASE("dense_2x2")
{
    pt::Tensor in{2};
    in.setData({0.1021352335810661315917969, 0.2887178361415863037109375});

    pt::Tensor expected{1};
    expected.setData({-0.2430631071329116821289062});

    testModel(in, expected, "dense_2x2", 1e-6f);
}
