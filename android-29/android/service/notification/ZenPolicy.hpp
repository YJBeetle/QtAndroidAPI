#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::service::notification
{
	class ZenPolicy : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint PEOPLE_TYPE_ANYONE();
		static jint PEOPLE_TYPE_CONTACTS();
		static jint PEOPLE_TYPE_NONE();
		static jint PEOPLE_TYPE_STARRED();
		static jint PEOPLE_TYPE_UNSET();
		static jint STATE_ALLOW();
		static jint STATE_DISALLOW();
		static jint STATE_UNSET();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ZenPolicy(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ZenPolicy(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
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
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::notification

