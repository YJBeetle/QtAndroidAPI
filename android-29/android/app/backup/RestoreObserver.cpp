#include "./RestoreObserver.hpp"

namespace android::app::backup
{
	// Fields
	
	// QAndroidJniObject forward
	RestoreObserver::RestoreObserver(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	RestoreObserver::RestoreObserver()
		: __JniBaseClass(
			"android.app.backup.RestoreObserver",
			"()V"
		) {}
	
	// Methods
	void RestoreObserver::onUpdate(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"onUpdate",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void RestoreObserver::restoreFinished(jint arg0)
	{
		callMethod<void>(
			"restoreFinished",
			"(I)V",
			arg0
		);
	}
	void RestoreObserver::restoreStarting(jint arg0)
	{
		callMethod<void>(
			"restoreStarting",
			"(I)V",
			arg0
		);
	}
} // namespace android::app::backup

