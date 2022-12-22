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
  enum class ReferenceLineLabelHorizontalPosition
  {
    NOT_SET,
    LEFT,
    CENTER,
    RIGHT
  };

namespace ReferenceLineLabelHorizontalPositionMapper
{
AWS_QUICKSIGHT_API ReferenceLineLabelHorizontalPosition GetReferenceLineLabelHorizontalPositionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForReferenceLineLabelHorizontalPosition(ReferenceLineLabelHorizontalPosition value);
} // namespace ReferenceLineLabelHorizontalPositionMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
