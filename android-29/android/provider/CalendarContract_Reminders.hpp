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
	class CalendarContract_Reminders : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CalendarContract_Reminders(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CalendarContract_Reminders(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject query(android::content::ContentResolver arg0, jlong arg1, jarray arg2);
	};
} // namespace android::provider

