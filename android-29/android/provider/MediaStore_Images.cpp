#include "./MediaStore_Images.hpp"

namespace android::provider
{
	// Fields
	
	MediaStore_Images::MediaStore_Images(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaStore_Images::MediaStore_Images()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore$Images",
			"()V"
		);
	}
	
	// Methods
} // namespace android::provider

