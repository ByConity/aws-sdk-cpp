﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/appintegrations/AppIntegrationsServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AppIntegrationsService
{
namespace Model
{

  /**
   */
  class ListDataIntegrationAssociationsRequest : public AppIntegrationsServiceRequest
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API ListDataIntegrationAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDataIntegrationAssociations"; }

    AWS_APPINTEGRATIONSSERVICE_API Aws::String SerializePayload() const override;

    AWS_APPINTEGRATIONSSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline const Aws::String& GetDataIntegrationIdentifier() const{ return m_dataIntegrationIdentifier; }

    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline bool DataIntegrationIdentifierHasBeenSet() const { return m_dataIntegrationIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline void SetDataIntegrationIdentifier(const Aws::String& value) { m_dataIntegrationIdentifierHasBeenSet = true; m_dataIntegrationIdentifier = value; }

    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline void SetDataIntegrationIdentifier(Aws::String&& value) { m_dataIntegrationIdentifierHasBeenSet = true; m_dataIntegrationIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline void SetDataIntegrationIdentifier(const char* value) { m_dataIntegrationIdentifierHasBeenSet = true; m_dataIntegrationIdentifier.assign(value); }

    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline ListDataIntegrationAssociationsRequest& WithDataIntegrationIdentifier(const Aws::String& value) { SetDataIntegrationIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline ListDataIntegrationAssociationsRequest& WithDataIntegrationIdentifier(Aws::String&& value) { SetDataIntegrationIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline ListDataIntegrationAssociationsRequest& WithDataIntegrationIdentifier(const char* value) { SetDataIntegrationIdentifier(value); return *this;}


    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline ListDataIntegrationAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline ListDataIntegrationAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline ListDataIntegrationAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline ListDataIntegrationAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_dataIntegrationIdentifier;
    bool m_dataIntegrationIdentifierHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
