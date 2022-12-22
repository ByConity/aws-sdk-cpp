﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/WorkSpacesWebRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   */
  class UpdateUserAccessLoggingSettingsRequest : public WorkSpacesWebRequest
  {
  public:
    AWS_WORKSPACESWEB_API UpdateUserAccessLoggingSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUserAccessLoggingSettings"; }

    AWS_WORKSPACESWEB_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline UpdateUserAccessLoggingSettingsRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline UpdateUserAccessLoggingSettingsRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline UpdateUserAccessLoggingSettingsRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The ARN of the Kinesis stream.</p>
     */
    inline const Aws::String& GetKinesisStreamArn() const{ return m_kinesisStreamArn; }

    /**
     * <p>The ARN of the Kinesis stream.</p>
     */
    inline bool KinesisStreamArnHasBeenSet() const { return m_kinesisStreamArnHasBeenSet; }

    /**
     * <p>The ARN of the Kinesis stream.</p>
     */
    inline void SetKinesisStreamArn(const Aws::String& value) { m_kinesisStreamArnHasBeenSet = true; m_kinesisStreamArn = value; }

    /**
     * <p>The ARN of the Kinesis stream.</p>
     */
    inline void SetKinesisStreamArn(Aws::String&& value) { m_kinesisStreamArnHasBeenSet = true; m_kinesisStreamArn = std::move(value); }

    /**
     * <p>The ARN of the Kinesis stream.</p>
     */
    inline void SetKinesisStreamArn(const char* value) { m_kinesisStreamArnHasBeenSet = true; m_kinesisStreamArn.assign(value); }

    /**
     * <p>The ARN of the Kinesis stream.</p>
     */
    inline UpdateUserAccessLoggingSettingsRequest& WithKinesisStreamArn(const Aws::String& value) { SetKinesisStreamArn(value); return *this;}

    /**
     * <p>The ARN of the Kinesis stream.</p>
     */
    inline UpdateUserAccessLoggingSettingsRequest& WithKinesisStreamArn(Aws::String&& value) { SetKinesisStreamArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Kinesis stream.</p>
     */
    inline UpdateUserAccessLoggingSettingsRequest& WithKinesisStreamArn(const char* value) { SetKinesisStreamArn(value); return *this;}


    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline const Aws::String& GetUserAccessLoggingSettingsArn() const{ return m_userAccessLoggingSettingsArn; }

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline bool UserAccessLoggingSettingsArnHasBeenSet() const { return m_userAccessLoggingSettingsArnHasBeenSet; }

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline void SetUserAccessLoggingSettingsArn(const Aws::String& value) { m_userAccessLoggingSettingsArnHasBeenSet = true; m_userAccessLoggingSettingsArn = value; }

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline void SetUserAccessLoggingSettingsArn(Aws::String&& value) { m_userAccessLoggingSettingsArnHasBeenSet = true; m_userAccessLoggingSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline void SetUserAccessLoggingSettingsArn(const char* value) { m_userAccessLoggingSettingsArnHasBeenSet = true; m_userAccessLoggingSettingsArn.assign(value); }

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline UpdateUserAccessLoggingSettingsRequest& WithUserAccessLoggingSettingsArn(const Aws::String& value) { SetUserAccessLoggingSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline UpdateUserAccessLoggingSettingsRequest& WithUserAccessLoggingSettingsArn(Aws::String&& value) { SetUserAccessLoggingSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline UpdateUserAccessLoggingSettingsRequest& WithUserAccessLoggingSettingsArn(const char* value) { SetUserAccessLoggingSettingsArn(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_kinesisStreamArn;
    bool m_kinesisStreamArnHasBeenSet = false;

    Aws::String m_userAccessLoggingSettingsArn;
    bool m_userAccessLoggingSettingsArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
