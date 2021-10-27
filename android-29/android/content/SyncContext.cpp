#include "./SyncResult.hpp"
#include "./SyncContext.hpp"

namespace android::content
{
	// Fields
	
	SyncContext::SyncContext(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject SyncContext::getSyncContextBinder()
	{
		return __thiz.callObjectMethod(
			"getSyncContextBinder",
			"()Landroid/os/IBinder;"
		);
	}
	void SyncContext::onFinished(android::content::SyncResult arg0)
	{
		__thiz.callMethod<void>(
			"onFinished",
			"(Landroid/content/SyncResult;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::content

