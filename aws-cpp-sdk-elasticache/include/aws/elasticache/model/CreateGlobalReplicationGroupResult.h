﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/GlobalReplicationGroup.h>
#include <aws/elasticache/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{
  class CreateGlobalReplicationGroupResult
  {
  public:
    AWS_ELASTICACHE_API CreateGlobalReplicationGroupResult();
    AWS_ELASTICACHE_API CreateGlobalReplicationGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API CreateGlobalReplicationGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const GlobalReplicationGroup& GetGlobalReplicationGroup() const{ return m_globalReplicationGroup; }

    
    inline void SetGlobalReplicationGroup(const GlobalReplicationGroup& value) { m_globalReplicationGroup = value; }

    
    inline void SetGlobalReplicationGroup(GlobalReplicationGroup&& value) { m_globalReplicationGroup = std::move(value); }

    
    inline CreateGlobalReplicationGroupResult& WithGlobalReplicationGroup(const GlobalReplicationGroup& value) { SetGlobalReplicationGroup(value); return *this;}

    
    inline CreateGlobalReplicationGroupResult& WithGlobalReplicationGroup(GlobalReplicationGroup&& value) { SetGlobalReplicationGroup(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateGlobalReplicationGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateGlobalReplicationGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    GlobalReplicationGroup m_globalReplicationGroup;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
