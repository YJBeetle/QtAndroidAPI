#include "./ContentResolver.hpp"
#include "./ContentValues.hpp"
#include "../net/Uri.hpp"
#include "../os/Handler.hpp"
#include "../os/Looper.hpp"
#include "../os/Message.hpp"
#include "./AsyncQueryHandler.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	AsyncQueryHandler::AsyncQueryHandler(QAndroidJniObject obj) : android::os::Handler(obj) {}
	
	// Constructors
	AsyncQueryHandler::AsyncQueryHandler(android::content::ContentResolver arg0)
		: android::os::Handler(
			"android.content.AsyncQueryHandler",
			"(Landroid/content/ContentResolver;)V",
			arg0.object()
		) {}
	
	// Methods
	void AsyncQueryHandler::cancelOperation(jint arg0)
	{
		callMethod<void>(
			"cancelOperation",
			"(I)V",
			arg0
		);
	}
	void AsyncQueryHandler::handleMessage(android::os::Message arg0)
	{
		callMethod<void>(
			"handleMessage",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	void AsyncQueryHandler::startDelete(jint arg0, jobject arg1, android::net::Uri arg2, jstring arg3, jarray arg4)
	{
		callMethod<void>(
			"startDelete",
			"(ILjava/lang/Object;Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3,
			arg4
		);
	}
	void AsyncQueryHandler::startInsert(jint arg0, jobject arg1, android::net::Uri arg2, android::content::ContentValues arg3)
	{
		callMethod<void>(
			"startInsert",
			"(ILjava/lang/Object;Landroid/net/Uri;Landroid/content/ContentValues;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	void AsyncQueryHandler::startQuery(jint arg0, jobject arg1, android::net::Uri arg2, jarray arg3, jstring arg4, jarray arg5, jstring arg6)
	{
		callMethod<void>(
			"startQuery",
			"(ILjava/lang/Object;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	void AsyncQueryHandler::startUpdate(jint arg0, jobject arg1, android::net::Uri arg2, android::content::ContentValues arg3, jstring arg4, jarray arg5)
	{
		callMethod<void>(
			"startUpdate",
			"(ILjava/lang/Object;Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object(),
			arg4,
			arg5
		);
	}
} // namespace android::content

