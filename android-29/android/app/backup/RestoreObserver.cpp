#include "./RestoreObserver.hpp"

namespace android::app::backup
{
	// Fields
	
	RestoreObserver::RestoreObserver(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RestoreObserver::RestoreObserver()
	{
		__thiz = QAndroidJniObject(
			"android.app.backup.RestoreObserver",
			"()V"
		);
	}
	
	// Methods
	void RestoreObserver::onUpdate(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onUpdate",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void RestoreObserver::restoreFinished(jint arg0)
	{
		__thiz.callMethod<void>(
			"restoreFinished",
			"(I)V",
			arg0
		);
	}
	void RestoreObserver::restoreStarting(jint arg0)
	{
		__thiz.callMethod<void>(
			"restoreStarting",
			"(I)V",
			arg0
		);
	}
} // namespace android::app::backup

