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
	
	MediaStore_Audio_Radio::MediaStore_Audio_Radio(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::provider

