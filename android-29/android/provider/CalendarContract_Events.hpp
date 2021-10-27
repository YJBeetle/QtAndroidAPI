#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class CalendarContract_Events : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_EXCEPTION_URI();
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject ENTERPRISE_CONTENT_URI();
		
		CalendarContract_Events(QAndroidJniObject obj);
		// Constructors
		CalendarContract_Events() = default;
		
		// Methods
	};
} // namespace android::provider

