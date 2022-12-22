﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The connector-specific profile properties required by Dynatrace.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DynatraceConnectorProfileProperties">AWS
   * API Reference</a></p>
   */
  class DynatraceConnectorProfileProperties
  {
  public:
    AWS_APPFLOW_API DynatraceConnectorProfileProperties();
    AWS_APPFLOW_API DynatraceConnectorProfileProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API DynatraceConnectorProfileProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The location of the Dynatrace resource. </p>
     */
    inline const Aws::String& GetInstanceUrl() const{ return m_instanceUrl; }

    /**
     * <p> The location of the Dynatrace resource. </p>
     */
    inline bool InstanceUrlHasBeenSet() const { return m_instanceUrlHasBeenSet; }

    /**
     * <p> The location of the Dynatrace resource. </p>
     */
    inline void SetInstanceUrl(const Aws::String& value) { m_instanceUrlHasBeenSet = true; m_instanceUrl = value; }

    /**
     * <p> The location of the Dynatrace resource. </p>
     */
    inline void SetInstanceUrl(Aws::String&& value) { m_instanceUrlHasBeenSet = true; m_instanceUrl = std::move(value); }

    /**
     * <p> The location of the Dynatrace resource. </p>
     */
    inline void SetInstanceUrl(const char* value) { m_instanceUrlHasBeenSet = true; m_instanceUrl.assign(value); }

    /**
     * <p> The location of the Dynatrace resource. </p>
     */
    inline DynatraceConnectorProfileProperties& WithInstanceUrl(const Aws::String& value) { SetInstanceUrl(value); return *this;}

    /**
     * <p> The location of the Dynatrace resource. </p>
     */
    inline DynatraceConnectorProfileProperties& WithInstanceUrl(Aws::String&& value) { SetInstanceUrl(std::move(value)); return *this;}

    /**
     * <p> The location of the Dynatrace resource. </p>
     */
    inline DynatraceConnectorProfileProperties& WithInstanceUrl(const char* value) { SetInstanceUrl(value); return *this;}

  private:

    Aws::String m_instanceUrl;
    bool m_instanceUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
