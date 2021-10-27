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
		static QAndroidJniObject CONTENT_URI();
		
		CalendarContract_EventDays(QAndroidJniObject obj);
		// Constructors
		CalendarContract_EventDays() = default;
		
		// Methods
		static QAndroidJniObject query(android::content::ContentResolver arg0, jint arg1, jint arg2, jarray arg3);
	};
} // namespace android::provider

