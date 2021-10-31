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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CalendarContract_EventsEntity(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CalendarContract_EventsEntity(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject newEntityIterator(__JniBaseClass arg0, android::content::ContentProviderClient arg1);
		static QAndroidJniObject newEntityIterator(__JniBaseClass arg0, android::content::ContentResolver arg1);
	};
} // namespace android::provider

