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
		
		CalendarContract_CalendarAlerts(QAndroidJniObject obj);
		// Constructors
		CalendarContract_CalendarAlerts() = default;
		
		// Methods
	};
} // namespace android::provider

