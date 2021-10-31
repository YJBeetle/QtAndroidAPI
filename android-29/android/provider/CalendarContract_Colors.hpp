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
		static android::net::Uri CONTENT_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit CalendarContract_Colors(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CalendarContract_Colors(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

