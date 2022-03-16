#include "../../../JString.hpp"
#include "./RestoreObserver.hpp"

namespace android::app::backup
{
	// Fields
	
	// Constructors
	RestoreObserver::RestoreObserver()
		: JObject(
			"android.app.backup.RestoreObserver",
			"()V"
		) {}
	
	// Methods
	void RestoreObserver::onUpdate(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"onUpdate",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	void RestoreObserver::restoreFinished(jint arg0) const
	{
		callMethod<void>(
			"restoreFinished",
			"(I)V",
			arg0
		);
	}
	void RestoreObserver::restoreStarting(jint arg0) const
	{
		callMethod<void>(
			"restoreStarting",
			"(I)V",
			arg0
		);
	}
} // namespace android::app::backup

