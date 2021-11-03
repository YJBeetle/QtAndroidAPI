#include "../../JString.hpp"
#include "./MediaStore_Audio_Radio.hpp"

namespace android::provider
{
	// Fields
	JString MediaStore_Audio_Radio::ENTRY_CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Radio",
			"ENTRY_CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	MediaStore_Audio_Radio::MediaStore_Audio_Radio(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

