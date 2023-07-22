#pragma once

#include "./ContentObserver.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JObject.hpp"
#include "./ContentObservable.def.hpp"

namespace android::database
{
	// Fields
	
	// Constructors
	inline ContentObservable::ContentObservable()
		: android::database::Observable(
			"android.database.ContentObservable",
			"()V"
		) {}
	
	// Methods
	inline void ContentObservable::dispatchChange(jboolean arg0) const
	{
		callMethod<void>(
			"dispatchChange",
			"(Z)V",
			arg0
		);
	}
	inline void ContentObservable::dispatchChange(jboolean arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"dispatchChange",
			"(ZLandroid/net/Uri;)V",
			arg0,
			arg1.object()
		);
	}
	inline void ContentObservable::notifyChange(jboolean arg0) const
	{
		callMethod<void>(
			"notifyChange",
			"(Z)V",
			arg0
		);
	}
	inline void ContentObservable::registerObserver(android::database::ContentObserver arg0) const
	{
		callMethod<void>(
			"registerObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.object()
		);
	}
	inline void ContentObservable::registerObserver(JObject arg0) const
	{
		callMethod<void>(
			"registerObserver",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
} // namespace android::database

// Base class headers
#include "./Observable.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::database;
#endif
