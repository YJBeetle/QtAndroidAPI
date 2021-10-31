#include "./MediaStore_Images.hpp"

namespace android::provider
{
	// Fields
	
	// QAndroidJniObject forward
	MediaStore_Images::MediaStore_Images(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaStore_Images::MediaStore_Images()
		: __JniBaseClass(
			"android.provider.MediaStore$Images",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

