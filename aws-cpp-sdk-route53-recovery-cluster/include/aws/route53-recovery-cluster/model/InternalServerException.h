﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-cluster/Route53RecoveryCluster_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Route53RecoveryCluster
{
namespace Model
{

  /**
   * <p>There was an unexpected error during processing of the request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-cluster-2019-12-02/InternalServerException">AWS
   * API Reference</a></p>
   */
  class InternalServerException
  {
  public:
    AWS_ROUTE53RECOVERYCLUSTER_API InternalServerException();
    AWS_ROUTE53RECOVERYCLUSTER_API InternalServerException(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCLUSTER_API InternalServerException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCLUSTER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline InternalServerException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline InternalServerException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline InternalServerException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline int GetRetryAfterSeconds() const{ return m_retryAfterSeconds; }

    
    inline bool RetryAfterSecondsHasBeenSet() const { return m_retryAfterSecondsHasBeenSet; }

    
    inline void SetRetryAfterSeconds(int value) { m_retryAfterSecondsHasBeenSet = true; m_retryAfterSeconds = value; }

    
    inline InternalServerException& WithRetryAfterSeconds(int value) { SetRetryAfterSeconds(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    int m_retryAfterSeconds;
    bool m_retryAfterSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryCluster
} // namespace Aws
