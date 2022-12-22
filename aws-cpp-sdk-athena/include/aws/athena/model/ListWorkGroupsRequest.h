﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class ListWorkGroupsRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API ListWorkGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListWorkGroups"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline ListWorkGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline ListWorkGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline ListWorkGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of workgroups to return in this request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of workgroups to return in this request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of workgroups to return in this request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of workgroups to return in this request.</p>
     */
    inline ListWorkGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
