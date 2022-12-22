﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CancelDataQualityRuleRecommendationRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelDataQualityRuleRecommendationRunRequest::CancelDataQualityRuleRecommendationRunRequest() : 
    m_runIdHasBeenSet(false)
{
}

Aws::String CancelDataQualityRuleRecommendationRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_runIdHasBeenSet)
  {
   payload.WithString("RunId", m_runId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CancelDataQualityRuleRecommendationRunRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.CancelDataQualityRuleRecommendationRun"));
  return headers;

}




