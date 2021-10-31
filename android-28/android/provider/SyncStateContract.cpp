#include "./SyncStateContract.hpp"

namespace android::provider
{
	// Fields
	
	// QAndroidJniObject forward
	SyncStateContract::SyncStateContract(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SyncStateContract::SyncStateContract()
		: __JniBaseClass(
			"android.provider.SyncStateContract",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

