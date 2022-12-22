﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/OutputConfigInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

OutputConfigInput::OutputConfigInput() : 
    m_s3DataHasBeenSet(false)
{
}

OutputConfigInput::OutputConfigInput(JsonView jsonValue) : 
    m_s3DataHasBeenSet(false)
{
  *this = jsonValue;
}

OutputConfigInput& OutputConfigInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Data"))
  {
    m_s3Data = jsonValue.GetObject("S3Data");

    m_s3DataHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputConfigInput::Jsonize() const
{
  JsonValue payload;

  if(m_s3DataHasBeenSet)
  {
   payload.WithObject("S3Data", m_s3Data.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
