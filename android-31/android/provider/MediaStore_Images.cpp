#include "./MediaStore_Images.hpp"

namespace android::provider
{
	// Fields
	
	// QJniObject forward
	MediaStore_Images::MediaStore_Images(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaStore_Images::MediaStore_Images()
		: JObject(
			"android.provider.MediaStore$Images",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

