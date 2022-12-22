﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/connectcampaigns/ConnectCampaignsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConnectCampaigns
{
namespace Model
{

  /**
   * <p>The request for DeleteInstanceOnboardingJob API.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/DeleteInstanceOnboardingJobRequest">AWS
   * API Reference</a></p>
   */
  class DeleteInstanceOnboardingJobRequest : public ConnectCampaignsRequest
  {
  public:
    AWS_CONNECTCAMPAIGNS_API DeleteInstanceOnboardingJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteInstanceOnboardingJob"; }

    AWS_CONNECTCAMPAIGNS_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetConnectInstanceId() const{ return m_connectInstanceId; }

    
    inline bool ConnectInstanceIdHasBeenSet() const { return m_connectInstanceIdHasBeenSet; }

    
    inline void SetConnectInstanceId(const Aws::String& value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId = value; }

    
    inline void SetConnectInstanceId(Aws::String&& value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId = std::move(value); }

    
    inline void SetConnectInstanceId(const char* value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId.assign(value); }

    
    inline DeleteInstanceOnboardingJobRequest& WithConnectInstanceId(const Aws::String& value) { SetConnectInstanceId(value); return *this;}

    
    inline DeleteInstanceOnboardingJobRequest& WithConnectInstanceId(Aws::String&& value) { SetConnectInstanceId(std::move(value)); return *this;}

    
    inline DeleteInstanceOnboardingJobRequest& WithConnectInstanceId(const char* value) { SetConnectInstanceId(value); return *this;}

  private:

    Aws::String m_connectInstanceId;
    bool m_connectInstanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
