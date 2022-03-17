#pragma once

#include "./AbstractCursor.def.hpp"
#include "./AbstractCursor_SelfContentObserver.def.hpp"

namespace android::database
{
	// Fields
	
	// Constructors
	inline AbstractCursor_SelfContentObserver::AbstractCursor_SelfContentObserver(android::database::AbstractCursor arg0)
		: android::database::ContentObserver(
			"android.database.AbstractCursor$SelfContentObserver",
			"(Landroid/database/AbstractCursor;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean AbstractCursor_SelfContentObserver::deliverSelfNotifications() const
	{
		return callMethod<jboolean>(
			"deliverSelfNotifications",
			"()Z"
		);
	}
	inline void AbstractCursor_SelfContentObserver::onChange(jboolean arg0) const
	{
		callMethod<void>(
			"onChange",
			"(Z)V",
			arg0
		);
	}
} // namespace android::database

// Base class headers
#include "./ContentObserver.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::database;
#endif
