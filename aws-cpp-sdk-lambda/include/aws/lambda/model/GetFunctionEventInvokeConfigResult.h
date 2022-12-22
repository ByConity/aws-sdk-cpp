﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/DestinationConfig.h>
#include <utility>

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
namespace Lambda
{
namespace Model
{
  class GetFunctionEventInvokeConfigResult
  {
  public:
    AWS_LAMBDA_API GetFunctionEventInvokeConfigResult();
    AWS_LAMBDA_API GetFunctionEventInvokeConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API GetFunctionEventInvokeConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The date and time that the configuration was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>The date and time that the configuration was last updated.</p>
     */
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModified = value; }

    /**
     * <p>The date and time that the configuration was last updated.</p>
     */
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModified = std::move(value); }

    /**
     * <p>The date and time that the configuration was last updated.</p>
     */
    inline GetFunctionEventInvokeConfigResult& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}

    /**
     * <p>The date and time that the configuration was last updated.</p>
     */
    inline GetFunctionEventInvokeConfigResult& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the function.</p>
     */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the function.</p>
     */
    inline void SetFunctionArn(const Aws::String& value) { m_functionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the function.</p>
     */
    inline void SetFunctionArn(Aws::String&& value) { m_functionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the function.</p>
     */
    inline void SetFunctionArn(const char* value) { m_functionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the function.</p>
     */
    inline GetFunctionEventInvokeConfigResult& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the function.</p>
     */
    inline GetFunctionEventInvokeConfigResult& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the function.</p>
     */
    inline GetFunctionEventInvokeConfigResult& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}


    /**
     * <p>The maximum number of times to retry when the function returns an error.</p>
     */
    inline int GetMaximumRetryAttempts() const{ return m_maximumRetryAttempts; }

    /**
     * <p>The maximum number of times to retry when the function returns an error.</p>
     */
    inline void SetMaximumRetryAttempts(int value) { m_maximumRetryAttempts = value; }

    /**
     * <p>The maximum number of times to retry when the function returns an error.</p>
     */
    inline GetFunctionEventInvokeConfigResult& WithMaximumRetryAttempts(int value) { SetMaximumRetryAttempts(value); return *this;}


    /**
     * <p>The maximum age of a request that Lambda sends to a function for
     * processing.</p>
     */
    inline int GetMaximumEventAgeInSeconds() const{ return m_maximumEventAgeInSeconds; }

    /**
     * <p>The maximum age of a request that Lambda sends to a function for
     * processing.</p>
     */
    inline void SetMaximumEventAgeInSeconds(int value) { m_maximumEventAgeInSeconds = value; }

    /**
     * <p>The maximum age of a request that Lambda sends to a function for
     * processing.</p>
     */
    inline GetFunctionEventInvokeConfigResult& WithMaximumEventAgeInSeconds(int value) { SetMaximumEventAgeInSeconds(value); return *this;}


    /**
     * <p>A destination for events after they have been sent to a function for
     * processing.</p> <p class="title"> <b>Destinations</b> </p> <ul> <li> <p>
     * <b>Function</b> - The Amazon Resource Name (ARN) of a Lambda function.</p> </li>
     * <li> <p> <b>Queue</b> - The ARN of an SQS queue.</p> </li> <li> <p> <b>Topic</b>
     * - The ARN of an SNS topic.</p> </li> <li> <p> <b>Event Bus</b> - The ARN of an
     * Amazon EventBridge event bus.</p> </li> </ul>
     */
    inline const DestinationConfig& GetDestinationConfig() const{ return m_destinationConfig; }

    /**
     * <p>A destination for events after they have been sent to a function for
     * processing.</p> <p class="title"> <b>Destinations</b> </p> <ul> <li> <p>
     * <b>Function</b> - The Amazon Resource Name (ARN) of a Lambda function.</p> </li>
     * <li> <p> <b>Queue</b> - The ARN of an SQS queue.</p> </li> <li> <p> <b>Topic</b>
     * - The ARN of an SNS topic.</p> </li> <li> <p> <b>Event Bus</b> - The ARN of an
     * Amazon EventBridge event bus.</p> </li> </ul>
     */
    inline void SetDestinationConfig(const DestinationConfig& value) { m_destinationConfig = value; }

    /**
     * <p>A destination for events after they have been sent to a function for
     * processing.</p> <p class="title"> <b>Destinations</b> </p> <ul> <li> <p>
     * <b>Function</b> - The Amazon Resource Name (ARN) of a Lambda function.</p> </li>
     * <li> <p> <b>Queue</b> - The ARN of an SQS queue.</p> </li> <li> <p> <b>Topic</b>
     * - The ARN of an SNS topic.</p> </li> <li> <p> <b>Event Bus</b> - The ARN of an
     * Amazon EventBridge event bus.</p> </li> </ul>
     */
    inline void SetDestinationConfig(DestinationConfig&& value) { m_destinationConfig = std::move(value); }

    /**
     * <p>A destination for events after they have been sent to a function for
     * processing.</p> <p class="title"> <b>Destinations</b> </p> <ul> <li> <p>
     * <b>Function</b> - The Amazon Resource Name (ARN) of a Lambda function.</p> </li>
     * <li> <p> <b>Queue</b> - The ARN of an SQS queue.</p> </li> <li> <p> <b>Topic</b>
     * - The ARN of an SNS topic.</p> </li> <li> <p> <b>Event Bus</b> - The ARN of an
     * Amazon EventBridge event bus.</p> </li> </ul>
     */
    inline GetFunctionEventInvokeConfigResult& WithDestinationConfig(const DestinationConfig& value) { SetDestinationConfig(value); return *this;}

    /**
     * <p>A destination for events after they have been sent to a function for
     * processing.</p> <p class="title"> <b>Destinations</b> </p> <ul> <li> <p>
     * <b>Function</b> - The Amazon Resource Name (ARN) of a Lambda function.</p> </li>
     * <li> <p> <b>Queue</b> - The ARN of an SQS queue.</p> </li> <li> <p> <b>Topic</b>
     * - The ARN of an SNS topic.</p> </li> <li> <p> <b>Event Bus</b> - The ARN of an
     * Amazon EventBridge event bus.</p> </li> </ul>
     */
    inline GetFunctionEventInvokeConfigResult& WithDestinationConfig(DestinationConfig&& value) { SetDestinationConfig(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_lastModified;

    Aws::String m_functionArn;

    int m_maximumRetryAttempts;

    int m_maximumEventAgeInSeconds;

    DestinationConfig m_destinationConfig;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
