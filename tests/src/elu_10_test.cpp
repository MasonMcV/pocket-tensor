/* Autogenerated file, DO NOT EDIT */
#include "test_util.h"

TEST_CASE("elu_10")
{
    pt::Tensor in{10};
    in.setData({0.2785461246967315673828125, 0.5723898410797119140625, 0.3422894179821014404296875, 0.839160978794097900390625, 0.685912787914276123046875, 0.816127836704254150390625, 0.1542460620403289794921875, 0.18519365787506103515625, 0.54259479045867919921875, 0.0613982602953910827636719});

    pt::Tensor expected{1};
    expected.setData({0.3744644820690155029296875});

    testModel(in, expected, "elu_10", 1e-6f);
}
