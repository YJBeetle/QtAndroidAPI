#pragma once

#include "../../../JString.hpp"
#include "./RestoreObserver.def.hpp"

namespace android::app::backup
{
	// Fields
	
	// Constructors
	inline RestoreObserver::RestoreObserver()
		: JObject(
			"android.app.backup.RestoreObserver",
			"()V"
		) {}
	
	// Methods
	inline void RestoreObserver::onUpdate(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"onUpdate",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void RestoreObserver::restoreFinished(jint arg0) const
	{
		callMethod<void>(
			"restoreFinished",
			"(I)V",
			arg0
		);
	}
	inline void RestoreObserver::restoreStarting(jint arg0) const
	{
		callMethod<void>(
			"restoreStarting",
			"(I)V",
			arg0
		);
	}
} // namespace android::app::backup

// Base class headers

