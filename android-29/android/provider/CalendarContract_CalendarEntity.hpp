#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class CalendarContract_CalendarEntity : public __JniBaseClass
	{
	public:
		// Fields
		static android::net::Uri CONTENT_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CalendarContract_CalendarEntity(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CalendarContract_CalendarEntity(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static __JniBaseClass newEntityIterator(__JniBaseClass arg0);
	};
} // namespace android::provider

