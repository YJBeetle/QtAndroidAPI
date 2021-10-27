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
	class CalendarContract_Attendees : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		
		CalendarContract_Attendees(QAndroidJniObject obj);
		// Constructors
		CalendarContract_Attendees() = default;
		
		// Methods
		static QAndroidJniObject query(android::content::ContentResolver arg0, jlong arg1, jarray arg2);
	};
} // namespace android::provider

