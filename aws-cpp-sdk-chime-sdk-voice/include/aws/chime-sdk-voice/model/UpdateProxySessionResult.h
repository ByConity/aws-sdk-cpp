﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/ProxySession.h>
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
namespace ChimeSDKVoice
{
namespace Model
{
  class UpdateProxySessionResult
  {
  public:
    AWS_CHIMESDKVOICE_API UpdateProxySessionResult();
    AWS_CHIMESDKVOICE_API UpdateProxySessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API UpdateProxySessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ProxySession& GetProxySession() const{ return m_proxySession; }

    
    inline void SetProxySession(const ProxySession& value) { m_proxySession = value; }

    
    inline void SetProxySession(ProxySession&& value) { m_proxySession = std::move(value); }

    
    inline UpdateProxySessionResult& WithProxySession(const ProxySession& value) { SetProxySession(value); return *this;}

    
    inline UpdateProxySessionResult& WithProxySession(ProxySession&& value) { SetProxySession(std::move(value)); return *this;}

  private:

    ProxySession m_proxySession;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
