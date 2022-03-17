#pragma once

#include "../net/Uri.def.hpp"
#include "../os/Handler.def.hpp"
#include "./ContentObserver.def.hpp"

namespace android::database
{
	// Fields
	
	// Constructors
	inline ContentObserver::ContentObserver(android::os::Handler arg0)
		: JObject(
			"android.database.ContentObserver",
			"(Landroid/os/Handler;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean ContentObserver::deliverSelfNotifications() const
	{
		return callMethod<jboolean>(
			"deliverSelfNotifications",
			"()Z"
		);
	}
	inline void ContentObserver::dispatchChange(jboolean arg0) const
	{
		callMethod<void>(
			"dispatchChange",
			"(Z)V",
			arg0
		);
	}
	inline void ContentObserver::dispatchChange(jboolean arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"dispatchChange",
			"(ZLandroid/net/Uri;)V",
			arg0,
			arg1.object()
		);
	}
	inline void ContentObserver::onChange(jboolean arg0) const
	{
		callMethod<void>(
			"onChange",
			"(Z)V",
			arg0
		);
	}
	inline void ContentObserver::onChange(jboolean arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"onChange",
			"(ZLandroid/net/Uri;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::database

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::database;
#endif
