#include "./MediaFeature.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaFeature::MediaFeature(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaFeature::MediaFeature()
		: __JniBaseClass(
			"android.media.MediaFeature",
			"()V"
		) {}
	
	// Methods
} // namespace android::media

