#include "./SyncResult.hpp"
#include "./SyncContext.hpp"

namespace android::content
{
	// Fields
	
	// QJniObject forward
	SyncContext::SyncContext(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject SyncContext::getSyncContextBinder()
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

