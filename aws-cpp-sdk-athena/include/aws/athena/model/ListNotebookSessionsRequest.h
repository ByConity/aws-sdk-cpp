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
  class ListNotebookSessionsRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API ListNotebookSessionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListNotebookSessions"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the notebook to list sessions for.</p>
     */
    inline const Aws::String& GetNotebookId() const{ return m_notebookId; }

    /**
     * <p>The ID of the notebook to list sessions for.</p>
     */
    inline bool NotebookIdHasBeenSet() const { return m_notebookIdHasBeenSet; }

    /**
     * <p>The ID of the notebook to list sessions for.</p>
     */
    inline void SetNotebookId(const Aws::String& value) { m_notebookIdHasBeenSet = true; m_notebookId = value; }

    /**
     * <p>The ID of the notebook to list sessions for.</p>
     */
    inline void SetNotebookId(Aws::String&& value) { m_notebookIdHasBeenSet = true; m_notebookId = std::move(value); }

    /**
     * <p>The ID of the notebook to list sessions for.</p>
     */
    inline void SetNotebookId(const char* value) { m_notebookIdHasBeenSet = true; m_notebookId.assign(value); }

    /**
     * <p>The ID of the notebook to list sessions for.</p>
     */
    inline ListNotebookSessionsRequest& WithNotebookId(const Aws::String& value) { SetNotebookId(value); return *this;}

    /**
     * <p>The ID of the notebook to list sessions for.</p>
     */
    inline ListNotebookSessionsRequest& WithNotebookId(Aws::String&& value) { SetNotebookId(std::move(value)); return *this;}

    /**
     * <p>The ID of the notebook to list sessions for.</p>
     */
    inline ListNotebookSessionsRequest& WithNotebookId(const char* value) { SetNotebookId(value); return *this;}


    /**
     * <p>The maximum number of notebook sessions to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of notebook sessions to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of notebook sessions to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of notebook sessions to return.</p>
     */
    inline ListNotebookSessionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListNotebookSessionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline ListNotebookSessionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline ListNotebookSessionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_notebookId;
    bool m_notebookIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
