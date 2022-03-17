#pragma once

#include "./Loader.def.hpp"
#include "./Loader_ForceLoadContentObserver.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	inline Loader_ForceLoadContentObserver::Loader_ForceLoadContentObserver(android::content::Loader arg0)
		: android::database::ContentObserver(
			"android.content.Loader$ForceLoadContentObserver",
			"(Landroid/content/Loader;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean Loader_ForceLoadContentObserver::deliverSelfNotifications() const
	{
		return callMethod<jboolean>(
			"deliverSelfNotifications",
			"()Z"
		);
	}
	inline void Loader_ForceLoadContentObserver::onChange(jboolean arg0) const
	{
		callMethod<void>(
			"onChange",
			"(Z)V",
			arg0
		);
	}
} // namespace android::content

// Base class headers
#include "../database/ContentObserver.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
