#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class CalendarContract_CalendarAlerts : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject CONTENT_URI_BY_INSTANCE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CalendarContract_CalendarAlerts(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CalendarContract_CalendarAlerts(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

