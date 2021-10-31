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
	
	// QAndroidJniObject forward
	SyncStateContract_Constants::SyncStateContract_Constants(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SyncStateContract_Constants::SyncStateContract_Constants()
		: __JniBaseClass(
			"android.provider.SyncStateContract$Constants",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

