#include "../../JString.hpp"
#include "./SyncStateContract_Constants.hpp"

namespace android::provider
{
	// Fields
	JString SyncStateContract_Constants::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.SyncStateContract$Constants",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	SyncStateContract_Constants::SyncStateContract_Constants()
		: JObject(
			"android.provider.SyncStateContract$Constants",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

