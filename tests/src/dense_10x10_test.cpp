/* Autogenerated file, DO NOT EDIT */
#include "test_util.h"

TEST_CASE("dense_10x10")
{
    pt::Tensor in{10};
    in.setData({0.981756627559661865234375, 0.89302122592926025390625, 0.759348809719085693359375, 0.65112054347991943359375, 0.0396835021674633026123047, 0.8138763904571533203125, 0.76257312297821044921875, 0.4552824795246124267578125, 0.531826436519622802734375, 0.1093360707163810729980469});

    pt::Tensor expected{1};
    expected.setData({1.03432023525238037109375});

    testModel(in, expected, "dense_10x10", 1e-6f);
}
