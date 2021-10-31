#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class CalendarContract : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACCOUNT_TYPE_LOCAL();
		static jstring ACTION_EVENT_REMINDER();
		static jstring ACTION_HANDLE_CUSTOM_EVENT();
		static jstring ACTION_VIEW_MANAGED_PROFILE_CALENDAR_EVENT();
		static jstring AUTHORITY();
		static jstring CALLER_IS_SYNCADAPTER();
		static QAndroidJniObject CONTENT_URI();
		static jstring EXTRA_CUSTOM_APP_URI();
		static jstring EXTRA_EVENT_ALL_DAY();
		static jstring EXTRA_EVENT_BEGIN_TIME();
		static jstring EXTRA_EVENT_END_TIME();
		static jstring EXTRA_EVENT_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CalendarContract(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CalendarContract(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean startViewCalendarEventInManagedProfile(android::content::Context arg0, jlong arg1, jlong arg2, jlong arg3, jboolean arg4, jint arg5);
	};
} // namespace android::provider

