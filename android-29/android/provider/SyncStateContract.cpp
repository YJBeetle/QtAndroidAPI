#include "./SyncStateContract.hpp"

namespace android::provider
{
	// Fields
	
	SyncStateContract::SyncStateContract(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SyncStateContract::SyncStateContract()
	{
		__thiz = QAndroidJniObject(
			"android.provider.SyncStateContract",
			"()V"
		);
	}
	
	// Methods
} // namespace android::provider

