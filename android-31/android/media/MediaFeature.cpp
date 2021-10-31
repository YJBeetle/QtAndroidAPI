#include "./MediaFeature.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaFeature::MediaFeature(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaFeature::MediaFeature()
		: __JniBaseClass(
			"android.media.MediaFeature",
			"()V"
		) {}
	
	// Methods
} // namespace android::media

