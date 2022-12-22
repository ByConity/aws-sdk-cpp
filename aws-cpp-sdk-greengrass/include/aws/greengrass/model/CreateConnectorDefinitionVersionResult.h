﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Greengrass
{
namespace Model
{
  class CreateConnectorDefinitionVersionResult
  {
  public:
    AWS_GREENGRASS_API CreateConnectorDefinitionVersionResult();
    AWS_GREENGRASS_API CreateConnectorDefinitionVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API CreateConnectorDefinitionVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The ARN of the version.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The ARN of the version.
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * The ARN of the version.
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * The ARN of the version.
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * The ARN of the version.
     */
    inline CreateConnectorDefinitionVersionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The ARN of the version.
     */
    inline CreateConnectorDefinitionVersionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The ARN of the version.
     */
    inline CreateConnectorDefinitionVersionResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * The time, in milliseconds since the epoch, when the version was created.
     */
    inline const Aws::String& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * The time, in milliseconds since the epoch, when the version was created.
     */
    inline void SetCreationTimestamp(const Aws::String& value) { m_creationTimestamp = value; }

    /**
     * The time, in milliseconds since the epoch, when the version was created.
     */
    inline void SetCreationTimestamp(Aws::String&& value) { m_creationTimestamp = std::move(value); }

    /**
     * The time, in milliseconds since the epoch, when the version was created.
     */
    inline void SetCreationTimestamp(const char* value) { m_creationTimestamp.assign(value); }

    /**
     * The time, in milliseconds since the epoch, when the version was created.
     */
    inline CreateConnectorDefinitionVersionResult& WithCreationTimestamp(const Aws::String& value) { SetCreationTimestamp(value); return *this;}

    /**
     * The time, in milliseconds since the epoch, when the version was created.
     */
    inline CreateConnectorDefinitionVersionResult& WithCreationTimestamp(Aws::String&& value) { SetCreationTimestamp(std::move(value)); return *this;}

    /**
     * The time, in milliseconds since the epoch, when the version was created.
     */
    inline CreateConnectorDefinitionVersionResult& WithCreationTimestamp(const char* value) { SetCreationTimestamp(value); return *this;}


    /**
     * The ID of the parent definition that the version is associated with.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the parent definition that the version is associated with.
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * The ID of the parent definition that the version is associated with.
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * The ID of the parent definition that the version is associated with.
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * The ID of the parent definition that the version is associated with.
     */
    inline CreateConnectorDefinitionVersionResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the parent definition that the version is associated with.
     */
    inline CreateConnectorDefinitionVersionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the parent definition that the version is associated with.
     */
    inline CreateConnectorDefinitionVersionResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The ID of the version.
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * The ID of the version.
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * The ID of the version.
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * The ID of the version.
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * The ID of the version.
     */
    inline CreateConnectorDefinitionVersionResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * The ID of the version.
     */
    inline CreateConnectorDefinitionVersionResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * The ID of the version.
     */
    inline CreateConnectorDefinitionVersionResult& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_creationTimestamp;

    Aws::String m_id;

    Aws::String m_version;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
