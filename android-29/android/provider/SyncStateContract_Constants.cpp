#include "./SyncStateContract_Constants.hpp"

namespace android::provider
{
	// Fields
	jstring SyncStateContract_Constants::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.SyncStateContract$Constants",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	SyncStateContract_Constants::SyncStateContract_Constants(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SyncStateContract_Constants::SyncStateContract_Constants()
		: JObject(
			"android.provider.SyncStateContract$Constants",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

