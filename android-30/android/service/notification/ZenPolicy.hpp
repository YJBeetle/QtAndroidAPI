#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::service::notification
{
	class ZenPolicy : public JObject
	{
	public:
		// Fields
		static jint CONVERSATION_SENDERS_ANYONE();
		static jint CONVERSATION_SENDERS_IMPORTANT();
		static jint CONVERSATION_SENDERS_NONE();
		static jint CONVERSATION_SENDERS_UNSET();
		static JObject CREATOR();
		static jint PEOPLE_TYPE_ANYONE();
		static jint PEOPLE_TYPE_CONTACTS();
		static jint PEOPLE_TYPE_NONE();
		static jint PEOPLE_TYPE_STARRED();
		static jint PEOPLE_TYPE_UNSET();
		static jint STATE_ALLOW();
		static jint STATE_DISALLOW();
		static jint STATE_UNSET();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ZenPolicy(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ZenPolicy(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getPriorityCallSenders() const;
		jint getPriorityCategoryAlarms() const;
		jint getPriorityCategoryCalls() const;
		jint getPriorityCategoryConversations() const;
		jint getPriorityCategoryEvents() const;
		jint getPriorityCategoryMedia() const;
		jint getPriorityCategoryMessages() const;
		jint getPriorityCategoryReminders() const;
		jint getPriorityCategoryRepeatCallers() const;
		jint getPriorityCategorySystem() const;
		jint getPriorityConversationSenders() const;
		jint getPriorityMessageSenders() const;
		jint getVisualEffectAmbient() const;
		jint getVisualEffectBadge() const;
		jint getVisualEffectFullScreenIntent() const;
		jint getVisualEffectLights() const;
		jint getVisualEffectNotificationList() const;
		jint getVisualEffectPeek() const;
		jint getVisualEffectStatusBar() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::notification

