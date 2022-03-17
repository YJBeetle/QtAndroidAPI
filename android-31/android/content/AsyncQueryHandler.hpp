#pragma once

#include "../../JArray.hpp"
#include "./ContentResolver.def.hpp"
#include "./ContentValues.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Handler.def.hpp"
#include "../os/Looper.def.hpp"
#include "../os/Message.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AsyncQueryHandler.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	inline AsyncQueryHandler::AsyncQueryHandler(android::content::ContentResolver arg0)
		: android::os::Handler(
			"android.content.AsyncQueryHandler",
			"(Landroid/content/ContentResolver;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void AsyncQueryHandler::cancelOperation(jint arg0) const
	{
		callMethod<void>(
			"cancelOperation",
			"(I)V",
			arg0
		);
	}
	inline void AsyncQueryHandler::handleMessage(android::os::Message arg0) const
	{
		callMethod<void>(
			"handleMessage",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	inline void AsyncQueryHandler::startDelete(jint arg0, JObject arg1, android::net::Uri arg2, JString arg3, JArray arg4) const
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
	inline void AsyncQueryHandler::startInsert(jint arg0, JObject arg1, android::net::Uri arg2, android::content::ContentValues arg3) const
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
	inline void AsyncQueryHandler::startQuery(jint arg0, JObject arg1, android::net::Uri arg2, JArray arg3, JString arg4, JArray arg5, JString arg6) const
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
	inline void AsyncQueryHandler::startUpdate(jint arg0, JObject arg1, android::net::Uri arg2, android::content::ContentValues arg3, JString arg4, JArray arg5) const
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

// Base class headers
#include "../os/Handler.hpp"

