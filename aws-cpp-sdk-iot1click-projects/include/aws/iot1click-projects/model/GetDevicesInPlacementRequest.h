﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-projects/IoT1ClickProjects_EXPORTS.h>
#include <aws/iot1click-projects/IoT1ClickProjectsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT1ClickProjects
{
namespace Model
{

  /**
   */
  class GetDevicesInPlacementRequest : public IoT1ClickProjectsRequest
  {
  public:
    AWS_IOT1CLICKPROJECTS_API GetDevicesInPlacementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDevicesInPlacement"; }

    AWS_IOT1CLICKPROJECTS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the project containing the placement.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project containing the placement.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The name of the project containing the placement.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the project containing the placement.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of the project containing the placement.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the project containing the placement.</p>
     */
    inline GetDevicesInPlacementRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project containing the placement.</p>
     */
    inline GetDevicesInPlacementRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project containing the placement.</p>
     */
    inline GetDevicesInPlacementRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>The name of the placement to get the devices from.</p>
     */
    inline const Aws::String& GetPlacementName() const{ return m_placementName; }

    /**
     * <p>The name of the placement to get the devices from.</p>
     */
    inline bool PlacementNameHasBeenSet() const { return m_placementNameHasBeenSet; }

    /**
     * <p>The name of the placement to get the devices from.</p>
     */
    inline void SetPlacementName(const Aws::String& value) { m_placementNameHasBeenSet = true; m_placementName = value; }

    /**
     * <p>The name of the placement to get the devices from.</p>
     */
    inline void SetPlacementName(Aws::String&& value) { m_placementNameHasBeenSet = true; m_placementName = std::move(value); }

    /**
     * <p>The name of the placement to get the devices from.</p>
     */
    inline void SetPlacementName(const char* value) { m_placementNameHasBeenSet = true; m_placementName.assign(value); }

    /**
     * <p>The name of the placement to get the devices from.</p>
     */
    inline GetDevicesInPlacementRequest& WithPlacementName(const Aws::String& value) { SetPlacementName(value); return *this;}

    /**
     * <p>The name of the placement to get the devices from.</p>
     */
    inline GetDevicesInPlacementRequest& WithPlacementName(Aws::String&& value) { SetPlacementName(std::move(value)); return *this;}

    /**
     * <p>The name of the placement to get the devices from.</p>
     */
    inline GetDevicesInPlacementRequest& WithPlacementName(const char* value) { SetPlacementName(value); return *this;}

  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_placementName;
    bool m_placementNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
