#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Handler;
}

namespace android::database
{
	class ContentObserver : public __JniBaseClass
	{
	public:
		// Fields
		
		ContentObserver(QAndroidJniObject obj);
		// Constructors
		ContentObserver(android::os::Handler &arg0);
		ContentObserver() = default;
		
		// Methods
		jboolean deliverSelfNotifications();
		void dispatchChange(jboolean arg0);
		void dispatchChange(jboolean arg0, android::net::Uri arg1);
		void onChange(jboolean arg0);
		void onChange(jboolean arg0, android::net::Uri arg1);
	};
} // namespace android::database

