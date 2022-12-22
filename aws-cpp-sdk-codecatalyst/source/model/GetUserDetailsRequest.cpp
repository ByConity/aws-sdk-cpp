﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/GetUserDetailsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeCatalyst::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetUserDetailsRequest::GetUserDetailsRequest() : 
    m_idHasBeenSet(false),
    m_userNameHasBeenSet(false)
{
}

Aws::String GetUserDetailsRequest::SerializePayload() const
{
  return {};
}

void GetUserDetailsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_idHasBeenSet)
    {
      ss << m_id;
      uri.AddQueryStringParameter("id", ss.str());
      ss.str("");
    }

    if(m_userNameHasBeenSet)
    {
      ss << m_userName;
      uri.AddQueryStringParameter("userName", ss.str());
      ss.str("");
    }

}



