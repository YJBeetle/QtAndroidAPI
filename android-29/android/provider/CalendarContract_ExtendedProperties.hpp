#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class CalendarContract_ExtendedProperties : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		
		CalendarContract_ExtendedProperties(QAndroidJniObject obj);
		// Constructors
		CalendarContract_ExtendedProperties() = default;
		
		// Methods
	};
} // namespace android::provider

