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
  enum class VectorEnrichmentJobDocumentType
  {
    NOT_SET,
    CSV
  };

namespace VectorEnrichmentJobDocumentTypeMapper
{
AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobDocumentType GetVectorEnrichmentJobDocumentTypeForName(const Aws::String& name);

AWS_SAGEMAKERGEOSPATIAL_API Aws::String GetNameForVectorEnrichmentJobDocumentType(VectorEnrichmentJobDocumentType value);
} // namespace VectorEnrichmentJobDocumentTypeMapper
} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
