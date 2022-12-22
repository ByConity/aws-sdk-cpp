﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{
  enum class SourceStatus
  {
    NOT_SET,
    ACTIVE,
    DEACTIVATED,
    PENDING
  };

namespace SourceStatusMapper
{
AWS_SECURITYLAKE_API SourceStatus GetSourceStatusForName(const Aws::String& name);

AWS_SECURITYLAKE_API Aws::String GetNameForSourceStatus(SourceStatus value);
} // namespace SourceStatusMapper
} // namespace Model
} // namespace SecurityLake
} // namespace Aws
