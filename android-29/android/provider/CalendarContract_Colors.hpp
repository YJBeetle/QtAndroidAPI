#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class CalendarContract_Colors : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		
		CalendarContract_Colors(QAndroidJniObject obj);
		// Constructors
		CalendarContract_Colors() = default;
		
		// Methods
	};
} // namespace android::provider

