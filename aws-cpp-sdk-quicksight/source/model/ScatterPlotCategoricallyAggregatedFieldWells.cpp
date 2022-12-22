﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ScatterPlotCategoricallyAggregatedFieldWells.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

ScatterPlotCategoricallyAggregatedFieldWells::ScatterPlotCategoricallyAggregatedFieldWells() : 
    m_xAxisHasBeenSet(false),
    m_yAxisHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_sizeHasBeenSet(false)
{
}

ScatterPlotCategoricallyAggregatedFieldWells::ScatterPlotCategoricallyAggregatedFieldWells(JsonView jsonValue) : 
    m_xAxisHasBeenSet(false),
    m_yAxisHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_sizeHasBeenSet(false)
{
  *this = jsonValue;
}

ScatterPlotCategoricallyAggregatedFieldWells& ScatterPlotCategoricallyAggregatedFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("XAxis"))
  {
    Aws::Utils::Array<JsonView> xAxisJsonList = jsonValue.GetArray("XAxis");
    for(unsigned xAxisIndex = 0; xAxisIndex < xAxisJsonList.GetLength(); ++xAxisIndex)
    {
      m_xAxis.push_back(xAxisJsonList[xAxisIndex].AsObject());
    }
    m_xAxisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("YAxis"))
  {
    Aws::Utils::Array<JsonView> yAxisJsonList = jsonValue.GetArray("YAxis");
    for(unsigned yAxisIndex = 0; yAxisIndex < yAxisJsonList.GetLength(); ++yAxisIndex)
    {
      m_yAxis.push_back(yAxisJsonList[yAxisIndex].AsObject());
    }
    m_yAxisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Category"))
  {
    Aws::Utils::Array<JsonView> categoryJsonList = jsonValue.GetArray("Category");
    for(unsigned categoryIndex = 0; categoryIndex < categoryJsonList.GetLength(); ++categoryIndex)
    {
      m_category.push_back(categoryJsonList[categoryIndex].AsObject());
    }
    m_categoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Size"))
  {
    Aws::Utils::Array<JsonView> sizeJsonList = jsonValue.GetArray("Size");
    for(unsigned sizeIndex = 0; sizeIndex < sizeJsonList.GetLength(); ++sizeIndex)
    {
      m_size.push_back(sizeJsonList[sizeIndex].AsObject());
    }
    m_sizeHasBeenSet = true;
  }

  return *this;
}

JsonValue ScatterPlotCategoricallyAggregatedFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_xAxisHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> xAxisJsonList(m_xAxis.size());
   for(unsigned xAxisIndex = 0; xAxisIndex < xAxisJsonList.GetLength(); ++xAxisIndex)
   {
     xAxisJsonList[xAxisIndex].AsObject(m_xAxis[xAxisIndex].Jsonize());
   }
   payload.WithArray("XAxis", std::move(xAxisJsonList));

  }

  if(m_yAxisHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> yAxisJsonList(m_yAxis.size());
   for(unsigned yAxisIndex = 0; yAxisIndex < yAxisJsonList.GetLength(); ++yAxisIndex)
   {
     yAxisJsonList[yAxisIndex].AsObject(m_yAxis[yAxisIndex].Jsonize());
   }
   payload.WithArray("YAxis", std::move(yAxisJsonList));

  }

  if(m_categoryHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> categoryJsonList(m_category.size());
   for(unsigned categoryIndex = 0; categoryIndex < categoryJsonList.GetLength(); ++categoryIndex)
   {
     categoryJsonList[categoryIndex].AsObject(m_category[categoryIndex].Jsonize());
   }
   payload.WithArray("Category", std::move(categoryJsonList));

  }

  if(m_sizeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sizeJsonList(m_size.size());
   for(unsigned sizeIndex = 0; sizeIndex < sizeJsonList.GetLength(); ++sizeIndex)
   {
     sizeJsonList[sizeIndex].AsObject(m_size[sizeIndex].Jsonize());
   }
   payload.WithArray("Size", std::move(sizeJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
