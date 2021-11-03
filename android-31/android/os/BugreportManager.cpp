#include "./BugreportManager_BugreportCallback.hpp"
#include "./ParcelFileDescriptor.hpp"
#include "./BugreportManager.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	BugreportManager::BugreportManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void BugreportManager::cancelBugreport()
	{
		callMethod<void>(
			"cancelBugreport",
			"()V"
		);
	}
	void BugreportManager::startConnectivityBugreport(android::os::ParcelFileDescriptor arg0, JObject arg1, android::os::BugreportManager_BugreportCallback arg2)
	{
		callMethod<void>(
			"startConnectivityBugreport",
			"(Landroid/os/ParcelFileDescriptor;Ljava/util/concurrent/Executor;Landroid/os/BugreportManager$BugreportCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::os

