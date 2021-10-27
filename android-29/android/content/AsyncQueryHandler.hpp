#pragma once

#include "../../__JniBaseClass.hpp"
#include "../os/Handler.hpp"

namespace android::content
{
	class ContentResolver;
}
namespace android::content
{
	class ContentValues;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Handler;
}
namespace android::os
{
	class Looper;
}
namespace android::os
{
	class Message;
}

namespace android::content
{
	class AsyncQueryHandler : public android::os::Handler
	{
	public:
		// Fields
		
		AsyncQueryHandler(QAndroidJniObject obj);
		// Constructors
		AsyncQueryHandler(android::content::ContentResolver &arg0);
		AsyncQueryHandler() = default;
		
		// Methods
		void cancelOperation(jint arg0);
		void handleMessage(android::os::Message arg0);
		void startDelete(jint arg0, jobject arg1, android::net::Uri arg2, jstring arg3, jarray arg4);
		void startDelete(jint arg0, jobject arg1, android::net::Uri arg2, const QString &arg3, jarray arg4);
		void startInsert(jint arg0, jobject arg1, android::net::Uri arg2, android::content::ContentValues arg3);
		void startQuery(jint arg0, jobject arg1, android::net::Uri arg2, jarray arg3, jstring arg4, jarray arg5, jstring arg6);
		void startQuery(jint arg0, jobject arg1, android::net::Uri arg2, jarray arg3, const QString &arg4, jarray arg5, const QString &arg6);
		void startUpdate(jint arg0, jobject arg1, android::net::Uri arg2, android::content::ContentValues arg3, jstring arg4, jarray arg5);
		void startUpdate(jint arg0, jobject arg1, android::net::Uri arg2, android::content::ContentValues arg3, const QString &arg4, jarray arg5);
	};
} // namespace android::content

