/* Autogenerated file, DO NOT EDIT */
#include "test_util.h"

TEST_CASE("dense_relu_10")
{
    pt::Tensor in{10};
    in.setData({0.90458285808563232421875, 0.525757491588592529296875, 0.545456469058990478515625, 0.2269996106624603271484375, 0.0464008301496505737304688, 0.1258080154657363891601562, 0.2151256948709487915039062, 0.87339341640472412109375, 0.988328635692596435546875, 0.0177662484347820281982422});

    pt::Tensor expected{10};
    expected.setData({0., 0., 0., 0., 0.2561261355876922607421875, 0.2268896251916885375976562, 0., 0., 0.4734426438808441162109375, 0.});

    testModel(in, expected, "dense_relu_10", 1e-6f);
}
