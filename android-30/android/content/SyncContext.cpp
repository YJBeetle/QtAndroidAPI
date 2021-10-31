#include "./SyncResult.hpp"
#include "./SyncContext.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	SyncContext::SyncContext(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass SyncContext::getSyncContextBinder()
	{
		return callObjectMethod(
			"getSyncContextBinder",
			"()Landroid/os/IBinder;"
		);
	}
	void SyncContext::onFinished(android::content::SyncResult arg0)
	{
		callMethod<void>(
			"onFinished",
			"(Landroid/content/SyncResult;)V",
			arg0.object()
		);
	}
} // namespace android::content

