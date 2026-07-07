#pragma once

#include "../../JArray.hpp"
#include "./PendingIntent.def.hpp"
#include "./RemoteInput.def.hpp"
#include "../../JString.hpp"
#include "./Notification_CarExtender_UnreadConversation.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jlong Notification_CarExtender_UnreadConversation::getLatestTimestamp() const
	{
		return callMethod<jlong>(
			"getLatestTimestamp",
			"()J"
		);
	}
	inline JArray Notification_CarExtender_UnreadConversation::getMessages() const
	{
		return callObjectMethod(
			"getMessages",
			"()[Ljava/lang/String;"
		);
	}
	inline JString Notification_CarExtender_UnreadConversation::getParticipant() const
	{
		return callObjectMethod(
			"getParticipant",
			"()Ljava/lang/String;"
		);
	}
	inline JArray Notification_CarExtender_UnreadConversation::getParticipants() const
	{
		return callObjectMethod(
			"getParticipants",
			"()[Ljava/lang/String;"
		);
	}
	inline android::app::PendingIntent Notification_CarExtender_UnreadConversation::getReadPendingIntent() const
	{
		return callObjectMethod(
			"getReadPendingIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	inline android::app::RemoteInput Notification_CarExtender_UnreadConversation::getRemoteInput() const
	{
		return callObjectMethod(
			"getRemoteInput",
			"()Landroid/app/RemoteInput;"
		);
	}
	inline android::app::PendingIntent Notification_CarExtender_UnreadConversation::getReplyPendingIntent() const
	{
		return callObjectMethod(
			"getReplyPendingIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
