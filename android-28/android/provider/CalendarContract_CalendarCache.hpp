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
		static android::net::Uri URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit CalendarContract_CalendarCache(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CalendarContract_CalendarCache(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

