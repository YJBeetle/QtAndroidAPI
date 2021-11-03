#include "../../JArray.hpp"
#include "./ContentResolver.hpp"
#include "./ContentValues.hpp"
#include "../net/Uri.hpp"
#include "../os/Handler.hpp"
#include "../os/Looper.hpp"
#include "../os/Message.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
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
	void AsyncQueryHandler::cancelOperation(jint arg0) const
	{
		callMethod<void>(
			"cancelOperation",
			"(I)V",
			arg0
		);
	}
	void AsyncQueryHandler::handleMessage(android::os::Message arg0) const
	{
		callMethod<void>(
			"handleMessage",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	void AsyncQueryHandler::startDelete(jint arg0, JObject arg1, android::net::Uri arg2, JString arg3, JArray arg4) const
	{
		callMethod<void>(
			"startDelete",
			"(ILjava/lang/Object;Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)V",
			arg0,
			arg1.object<jobject>(),
			arg2.object(),
			arg3.object<jstring>(),
			arg4.object<jarray>()
		);
	}
	void AsyncQueryHandler::startInsert(jint arg0, JObject arg1, android::net::Uri arg2, android::content::ContentValues arg3) const
	{
		callMethod<void>(
			"startInsert",
			"(ILjava/lang/Object;Landroid/net/Uri;Landroid/content/ContentValues;)V",
			arg0,
			arg1.object<jobject>(),
			arg2.object(),
			arg3.object()
		);
	}
	void AsyncQueryHandler::startQuery(jint arg0, JObject arg1, android::net::Uri arg2, JArray arg3, JString arg4, JArray arg5, JString arg6) const
	{
		callMethod<void>(
			"startQuery",
			"(ILjava/lang/Object;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1.object<jobject>(),
			arg2.object(),
			arg3.object<jarray>(),
			arg4.object<jstring>(),
			arg5.object<jarray>(),
			arg6.object<jstring>()
		);
	}
	void AsyncQueryHandler::startUpdate(jint arg0, JObject arg1, android::net::Uri arg2, android::content::ContentValues arg3, JString arg4, JArray arg5) const
	{
		callMethod<void>(
			"startUpdate",
			"(ILjava/lang/Object;Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)V",
			arg0,
			arg1.object<jobject>(),
			arg2.object(),
			arg3.object(),
			arg4.object<jstring>(),
			arg5.object<jarray>()
		);
	}
} // namespace android::content

