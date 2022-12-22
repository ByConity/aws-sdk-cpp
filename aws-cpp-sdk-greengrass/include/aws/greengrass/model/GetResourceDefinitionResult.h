﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class GetResourceDefinitionResult
  {
  public:
    AWS_GREENGRASS_API GetResourceDefinitionResult();
    AWS_GREENGRASS_API GetResourceDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API GetResourceDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The ARN of the definition.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The ARN of the definition.
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * The ARN of the definition.
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * The ARN of the definition.
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * The ARN of the definition.
     */
    inline GetResourceDefinitionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The ARN of the definition.
     */
    inline GetResourceDefinitionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The ARN of the definition.
     */
    inline GetResourceDefinitionResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * The time, in milliseconds since the epoch, when the definition was created.
     */
    inline const Aws::String& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * The time, in milliseconds since the epoch, when the definition was created.
     */
    inline void SetCreationTimestamp(const Aws::String& value) { m_creationTimestamp = value; }

    /**
     * The time, in milliseconds since the epoch, when the definition was created.
     */
    inline void SetCreationTimestamp(Aws::String&& value) { m_creationTimestamp = std::move(value); }

    /**
     * The time, in milliseconds since the epoch, when the definition was created.
     */
    inline void SetCreationTimestamp(const char* value) { m_creationTimestamp.assign(value); }

    /**
     * The time, in milliseconds since the epoch, when the definition was created.
     */
    inline GetResourceDefinitionResult& WithCreationTimestamp(const Aws::String& value) { SetCreationTimestamp(value); return *this;}

    /**
     * The time, in milliseconds since the epoch, when the definition was created.
     */
    inline GetResourceDefinitionResult& WithCreationTimestamp(Aws::String&& value) { SetCreationTimestamp(std::move(value)); return *this;}

    /**
     * The time, in milliseconds since the epoch, when the definition was created.
     */
    inline GetResourceDefinitionResult& WithCreationTimestamp(const char* value) { SetCreationTimestamp(value); return *this;}


    /**
     * The ID of the definition.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the definition.
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * The ID of the definition.
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * The ID of the definition.
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * The ID of the definition.
     */
    inline GetResourceDefinitionResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the definition.
     */
    inline GetResourceDefinitionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the definition.
     */
    inline GetResourceDefinitionResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The time, in milliseconds since the epoch, when the definition was last updated.
     */
    inline const Aws::String& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }

    /**
     * The time, in milliseconds since the epoch, when the definition was last updated.
     */
    inline void SetLastUpdatedTimestamp(const Aws::String& value) { m_lastUpdatedTimestamp = value; }

    /**
     * The time, in milliseconds since the epoch, when the definition was last updated.
     */
    inline void SetLastUpdatedTimestamp(Aws::String&& value) { m_lastUpdatedTimestamp = std::move(value); }

    /**
     * The time, in milliseconds since the epoch, when the definition was last updated.
     */
    inline void SetLastUpdatedTimestamp(const char* value) { m_lastUpdatedTimestamp.assign(value); }

    /**
     * The time, in milliseconds since the epoch, when the definition was last updated.
     */
    inline GetResourceDefinitionResult& WithLastUpdatedTimestamp(const Aws::String& value) { SetLastUpdatedTimestamp(value); return *this;}

    /**
     * The time, in milliseconds since the epoch, when the definition was last updated.
     */
    inline GetResourceDefinitionResult& WithLastUpdatedTimestamp(Aws::String&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}

    /**
     * The time, in milliseconds since the epoch, when the definition was last updated.
     */
    inline GetResourceDefinitionResult& WithLastUpdatedTimestamp(const char* value) { SetLastUpdatedTimestamp(value); return *this;}


    /**
     * The ID of the latest version associated with the definition.
     */
    inline const Aws::String& GetLatestVersion() const{ return m_latestVersion; }

    /**
     * The ID of the latest version associated with the definition.
     */
    inline void SetLatestVersion(const Aws::String& value) { m_latestVersion = value; }

    /**
     * The ID of the latest version associated with the definition.
     */
    inline void SetLatestVersion(Aws::String&& value) { m_latestVersion = std::move(value); }

    /**
     * The ID of the latest version associated with the definition.
     */
    inline void SetLatestVersion(const char* value) { m_latestVersion.assign(value); }

    /**
     * The ID of the latest version associated with the definition.
     */
    inline GetResourceDefinitionResult& WithLatestVersion(const Aws::String& value) { SetLatestVersion(value); return *this;}

    /**
     * The ID of the latest version associated with the definition.
     */
    inline GetResourceDefinitionResult& WithLatestVersion(Aws::String&& value) { SetLatestVersion(std::move(value)); return *this;}

    /**
     * The ID of the latest version associated with the definition.
     */
    inline GetResourceDefinitionResult& WithLatestVersion(const char* value) { SetLatestVersion(value); return *this;}


    /**
     * The ARN of the latest version associated with the definition.
     */
    inline const Aws::String& GetLatestVersionArn() const{ return m_latestVersionArn; }

    /**
     * The ARN of the latest version associated with the definition.
     */
    inline void SetLatestVersionArn(const Aws::String& value) { m_latestVersionArn = value; }

    /**
     * The ARN of the latest version associated with the definition.
     */
    inline void SetLatestVersionArn(Aws::String&& value) { m_latestVersionArn = std::move(value); }

    /**
     * The ARN of the latest version associated with the definition.
     */
    inline void SetLatestVersionArn(const char* value) { m_latestVersionArn.assign(value); }

    /**
     * The ARN of the latest version associated with the definition.
     */
    inline GetResourceDefinitionResult& WithLatestVersionArn(const Aws::String& value) { SetLatestVersionArn(value); return *this;}

    /**
     * The ARN of the latest version associated with the definition.
     */
    inline GetResourceDefinitionResult& WithLatestVersionArn(Aws::String&& value) { SetLatestVersionArn(std::move(value)); return *this;}

    /**
     * The ARN of the latest version associated with the definition.
     */
    inline GetResourceDefinitionResult& WithLatestVersionArn(const char* value) { SetLatestVersionArn(value); return *this;}


    /**
     * The name of the definition.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the definition.
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * The name of the definition.
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * The name of the definition.
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * The name of the definition.
     */
    inline GetResourceDefinitionResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the definition.
     */
    inline GetResourceDefinitionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the definition.
     */
    inline GetResourceDefinitionResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * Tag(s) attached to the resource arn.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * Tag(s) attached to the resource arn.
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * Tag(s) attached to the resource arn.
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * Tag(s) attached to the resource arn.
     */
    inline GetResourceDefinitionResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * Tag(s) attached to the resource arn.
     */
    inline GetResourceDefinitionResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * Tag(s) attached to the resource arn.
     */
    inline GetResourceDefinitionResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * Tag(s) attached to the resource arn.
     */
    inline GetResourceDefinitionResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * Tag(s) attached to the resource arn.
     */
    inline GetResourceDefinitionResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * Tag(s) attached to the resource arn.
     */
    inline GetResourceDefinitionResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Tag(s) attached to the resource arn.
     */
    inline GetResourceDefinitionResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * Tag(s) attached to the resource arn.
     */
    inline GetResourceDefinitionResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * Tag(s) attached to the resource arn.
     */
    inline GetResourceDefinitionResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    Aws::String m_creationTimestamp;

    Aws::String m_id;

    Aws::String m_lastUpdatedTimestamp;

    Aws::String m_latestVersion;

    Aws::String m_latestVersionArn;

    Aws::String m_name;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
