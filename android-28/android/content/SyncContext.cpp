#include "./SyncResult.hpp"
#include "./SyncContext.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	
	// Methods
	JObject SyncContext::getSyncContextBinder() const
	{
		return callObjectMethod(
			"getSyncContextBinder",
			"()Landroid/os/IBinder;"
		);
	}
	void SyncContext::onFinished(android::content::SyncResult arg0) const
	{
		callMethod<void>(
			"onFinished",
			"(Landroid/content/SyncResult;)V",
			arg0.object()
		);
	}
} // namespace android::content

