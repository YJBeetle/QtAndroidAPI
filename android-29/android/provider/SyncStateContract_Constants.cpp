#include "./SyncStateContract_Constants.hpp"

namespace android::provider
{
	// Fields
	jstring SyncStateContract_Constants::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.SyncStateContract$Constants",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	SyncStateContract_Constants::SyncStateContract_Constants(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SyncStateContract_Constants::SyncStateContract_Constants()
	{
		__thiz = QAndroidJniObject(
			"android.provider.SyncStateContract$Constants",
			"()V"
		);
	}
	
	// Methods
} // namespace android::provider

