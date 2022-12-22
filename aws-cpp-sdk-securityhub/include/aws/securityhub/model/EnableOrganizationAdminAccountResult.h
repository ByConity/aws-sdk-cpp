﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{
  class EnableOrganizationAdminAccountResult
  {
  public:
    AWS_SECURITYHUB_API EnableOrganizationAdminAccountResult();
    AWS_SECURITYHUB_API EnableOrganizationAdminAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API EnableOrganizationAdminAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
