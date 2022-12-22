﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/applicationcostprofiler/ApplicationCostProfiler_EXPORTS.h>
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
namespace ApplicationCostProfiler
{
namespace Model
{
  class DeleteReportDefinitionResult
  {
  public:
    AWS_APPLICATIONCOSTPROFILER_API DeleteReportDefinitionResult();
    AWS_APPLICATIONCOSTPROFILER_API DeleteReportDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONCOSTPROFILER_API DeleteReportDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>ID of the report that was deleted.</p>
     */
    inline const Aws::String& GetReportId() const{ return m_reportId; }

    /**
     * <p>ID of the report that was deleted.</p>
     */
    inline void SetReportId(const Aws::String& value) { m_reportId = value; }

    /**
     * <p>ID of the report that was deleted.</p>
     */
    inline void SetReportId(Aws::String&& value) { m_reportId = std::move(value); }

    /**
     * <p>ID of the report that was deleted.</p>
     */
    inline void SetReportId(const char* value) { m_reportId.assign(value); }

    /**
     * <p>ID of the report that was deleted.</p>
     */
    inline DeleteReportDefinitionResult& WithReportId(const Aws::String& value) { SetReportId(value); return *this;}

    /**
     * <p>ID of the report that was deleted.</p>
     */
    inline DeleteReportDefinitionResult& WithReportId(Aws::String&& value) { SetReportId(std::move(value)); return *this;}

    /**
     * <p>ID of the report that was deleted.</p>
     */
    inline DeleteReportDefinitionResult& WithReportId(const char* value) { SetReportId(value); return *this;}

  private:

    Aws::String m_reportId;
  };

} // namespace Model
} // namespace ApplicationCostProfiler
} // namespace Aws
