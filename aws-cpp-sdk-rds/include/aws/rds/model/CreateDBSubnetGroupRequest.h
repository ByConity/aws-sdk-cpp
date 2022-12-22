﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBSubnetGroupMessage">AWS
   * API Reference</a></p>
   */
  class CreateDBSubnetGroupRequest : public RDSRequest
  {
  public:
    AWS_RDS_API CreateDBSubnetGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBSubnetGroup"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name for the DB subnet group. This value is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain no more than 255
     * letters, numbers, periods, underscores, spaces, or hyphens.</p> </li> <li>
     * <p>Must not be default.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> </ul> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>The name for the DB subnet group. This value is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain no more than 255
     * letters, numbers, periods, underscores, spaces, or hyphens.</p> </li> <li>
     * <p>Must not be default.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> </ul> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }

    /**
     * <p>The name for the DB subnet group. This value is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain no more than 255
     * letters, numbers, periods, underscores, spaces, or hyphens.</p> </li> <li>
     * <p>Must not be default.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> </ul> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>The name for the DB subnet group. This value is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain no more than 255
     * letters, numbers, periods, underscores, spaces, or hyphens.</p> </li> <li>
     * <p>Must not be default.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> </ul> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }

    /**
     * <p>The name for the DB subnet group. This value is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain no more than 255
     * letters, numbers, periods, underscores, spaces, or hyphens.</p> </li> <li>
     * <p>Must not be default.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> </ul> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>The name for the DB subnet group. This value is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain no more than 255
     * letters, numbers, periods, underscores, spaces, or hyphens.</p> </li> <li>
     * <p>Must not be default.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> </ul> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline CreateDBSubnetGroupRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>The name for the DB subnet group. This value is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain no more than 255
     * letters, numbers, periods, underscores, spaces, or hyphens.</p> </li> <li>
     * <p>Must not be default.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> </ul> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline CreateDBSubnetGroupRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name for the DB subnet group. This value is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain no more than 255
     * letters, numbers, periods, underscores, spaces, or hyphens.</p> </li> <li>
     * <p>Must not be default.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> </ul> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline CreateDBSubnetGroupRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}


    /**
     * <p>The description for the DB subnet group.</p>
     */
    inline const Aws::String& GetDBSubnetGroupDescription() const{ return m_dBSubnetGroupDescription; }

    /**
     * <p>The description for the DB subnet group.</p>
     */
    inline bool DBSubnetGroupDescriptionHasBeenSet() const { return m_dBSubnetGroupDescriptionHasBeenSet; }

    /**
     * <p>The description for the DB subnet group.</p>
     */
    inline void SetDBSubnetGroupDescription(const Aws::String& value) { m_dBSubnetGroupDescriptionHasBeenSet = true; m_dBSubnetGroupDescription = value; }

    /**
     * <p>The description for the DB subnet group.</p>
     */
    inline void SetDBSubnetGroupDescription(Aws::String&& value) { m_dBSubnetGroupDescriptionHasBeenSet = true; m_dBSubnetGroupDescription = std::move(value); }

    /**
     * <p>The description for the DB subnet group.</p>
     */
    inline void SetDBSubnetGroupDescription(const char* value) { m_dBSubnetGroupDescriptionHasBeenSet = true; m_dBSubnetGroupDescription.assign(value); }

    /**
     * <p>The description for the DB subnet group.</p>
     */
    inline CreateDBSubnetGroupRequest& WithDBSubnetGroupDescription(const Aws::String& value) { SetDBSubnetGroupDescription(value); return *this;}

    /**
     * <p>The description for the DB subnet group.</p>
     */
    inline CreateDBSubnetGroupRequest& WithDBSubnetGroupDescription(Aws::String&& value) { SetDBSubnetGroupDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the DB subnet group.</p>
     */
    inline CreateDBSubnetGroupRequest& WithDBSubnetGroupDescription(const char* value) { SetDBSubnetGroupDescription(value); return *this;}


    /**
     * <p>The EC2 Subnet IDs for the DB subnet group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The EC2 Subnet IDs for the DB subnet group.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The EC2 Subnet IDs for the DB subnet group.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The EC2 Subnet IDs for the DB subnet group.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The EC2 Subnet IDs for the DB subnet group.</p>
     */
    inline CreateDBSubnetGroupRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The EC2 Subnet IDs for the DB subnet group.</p>
     */
    inline CreateDBSubnetGroupRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The EC2 Subnet IDs for the DB subnet group.</p>
     */
    inline CreateDBSubnetGroupRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The EC2 Subnet IDs for the DB subnet group.</p>
     */
    inline CreateDBSubnetGroupRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The EC2 Subnet IDs for the DB subnet group.</p>
     */
    inline CreateDBSubnetGroupRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>Tags to assign to the DB subnet group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to assign to the DB subnet group.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to assign to the DB subnet group.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to assign to the DB subnet group.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to assign to the DB subnet group.</p>
     */
    inline CreateDBSubnetGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to assign to the DB subnet group.</p>
     */
    inline CreateDBSubnetGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to assign to the DB subnet group.</p>
     */
    inline CreateDBSubnetGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags to assign to the DB subnet group.</p>
     */
    inline CreateDBSubnetGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet = false;

    Aws::String m_dBSubnetGroupDescription;
    bool m_dBSubnetGroupDescriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
