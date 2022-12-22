﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The parameters for Amazon Redshift. The <code>ClusterId</code> field can be
   * blank if <code>Host</code> and <code>Port</code> are both set. The
   * <code>Host</code> and <code>Port</code> fields can be blank if the
   * <code>ClusterId</code> field is set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RedshiftParameters">AWS
   * API Reference</a></p>
   */
  class RedshiftParameters
  {
  public:
    AWS_QUICKSIGHT_API RedshiftParameters();
    AWS_QUICKSIGHT_API RedshiftParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RedshiftParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Host. This field can be blank if <code>ClusterId</code> is provided.</p>
     */
    inline const Aws::String& GetHost() const{ return m_host; }

    /**
     * <p>Host. This field can be blank if <code>ClusterId</code> is provided.</p>
     */
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }

    /**
     * <p>Host. This field can be blank if <code>ClusterId</code> is provided.</p>
     */
    inline void SetHost(const Aws::String& value) { m_hostHasBeenSet = true; m_host = value; }

    /**
     * <p>Host. This field can be blank if <code>ClusterId</code> is provided.</p>
     */
    inline void SetHost(Aws::String&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }

    /**
     * <p>Host. This field can be blank if <code>ClusterId</code> is provided.</p>
     */
    inline void SetHost(const char* value) { m_hostHasBeenSet = true; m_host.assign(value); }

    /**
     * <p>Host. This field can be blank if <code>ClusterId</code> is provided.</p>
     */
    inline RedshiftParameters& WithHost(const Aws::String& value) { SetHost(value); return *this;}

    /**
     * <p>Host. This field can be blank if <code>ClusterId</code> is provided.</p>
     */
    inline RedshiftParameters& WithHost(Aws::String&& value) { SetHost(std::move(value)); return *this;}

    /**
     * <p>Host. This field can be blank if <code>ClusterId</code> is provided.</p>
     */
    inline RedshiftParameters& WithHost(const char* value) { SetHost(value); return *this;}


    /**
     * <p>Port. This field can be blank if the <code>ClusterId</code> is provided.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>Port. This field can be blank if the <code>ClusterId</code> is provided.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>Port. This field can be blank if the <code>ClusterId</code> is provided.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>Port. This field can be blank if the <code>ClusterId</code> is provided.</p>
     */
    inline RedshiftParameters& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>Database.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }

    /**
     * <p>Database.</p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>Database.</p>
     */
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>Database.</p>
     */
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>Database.</p>
     */
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }

    /**
     * <p>Database.</p>
     */
    inline RedshiftParameters& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>Database.</p>
     */
    inline RedshiftParameters& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>Database.</p>
     */
    inline RedshiftParameters& WithDatabase(const char* value) { SetDatabase(value); return *this;}


    /**
     * <p>Cluster ID. This field can be blank if the <code>Host</code> and
     * <code>Port</code> are provided.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>Cluster ID. This field can be blank if the <code>Host</code> and
     * <code>Port</code> are provided.</p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>Cluster ID. This field can be blank if the <code>Host</code> and
     * <code>Port</code> are provided.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>Cluster ID. This field can be blank if the <code>Host</code> and
     * <code>Port</code> are provided.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>Cluster ID. This field can be blank if the <code>Host</code> and
     * <code>Port</code> are provided.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>Cluster ID. This field can be blank if the <code>Host</code> and
     * <code>Port</code> are provided.</p>
     */
    inline RedshiftParameters& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>Cluster ID. This field can be blank if the <code>Host</code> and
     * <code>Port</code> are provided.</p>
     */
    inline RedshiftParameters& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>Cluster ID. This field can be blank if the <code>Host</code> and
     * <code>Port</code> are provided.</p>
     */
    inline RedshiftParameters& WithClusterId(const char* value) { SetClusterId(value); return *this;}

  private:

    Aws::String m_host;
    bool m_hostHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
