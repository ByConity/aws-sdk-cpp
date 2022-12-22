﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-events/PersonalizeEvents_EXPORTS.h>
#include <aws/personalize-events/PersonalizeEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/personalize-events/model/Event.h>
#include <utility>

namespace Aws
{
namespace PersonalizeEvents
{
namespace Model
{

  /**
   */
  class PutEventsRequest : public PersonalizeEventsRequest
  {
  public:
    AWS_PERSONALIZEEVENTS_API PutEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutEvents"; }

    AWS_PERSONALIZEEVENTS_API Aws::String SerializePayload() const override;


    /**
     * <p>The tracking ID for the event. The ID is generated by a call to the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateEventTracker.html">CreateEventTracker</a>
     * API.</p>
     */
    inline const Aws::String& GetTrackingId() const{ return m_trackingId; }

    /**
     * <p>The tracking ID for the event. The ID is generated by a call to the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateEventTracker.html">CreateEventTracker</a>
     * API.</p>
     */
    inline bool TrackingIdHasBeenSet() const { return m_trackingIdHasBeenSet; }

    /**
     * <p>The tracking ID for the event. The ID is generated by a call to the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateEventTracker.html">CreateEventTracker</a>
     * API.</p>
     */
    inline void SetTrackingId(const Aws::String& value) { m_trackingIdHasBeenSet = true; m_trackingId = value; }

    /**
     * <p>The tracking ID for the event. The ID is generated by a call to the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateEventTracker.html">CreateEventTracker</a>
     * API.</p>
     */
    inline void SetTrackingId(Aws::String&& value) { m_trackingIdHasBeenSet = true; m_trackingId = std::move(value); }

    /**
     * <p>The tracking ID for the event. The ID is generated by a call to the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateEventTracker.html">CreateEventTracker</a>
     * API.</p>
     */
    inline void SetTrackingId(const char* value) { m_trackingIdHasBeenSet = true; m_trackingId.assign(value); }

    /**
     * <p>The tracking ID for the event. The ID is generated by a call to the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateEventTracker.html">CreateEventTracker</a>
     * API.</p>
     */
    inline PutEventsRequest& WithTrackingId(const Aws::String& value) { SetTrackingId(value); return *this;}

    /**
     * <p>The tracking ID for the event. The ID is generated by a call to the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateEventTracker.html">CreateEventTracker</a>
     * API.</p>
     */
    inline PutEventsRequest& WithTrackingId(Aws::String&& value) { SetTrackingId(std::move(value)); return *this;}

    /**
     * <p>The tracking ID for the event. The ID is generated by a call to the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateEventTracker.html">CreateEventTracker</a>
     * API.</p>
     */
    inline PutEventsRequest& WithTrackingId(const char* value) { SetTrackingId(value); return *this;}


    /**
     * <p>The user associated with the event.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The user associated with the event.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The user associated with the event.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The user associated with the event.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The user associated with the event.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The user associated with the event.</p>
     */
    inline PutEventsRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The user associated with the event.</p>
     */
    inline PutEventsRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The user associated with the event.</p>
     */
    inline PutEventsRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The session ID associated with the user's visit. Your application generates
     * the sessionId when a user first visits your website or uses your application.
     * Amazon Personalize uses the sessionId to associate events with the user before
     * they log in. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html">Recording
     * Events</a>.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The session ID associated with the user's visit. Your application generates
     * the sessionId when a user first visits your website or uses your application.
     * Amazon Personalize uses the sessionId to associate events with the user before
     * they log in. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html">Recording
     * Events</a>.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>The session ID associated with the user's visit. Your application generates
     * the sessionId when a user first visits your website or uses your application.
     * Amazon Personalize uses the sessionId to associate events with the user before
     * they log in. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html">Recording
     * Events</a>.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>The session ID associated with the user's visit. Your application generates
     * the sessionId when a user first visits your website or uses your application.
     * Amazon Personalize uses the sessionId to associate events with the user before
     * they log in. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html">Recording
     * Events</a>.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>The session ID associated with the user's visit. Your application generates
     * the sessionId when a user first visits your website or uses your application.
     * Amazon Personalize uses the sessionId to associate events with the user before
     * they log in. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html">Recording
     * Events</a>.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>The session ID associated with the user's visit. Your application generates
     * the sessionId when a user first visits your website or uses your application.
     * Amazon Personalize uses the sessionId to associate events with the user before
     * they log in. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html">Recording
     * Events</a>.</p>
     */
    inline PutEventsRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The session ID associated with the user's visit. Your application generates
     * the sessionId when a user first visits your website or uses your application.
     * Amazon Personalize uses the sessionId to associate events with the user before
     * they log in. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html">Recording
     * Events</a>.</p>
     */
    inline PutEventsRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The session ID associated with the user's visit. Your application generates
     * the sessionId when a user first visits your website or uses your application.
     * Amazon Personalize uses the sessionId to associate events with the user before
     * they log in. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html">Recording
     * Events</a>.</p>
     */
    inline PutEventsRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>A list of event data from the session.</p>
     */
    inline const Aws::Vector<Event>& GetEventList() const{ return m_eventList; }

    /**
     * <p>A list of event data from the session.</p>
     */
    inline bool EventListHasBeenSet() const { return m_eventListHasBeenSet; }

    /**
     * <p>A list of event data from the session.</p>
     */
    inline void SetEventList(const Aws::Vector<Event>& value) { m_eventListHasBeenSet = true; m_eventList = value; }

    /**
     * <p>A list of event data from the session.</p>
     */
    inline void SetEventList(Aws::Vector<Event>&& value) { m_eventListHasBeenSet = true; m_eventList = std::move(value); }

    /**
     * <p>A list of event data from the session.</p>
     */
    inline PutEventsRequest& WithEventList(const Aws::Vector<Event>& value) { SetEventList(value); return *this;}

    /**
     * <p>A list of event data from the session.</p>
     */
    inline PutEventsRequest& WithEventList(Aws::Vector<Event>&& value) { SetEventList(std::move(value)); return *this;}

    /**
     * <p>A list of event data from the session.</p>
     */
    inline PutEventsRequest& AddEventList(const Event& value) { m_eventListHasBeenSet = true; m_eventList.push_back(value); return *this; }

    /**
     * <p>A list of event data from the session.</p>
     */
    inline PutEventsRequest& AddEventList(Event&& value) { m_eventListHasBeenSet = true; m_eventList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_trackingId;
    bool m_trackingIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::Vector<Event> m_eventList;
    bool m_eventListHasBeenSet = false;
  };

} // namespace Model
} // namespace PersonalizeEvents
} // namespace Aws
