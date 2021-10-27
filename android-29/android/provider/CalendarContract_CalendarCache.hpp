#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class CalendarContract_CalendarCache : public __JniBaseClass
	{
	public:
		// Fields
		static jstring KEY_TIMEZONE_INSTANCES();
		static jstring KEY_TIMEZONE_INSTANCES_PREVIOUS();
		static jstring KEY_TIMEZONE_TYPE();
		static jstring TIMEZONE_TYPE_AUTO();
		static jstring TIMEZONE_TYPE_HOME();
		static QAndroidJniObject URI();
		
		CalendarContract_CalendarCache(QAndroidJniObject obj);
		// Constructors
		CalendarContract_CalendarCache() = default;
		
		// Methods
	};
} // namespace android::provider

