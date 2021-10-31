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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentObserver(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContentObserver(QAndroidJniObject obj);
		
		// Constructors
		ContentObserver(android::os::Handler arg0);
		
		// Methods
		jboolean deliverSelfNotifications();
		void dispatchChange(jboolean arg0);
		void dispatchChange(jboolean arg0, android::net::Uri arg1);
		void dispatchChange(jboolean arg0, android::net::Uri arg1, jint arg2);
		void dispatchChange(jboolean arg0, __JniBaseClass arg1, jint arg2);
		void onChange(jboolean arg0);
		void onChange(jboolean arg0, android::net::Uri arg1);
		void onChange(jboolean arg0, android::net::Uri arg1, jint arg2);
		void onChange(jboolean arg0, __JniBaseClass arg1, jint arg2);
	};
} // namespace android::database

