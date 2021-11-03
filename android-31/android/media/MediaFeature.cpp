#include "./MediaFeature.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaFeature::MediaFeature(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaFeature::MediaFeature()
		: JObject(
			"android.media.MediaFeature",
			"()V"
		) {}
	
	// Methods
} // namespace android::media

