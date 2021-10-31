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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CalendarContract_Events(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CalendarContract_Events(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

