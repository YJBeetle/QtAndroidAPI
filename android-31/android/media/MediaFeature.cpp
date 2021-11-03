#include "./MediaFeature.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaFeature::MediaFeature(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaFeature::MediaFeature()
		: JObject(
			"android.media.MediaFeature",
			"()V"
		) {}
	
	// Methods
} // namespace android::media

