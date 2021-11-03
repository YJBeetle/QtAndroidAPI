#include "./SyncStateContract.hpp"

namespace android::provider
{
	// Fields
	
	// QAndroidJniObject forward
	SyncStateContract::SyncStateContract(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SyncStateContract::SyncStateContract()
		: JObject(
			"android.provider.SyncStateContract",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

