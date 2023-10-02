// Copyright (C) 2018-2023 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#include <vector>

#include "single_layer_tests/space_to_batch.hpp"
#include "common_test_utils/test_constants.hpp"

using namespace LayerTestsDefinitions;

namespace {

auto stb_only_test_cases = []() {
    return std::vector<spaceToBatchParamsTuple>{
        spaceToBatchParamsTuple({1, 2, 2},
                                {0, 0, 0},
                                {0, 0, 0},
                                {1, 2, 2},
                                InferenceEngine::Precision::FP32,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Layout::ANY,
                                InferenceEngine::Layout::ANY,
                                ov::test::utils::DEVICE_GPU),
        spaceToBatchParamsTuple({1, 1, 2, 2},
                                {0, 0, 0, 0},
                                {0, 0, 0, 0},
                                {1, 1, 2, 2},
                                InferenceEngine::Precision::FP32,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Layout::ANY,
                                InferenceEngine::Layout::ANY,
                                ov::test::utils::DEVICE_GPU),
        spaceToBatchParamsTuple({1, 1, 2, 2},
                                {0, 0, 0, 0},
                                {0, 0, 0, 0},
                                {1, 3, 2, 2},
                                InferenceEngine::Precision::FP32,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Layout::ANY,
                                InferenceEngine::Layout::ANY,
                                ov::test::utils::DEVICE_GPU),
        spaceToBatchParamsTuple({1, 1, 2, 2},
                                {0, 0, 0, 0},
                                {0, 0, 0, 0},
                                {1, 1, 4, 4},
                                InferenceEngine::Precision::FP32,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Layout::ANY,
                                InferenceEngine::Layout::ANY,
                                ov::test::utils::DEVICE_GPU),
        spaceToBatchParamsTuple({1, 1, 2, 2},
                                {0, 0, 0, 2},
                                {0, 0, 0, 0},
                                {2, 1, 2, 4},
                                InferenceEngine::Precision::FP32,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Layout::ANY,
                                InferenceEngine::Layout::ANY,
                                ov::test::utils::DEVICE_GPU),
        spaceToBatchParamsTuple({1, 1, 3, 2, 2},
                                {0, 0, 1, 0, 3},
                                {0, 0, 2, 0, 0},
                                {1, 1, 3, 2, 1},
                                InferenceEngine::Precision::FP32,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Layout::ANY,
                                InferenceEngine::Layout::ANY,
                                ov::test::utils::DEVICE_GPU),
        spaceToBatchParamsTuple({1, 1, 2, 2},
                                {0, 0, 0, 0},
                                {0, 0, 0, 0},
                                {1, 1, 2, 2},
                                InferenceEngine::Precision::I8,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Layout::ANY,
                                InferenceEngine::Layout::ANY,
                                ov::test::utils::DEVICE_GPU),
        spaceToBatchParamsTuple({1, 1, 2, 2},
                                {0, 0, 0, 0},
                                {0, 0, 0, 0},
                                {1, 3, 2, 2},
                                InferenceEngine::Precision::I8,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Layout::ANY,
                                InferenceEngine::Layout::ANY,
                                ov::test::utils::DEVICE_GPU),
        spaceToBatchParamsTuple({1, 1, 2, 2},
                                {0, 0, 0, 0},
                                {0, 0, 0, 0},
                                {1, 1, 4, 4},
                                InferenceEngine::Precision::I8,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Layout::ANY,
                                InferenceEngine::Layout::ANY,
                                ov::test::utils::DEVICE_GPU),
        spaceToBatchParamsTuple({1, 1, 2, 2},
                                {0, 0, 0, 2},
                                {0, 0, 0, 0},
                                {2, 1, 2, 4},
                                InferenceEngine::Precision::I8,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Layout::ANY,
                                InferenceEngine::Layout::ANY,
                                ov::test::utils::DEVICE_GPU),
        spaceToBatchParamsTuple({1, 1, 3, 2, 2},
                                {0, 0, 1, 0, 3},
                                {0, 0, 2, 0, 0},
                                {1, 1, 3, 2, 1},
                                InferenceEngine::Precision::I8,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Layout::ANY,
                                InferenceEngine::Layout::ANY,
                                ov::test::utils::DEVICE_GPU),
        spaceToBatchParamsTuple({1, 1, 2, 2},
                                {0, 0, 0, 0},
                                {0, 0, 0, 0},
                                {1, 1, 2, 2},
                                InferenceEngine::Precision::U8,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Layout::ANY,
                                InferenceEngine::Layout::ANY,
                                ov::test::utils::DEVICE_GPU),
        spaceToBatchParamsTuple({1, 1, 2, 2},
                                {0, 0, 0, 0},
                                {0, 0, 0, 0},
                                {1, 3, 2, 2},
                                InferenceEngine::Precision::U8,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Layout::ANY,
                                InferenceEngine::Layout::ANY,
                                ov::test::utils::DEVICE_GPU),
        spaceToBatchParamsTuple({1, 1, 2, 2},
                                {0, 0, 0, 0},
                                {0, 0, 0, 0},
                                {1, 1, 4, 4},
                                InferenceEngine::Precision::U8,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Layout::ANY,
                                InferenceEngine::Layout::ANY,
                                ov::test::utils::DEVICE_GPU),
        spaceToBatchParamsTuple({1, 1, 2, 2},
                                {0, 0, 0, 2},
                                {0, 0, 0, 0},
                                {2, 1, 2, 4},
                                InferenceEngine::Precision::U8,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Layout::ANY,
                                InferenceEngine::Layout::ANY,
                                ov::test::utils::DEVICE_GPU),
        spaceToBatchParamsTuple({1, 1, 3, 2, 2},
                                {0, 0, 1, 0, 3},
                                {0, 0, 2, 0, 0},
                                {1, 1, 3, 2, 1},
                                InferenceEngine::Precision::U8,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Precision::UNSPECIFIED,
                                InferenceEngine::Layout::ANY,
                                InferenceEngine::Layout::ANY,
                                ov::test::utils::DEVICE_GPU),
    };
};

INSTANTIATE_TEST_SUITE_P(smoke_CLDNN, SpaceToBatchLayerTest, ::testing::ValuesIn(stb_only_test_cases()),
                        SpaceToBatchLayerTest::getTestCaseName);
}  // namespace