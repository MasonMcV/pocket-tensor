/* Autogenerated file, DO NOT EDIT */
#include "test_util.h"

TEST_CASE("conv1d_2")
{
    pt::Tensor in{2, 1};
    in.setData({0.52279603481292724609375, 0.161937892436981201171875});

    pt::Tensor expected{1};
    expected.setData({-0.26636421680450439453125});

    testModel(in, expected, "conv1d_2", 1e-6f);
}
