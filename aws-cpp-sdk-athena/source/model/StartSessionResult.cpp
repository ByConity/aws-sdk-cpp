﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/StartSessionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartSessionResult::StartSessionResult() : 
    m_state(SessionState::NOT_SET)
{
}

StartSessionResult::StartSessionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(SessionState::NOT_SET)
{
  *this = result;
}

StartSessionResult& StartSessionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SessionId"))
  {
    m_sessionId = jsonValue.GetString("SessionId");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = SessionStateMapper::GetSessionStateForName(jsonValue.GetString("State"));

  }



  return *this;
}
