#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class CalendarContract : public JObject
	{
	public:
		// Fields
		static JString ACCOUNT_TYPE_LOCAL();
		static JString ACTION_EVENT_REMINDER();
		static JString ACTION_HANDLE_CUSTOM_EVENT();
		static JString ACTION_VIEW_MANAGED_PROFILE_CALENDAR_EVENT();
		static JString AUTHORITY();
		static JString CALLER_IS_SYNCADAPTER();
		static android::net::Uri CONTENT_URI();
		static JString EXTRA_CUSTOM_APP_URI();
		static JString EXTRA_EVENT_ALL_DAY();
		static JString EXTRA_EVENT_BEGIN_TIME();
		static JString EXTRA_EVENT_END_TIME();
		static JString EXTRA_EVENT_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CalendarContract(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CalendarContract(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jboolean startViewCalendarEventInManagedProfile(android::content::Context arg0, jlong arg1, jlong arg2, jlong arg3, jboolean arg4, jint arg5);
	};
} // namespace android::provider

