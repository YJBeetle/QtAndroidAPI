#include "./SyncStateContract.hpp"

namespace android::provider
{
	// Fields
	
	// QJniObject forward
	SyncStateContract::SyncStateContract(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SyncStateContract::SyncStateContract()
		: __JniBaseClass(
			"android.provider.SyncStateContract",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

