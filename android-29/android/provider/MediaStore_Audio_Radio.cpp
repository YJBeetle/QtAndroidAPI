#include "./MediaStore_Audio_Radio.hpp"

namespace android::provider
{
	// Fields
	jstring MediaStore_Audio_Radio::ENTRY_CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Radio",
			"ENTRY_CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	MediaStore_Audio_Radio::MediaStore_Audio_Radio(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

