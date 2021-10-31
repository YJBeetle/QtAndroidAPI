#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class NotificationManager_Policy : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint PRIORITY_CATEGORY_ALARMS();
		static jint PRIORITY_CATEGORY_CALLS();
		static jint PRIORITY_CATEGORY_EVENTS();
		static jint PRIORITY_CATEGORY_MEDIA();
		static jint PRIORITY_CATEGORY_MESSAGES();
		static jint PRIORITY_CATEGORY_REMINDERS();
		static jint PRIORITY_CATEGORY_REPEAT_CALLERS();
		static jint PRIORITY_CATEGORY_SYSTEM();
		static jint PRIORITY_SENDERS_ANY();
		static jint PRIORITY_SENDERS_CONTACTS();
		static jint PRIORITY_SENDERS_STARRED();
		static jint SUPPRESSED_EFFECT_AMBIENT();
		static jint SUPPRESSED_EFFECT_BADGE();
		static jint SUPPRESSED_EFFECT_FULL_SCREEN_INTENT();
		static jint SUPPRESSED_EFFECT_LIGHTS();
		static jint SUPPRESSED_EFFECT_NOTIFICATION_LIST();
		static jint SUPPRESSED_EFFECT_PEEK();
		static jint SUPPRESSED_EFFECT_SCREEN_OFF();
		static jint SUPPRESSED_EFFECT_SCREEN_ON();
		static jint SUPPRESSED_EFFECT_STATUS_BAR();
		jint priorityCallSenders();
		jint priorityCategories();
		jint priorityMessageSenders();
		jint suppressedVisualEffects();
		
		NotificationManager_Policy(QAndroidJniObject obj);
		// Constructors
		NotificationManager_Policy(jint arg0, jint arg1, jint arg2);
		NotificationManager_Policy(jint arg0, jint arg1, jint arg2, jint arg3);
		NotificationManager_Policy() = default;
		
		// Methods
		static jstring priorityCategoriesToString(jint arg0);
		static jstring prioritySendersToString(jint arg0);
		static jstring suppressedEffectsToString(jint arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

