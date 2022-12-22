﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class CustomContentImageScalingConfiguration
  {
    NOT_SET,
    FIT_TO_HEIGHT,
    FIT_TO_WIDTH,
    DO_NOT_SCALE,
    SCALE_TO_VISUAL
  };

namespace CustomContentImageScalingConfigurationMapper
{
AWS_QUICKSIGHT_API CustomContentImageScalingConfiguration GetCustomContentImageScalingConfigurationForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForCustomContentImageScalingConfiguration(CustomContentImageScalingConfiguration value);
} // namespace CustomContentImageScalingConfigurationMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
