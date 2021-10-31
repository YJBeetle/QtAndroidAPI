#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ContentResolver;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class CalendarContract_EventDays : public __JniBaseClass
	{
	public:
		// Fields
		static android::net::Uri CONTENT_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CalendarContract_EventDays(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CalendarContract_EventDays(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static __JniBaseClass query(android::content::ContentResolver arg0, jint arg1, jint arg2, jarray arg3);
	};
} // namespace android::provider

