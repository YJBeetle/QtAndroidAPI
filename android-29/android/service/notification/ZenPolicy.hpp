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
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getPriorityCallSenders();
		jint getPriorityCategoryAlarms();
		jint getPriorityCategoryCalls();
		jint getPriorityCategoryEvents();
		jint getPriorityCategoryMedia();
		jint getPriorityCategoryMessages();
		jint getPriorityCategoryReminders();
		jint getPriorityCategoryRepeatCallers();
		jint getPriorityCategorySystem();
		jint getPriorityMessageSenders();
		jint getVisualEffectAmbient();
		jint getVisualEffectBadge();
		jint getVisualEffectFullScreenIntent();
		jint getVisualEffectLights();
		jint getVisualEffectNotificationList();
		jint getVisualEffectPeek();
		jint getVisualEffectStatusBar();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::notification

