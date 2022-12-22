﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{
  enum class AlgorithmNameCloudRemoval
  {
    NOT_SET,
    INTERPOLATION
  };

namespace AlgorithmNameCloudRemovalMapper
{
AWS_SAGEMAKERGEOSPATIAL_API AlgorithmNameCloudRemoval GetAlgorithmNameCloudRemovalForName(const Aws::String& name);

AWS_SAGEMAKERGEOSPATIAL_API Aws::String GetNameForAlgorithmNameCloudRemoval(AlgorithmNameCloudRemoval value);
} // namespace AlgorithmNameCloudRemovalMapper
} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
