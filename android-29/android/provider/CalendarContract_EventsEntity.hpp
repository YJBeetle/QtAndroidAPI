#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ContentProviderClient;
}
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
	class CalendarContract_EventsEntity : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		
		CalendarContract_EventsEntity(QAndroidJniObject obj);
		// Constructors
		CalendarContract_EventsEntity() = default;
		
		// Methods
		static QAndroidJniObject newEntityIterator(__JniBaseClass arg0, android::content::ContentProviderClient arg1);
		static QAndroidJniObject newEntityIterator(__JniBaseClass arg0, android::content::ContentResolver arg1);
	};
} // namespace android::provider

