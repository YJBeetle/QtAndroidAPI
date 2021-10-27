#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class CalendarContract_SyncState : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		
		CalendarContract_SyncState(QAndroidJniObject obj);
		// Constructors
		CalendarContract_SyncState() = default;
		
		// Methods
	};
} // namespace android::provider

