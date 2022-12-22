﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TemplateVersionDefinition.h>
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

TemplateVersionDefinition::TemplateVersionDefinition() : 
    m_dataSetConfigurationsHasBeenSet(false),
    m_sheetsHasBeenSet(false),
    m_calculatedFieldsHasBeenSet(false),
    m_parameterDeclarationsHasBeenSet(false),
    m_filterGroupsHasBeenSet(false),
    m_columnConfigurationsHasBeenSet(false),
    m_analysisDefaultsHasBeenSet(false)
{
}

TemplateVersionDefinition::TemplateVersionDefinition(JsonView jsonValue) : 
    m_dataSetConfigurationsHasBeenSet(false),
    m_sheetsHasBeenSet(false),
    m_calculatedFieldsHasBeenSet(false),
    m_parameterDeclarationsHasBeenSet(false),
    m_filterGroupsHasBeenSet(false),
    m_columnConfigurationsHasBeenSet(false),
    m_analysisDefaultsHasBeenSet(false)
{
  *this = jsonValue;
}

TemplateVersionDefinition& TemplateVersionDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSetConfigurations"))
  {
    Aws::Utils::Array<JsonView> dataSetConfigurationsJsonList = jsonValue.GetArray("DataSetConfigurations");
    for(unsigned dataSetConfigurationsIndex = 0; dataSetConfigurationsIndex < dataSetConfigurationsJsonList.GetLength(); ++dataSetConfigurationsIndex)
    {
      m_dataSetConfigurations.push_back(dataSetConfigurationsJsonList[dataSetConfigurationsIndex].AsObject());
    }
    m_dataSetConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sheets"))
  {
    Aws::Utils::Array<JsonView> sheetsJsonList = jsonValue.GetArray("Sheets");
    for(unsigned sheetsIndex = 0; sheetsIndex < sheetsJsonList.GetLength(); ++sheetsIndex)
    {
      m_sheets.push_back(sheetsJsonList[sheetsIndex].AsObject());
    }
    m_sheetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CalculatedFields"))
  {
    Aws::Utils::Array<JsonView> calculatedFieldsJsonList = jsonValue.GetArray("CalculatedFields");
    for(unsigned calculatedFieldsIndex = 0; calculatedFieldsIndex < calculatedFieldsJsonList.GetLength(); ++calculatedFieldsIndex)
    {
      m_calculatedFields.push_back(calculatedFieldsJsonList[calculatedFieldsIndex].AsObject());
    }
    m_calculatedFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterDeclarations"))
  {
    Aws::Utils::Array<JsonView> parameterDeclarationsJsonList = jsonValue.GetArray("ParameterDeclarations");
    for(unsigned parameterDeclarationsIndex = 0; parameterDeclarationsIndex < parameterDeclarationsJsonList.GetLength(); ++parameterDeclarationsIndex)
    {
      m_parameterDeclarations.push_back(parameterDeclarationsJsonList[parameterDeclarationsIndex].AsObject());
    }
    m_parameterDeclarationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FilterGroups"))
  {
    Aws::Utils::Array<JsonView> filterGroupsJsonList = jsonValue.GetArray("FilterGroups");
    for(unsigned filterGroupsIndex = 0; filterGroupsIndex < filterGroupsJsonList.GetLength(); ++filterGroupsIndex)
    {
      m_filterGroups.push_back(filterGroupsJsonList[filterGroupsIndex].AsObject());
    }
    m_filterGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnConfigurations"))
  {
    Aws::Utils::Array<JsonView> columnConfigurationsJsonList = jsonValue.GetArray("ColumnConfigurations");
    for(unsigned columnConfigurationsIndex = 0; columnConfigurationsIndex < columnConfigurationsJsonList.GetLength(); ++columnConfigurationsIndex)
    {
      m_columnConfigurations.push_back(columnConfigurationsJsonList[columnConfigurationsIndex].AsObject());
    }
    m_columnConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AnalysisDefaults"))
  {
    m_analysisDefaults = jsonValue.GetObject("AnalysisDefaults");

    m_analysisDefaultsHasBeenSet = true;
  }

  return *this;
}

JsonValue TemplateVersionDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_dataSetConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataSetConfigurationsJsonList(m_dataSetConfigurations.size());
   for(unsigned dataSetConfigurationsIndex = 0; dataSetConfigurationsIndex < dataSetConfigurationsJsonList.GetLength(); ++dataSetConfigurationsIndex)
   {
     dataSetConfigurationsJsonList[dataSetConfigurationsIndex].AsObject(m_dataSetConfigurations[dataSetConfigurationsIndex].Jsonize());
   }
   payload.WithArray("DataSetConfigurations", std::move(dataSetConfigurationsJsonList));

  }

  if(m_sheetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sheetsJsonList(m_sheets.size());
   for(unsigned sheetsIndex = 0; sheetsIndex < sheetsJsonList.GetLength(); ++sheetsIndex)
   {
     sheetsJsonList[sheetsIndex].AsObject(m_sheets[sheetsIndex].Jsonize());
   }
   payload.WithArray("Sheets", std::move(sheetsJsonList));

  }

  if(m_calculatedFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> calculatedFieldsJsonList(m_calculatedFields.size());
   for(unsigned calculatedFieldsIndex = 0; calculatedFieldsIndex < calculatedFieldsJsonList.GetLength(); ++calculatedFieldsIndex)
   {
     calculatedFieldsJsonList[calculatedFieldsIndex].AsObject(m_calculatedFields[calculatedFieldsIndex].Jsonize());
   }
   payload.WithArray("CalculatedFields", std::move(calculatedFieldsJsonList));

  }

  if(m_parameterDeclarationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parameterDeclarationsJsonList(m_parameterDeclarations.size());
   for(unsigned parameterDeclarationsIndex = 0; parameterDeclarationsIndex < parameterDeclarationsJsonList.GetLength(); ++parameterDeclarationsIndex)
   {
     parameterDeclarationsJsonList[parameterDeclarationsIndex].AsObject(m_parameterDeclarations[parameterDeclarationsIndex].Jsonize());
   }
   payload.WithArray("ParameterDeclarations", std::move(parameterDeclarationsJsonList));

  }

  if(m_filterGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filterGroupsJsonList(m_filterGroups.size());
   for(unsigned filterGroupsIndex = 0; filterGroupsIndex < filterGroupsJsonList.GetLength(); ++filterGroupsIndex)
   {
     filterGroupsJsonList[filterGroupsIndex].AsObject(m_filterGroups[filterGroupsIndex].Jsonize());
   }
   payload.WithArray("FilterGroups", std::move(filterGroupsJsonList));

  }

  if(m_columnConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnConfigurationsJsonList(m_columnConfigurations.size());
   for(unsigned columnConfigurationsIndex = 0; columnConfigurationsIndex < columnConfigurationsJsonList.GetLength(); ++columnConfigurationsIndex)
   {
     columnConfigurationsJsonList[columnConfigurationsIndex].AsObject(m_columnConfigurations[columnConfigurationsIndex].Jsonize());
   }
   payload.WithArray("ColumnConfigurations", std::move(columnConfigurationsJsonList));

  }

  if(m_analysisDefaultsHasBeenSet)
  {
   payload.WithObject("AnalysisDefaults", m_analysisDefaults.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
