﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/WorkflowType.h>
#include <aws/swf/model/StartChildWorkflowExecutionFailedCause.h>
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
namespace SWF
{
namespace Model
{

  /**
   * <p>Provides the details of the <code>StartChildWorkflowExecutionFailed</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/StartChildWorkflowExecutionFailedEventAttributes">AWS
   * API Reference</a></p>
   */
  class StartChildWorkflowExecutionFailedEventAttributes
  {
  public:
    AWS_SWF_API StartChildWorkflowExecutionFailedEventAttributes();
    AWS_SWF_API StartChildWorkflowExecutionFailedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API StartChildWorkflowExecutionFailedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The workflow type provided in the <code>StartChildWorkflowExecution</code>
     * <a>Decision</a> that failed.</p>
     */
    inline const WorkflowType& GetWorkflowType() const{ return m_workflowType; }

    /**
     * <p>The workflow type provided in the <code>StartChildWorkflowExecution</code>
     * <a>Decision</a> that failed.</p>
     */
    inline bool WorkflowTypeHasBeenSet() const { return m_workflowTypeHasBeenSet; }

    /**
     * <p>The workflow type provided in the <code>StartChildWorkflowExecution</code>
     * <a>Decision</a> that failed.</p>
     */
    inline void SetWorkflowType(const WorkflowType& value) { m_workflowTypeHasBeenSet = true; m_workflowType = value; }

    /**
     * <p>The workflow type provided in the <code>StartChildWorkflowExecution</code>
     * <a>Decision</a> that failed.</p>
     */
    inline void SetWorkflowType(WorkflowType&& value) { m_workflowTypeHasBeenSet = true; m_workflowType = std::move(value); }

    /**
     * <p>The workflow type provided in the <code>StartChildWorkflowExecution</code>
     * <a>Decision</a> that failed.</p>
     */
    inline StartChildWorkflowExecutionFailedEventAttributes& WithWorkflowType(const WorkflowType& value) { SetWorkflowType(value); return *this;}

    /**
     * <p>The workflow type provided in the <code>StartChildWorkflowExecution</code>
     * <a>Decision</a> that failed.</p>
     */
    inline StartChildWorkflowExecutionFailedEventAttributes& WithWorkflowType(WorkflowType&& value) { SetWorkflowType(std::move(value)); return *this;}


    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p>  <p>When <code>cause</code> is set
     * to <code>OPERATION_NOT_PERMITTED</code>, the decision fails because it lacks
     * sufficient permissions. For details and example IAM policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">
     * Using IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF
     * Developer Guide</i>.</p> 
     */
    inline const StartChildWorkflowExecutionFailedCause& GetCause() const{ return m_cause; }

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p>  <p>When <code>cause</code> is set
     * to <code>OPERATION_NOT_PERMITTED</code>, the decision fails because it lacks
     * sufficient permissions. For details and example IAM policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">
     * Using IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF
     * Developer Guide</i>.</p> 
     */
    inline bool CauseHasBeenSet() const { return m_causeHasBeenSet; }

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p>  <p>When <code>cause</code> is set
     * to <code>OPERATION_NOT_PERMITTED</code>, the decision fails because it lacks
     * sufficient permissions. For details and example IAM policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">
     * Using IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF
     * Developer Guide</i>.</p> 
     */
    inline void SetCause(const StartChildWorkflowExecutionFailedCause& value) { m_causeHasBeenSet = true; m_cause = value; }

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p>  <p>When <code>cause</code> is set
     * to <code>OPERATION_NOT_PERMITTED</code>, the decision fails because it lacks
     * sufficient permissions. For details and example IAM policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">
     * Using IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF
     * Developer Guide</i>.</p> 
     */
    inline void SetCause(StartChildWorkflowExecutionFailedCause&& value) { m_causeHasBeenSet = true; m_cause = std::move(value); }

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p>  <p>When <code>cause</code> is set
     * to <code>OPERATION_NOT_PERMITTED</code>, the decision fails because it lacks
     * sufficient permissions. For details and example IAM policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">
     * Using IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF
     * Developer Guide</i>.</p> 
     */
    inline StartChildWorkflowExecutionFailedEventAttributes& WithCause(const StartChildWorkflowExecutionFailedCause& value) { SetCause(value); return *this;}

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p>  <p>When <code>cause</code> is set
     * to <code>OPERATION_NOT_PERMITTED</code>, the decision fails because it lacks
     * sufficient permissions. For details and example IAM policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">
     * Using IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF
     * Developer Guide</i>.</p> 
     */
    inline StartChildWorkflowExecutionFailedEventAttributes& WithCause(StartChildWorkflowExecutionFailedCause&& value) { SetCause(std::move(value)); return *this;}


    /**
     * <p>The <code>workflowId</code> of the child workflow execution.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>The <code>workflowId</code> of the child workflow execution.</p>
     */
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }

    /**
     * <p>The <code>workflowId</code> of the child workflow execution.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }

    /**
     * <p>The <code>workflowId</code> of the child workflow execution.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::move(value); }

    /**
     * <p>The <code>workflowId</code> of the child workflow execution.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }

    /**
     * <p>The <code>workflowId</code> of the child workflow execution.</p>
     */
    inline StartChildWorkflowExecutionFailedEventAttributes& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The <code>workflowId</code> of the child workflow execution.</p>
     */
    inline StartChildWorkflowExecutionFailedEventAttributes& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>The <code>workflowId</code> of the child workflow execution.</p>
     */
    inline StartChildWorkflowExecutionFailedEventAttributes& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}


    /**
     * <p>When the <code>cause</code> is <code>WORKFLOW_ALREADY_RUNNING</code>,
     * <code>initiatedEventId</code> is the ID of the
     * <code>StartChildWorkflowExecutionInitiated</code> event that corresponds to the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a> to start the workflow
     * execution. You can use this information to diagnose problems by tracing back the
     * chain of events leading up to this event.</p> <p>When the <code>cause</code>
     * isn't <code>WORKFLOW_ALREADY_RUNNING</code>, <code>initiatedEventId</code> is
     * set to <code>0</code> because the
     * <code>StartChildWorkflowExecutionInitiated</code> event doesn't exist.</p>
     */
    inline long long GetInitiatedEventId() const{ return m_initiatedEventId; }

    /**
     * <p>When the <code>cause</code> is <code>WORKFLOW_ALREADY_RUNNING</code>,
     * <code>initiatedEventId</code> is the ID of the
     * <code>StartChildWorkflowExecutionInitiated</code> event that corresponds to the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a> to start the workflow
     * execution. You can use this information to diagnose problems by tracing back the
     * chain of events leading up to this event.</p> <p>When the <code>cause</code>
     * isn't <code>WORKFLOW_ALREADY_RUNNING</code>, <code>initiatedEventId</code> is
     * set to <code>0</code> because the
     * <code>StartChildWorkflowExecutionInitiated</code> event doesn't exist.</p>
     */
    inline bool InitiatedEventIdHasBeenSet() const { return m_initiatedEventIdHasBeenSet; }

    /**
     * <p>When the <code>cause</code> is <code>WORKFLOW_ALREADY_RUNNING</code>,
     * <code>initiatedEventId</code> is the ID of the
     * <code>StartChildWorkflowExecutionInitiated</code> event that corresponds to the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a> to start the workflow
     * execution. You can use this information to diagnose problems by tracing back the
     * chain of events leading up to this event.</p> <p>When the <code>cause</code>
     * isn't <code>WORKFLOW_ALREADY_RUNNING</code>, <code>initiatedEventId</code> is
     * set to <code>0</code> because the
     * <code>StartChildWorkflowExecutionInitiated</code> event doesn't exist.</p>
     */
    inline void SetInitiatedEventId(long long value) { m_initiatedEventIdHasBeenSet = true; m_initiatedEventId = value; }

    /**
     * <p>When the <code>cause</code> is <code>WORKFLOW_ALREADY_RUNNING</code>,
     * <code>initiatedEventId</code> is the ID of the
     * <code>StartChildWorkflowExecutionInitiated</code> event that corresponds to the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a> to start the workflow
     * execution. You can use this information to diagnose problems by tracing back the
     * chain of events leading up to this event.</p> <p>When the <code>cause</code>
     * isn't <code>WORKFLOW_ALREADY_RUNNING</code>, <code>initiatedEventId</code> is
     * set to <code>0</code> because the
     * <code>StartChildWorkflowExecutionInitiated</code> event doesn't exist.</p>
     */
    inline StartChildWorkflowExecutionFailedEventAttributes& WithInitiatedEventId(long long value) { SetInitiatedEventId(value); return *this;}


    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>StartChildWorkflowExecution</code>
     * <a>Decision</a> to request this child workflow execution. This information can
     * be useful for diagnosing problems by tracing back the chain of events.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const{ return m_decisionTaskCompletedEventId; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>StartChildWorkflowExecution</code>
     * <a>Decision</a> to request this child workflow execution. This information can
     * be useful for diagnosing problems by tracing back the chain of events.</p>
     */
    inline bool DecisionTaskCompletedEventIdHasBeenSet() const { return m_decisionTaskCompletedEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>StartChildWorkflowExecution</code>
     * <a>Decision</a> to request this child workflow execution. This information can
     * be useful for diagnosing problems by tracing back the chain of events.</p>
     */
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>StartChildWorkflowExecution</code>
     * <a>Decision</a> to request this child workflow execution. This information can
     * be useful for diagnosing problems by tracing back the chain of events.</p>
     */
    inline StartChildWorkflowExecutionFailedEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}


    /**
     * <p>The data attached to the event that the decider can use in subsequent
     * workflow tasks. This data isn't sent to the child workflow execution.</p>
     */
    inline const Aws::String& GetControl() const{ return m_control; }

    /**
     * <p>The data attached to the event that the decider can use in subsequent
     * workflow tasks. This data isn't sent to the child workflow execution.</p>
     */
    inline bool ControlHasBeenSet() const { return m_controlHasBeenSet; }

    /**
     * <p>The data attached to the event that the decider can use in subsequent
     * workflow tasks. This data isn't sent to the child workflow execution.</p>
     */
    inline void SetControl(const Aws::String& value) { m_controlHasBeenSet = true; m_control = value; }

    /**
     * <p>The data attached to the event that the decider can use in subsequent
     * workflow tasks. This data isn't sent to the child workflow execution.</p>
     */
    inline void SetControl(Aws::String&& value) { m_controlHasBeenSet = true; m_control = std::move(value); }

    /**
     * <p>The data attached to the event that the decider can use in subsequent
     * workflow tasks. This data isn't sent to the child workflow execution.</p>
     */
    inline void SetControl(const char* value) { m_controlHasBeenSet = true; m_control.assign(value); }

    /**
     * <p>The data attached to the event that the decider can use in subsequent
     * workflow tasks. This data isn't sent to the child workflow execution.</p>
     */
    inline StartChildWorkflowExecutionFailedEventAttributes& WithControl(const Aws::String& value) { SetControl(value); return *this;}

    /**
     * <p>The data attached to the event that the decider can use in subsequent
     * workflow tasks. This data isn't sent to the child workflow execution.</p>
     */
    inline StartChildWorkflowExecutionFailedEventAttributes& WithControl(Aws::String&& value) { SetControl(std::move(value)); return *this;}

    /**
     * <p>The data attached to the event that the decider can use in subsequent
     * workflow tasks. This data isn't sent to the child workflow execution.</p>
     */
    inline StartChildWorkflowExecutionFailedEventAttributes& WithControl(const char* value) { SetControl(value); return *this;}

  private:

    WorkflowType m_workflowType;
    bool m_workflowTypeHasBeenSet = false;

    StartChildWorkflowExecutionFailedCause m_cause;
    bool m_causeHasBeenSet = false;

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    long long m_initiatedEventId;
    bool m_initiatedEventIdHasBeenSet = false;

    long long m_decisionTaskCompletedEventId;
    bool m_decisionTaskCompletedEventIdHasBeenSet = false;

    Aws::String m_control;
    bool m_controlHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
