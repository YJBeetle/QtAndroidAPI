#include "./SyncStateContract.hpp"

namespace android::provider
{
	// Fields
	
	// QJniObject forward
	SyncStateContract::SyncStateContract(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SyncStateContract::SyncStateContract()
		: JObject(
			"android.provider.SyncStateContract",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

