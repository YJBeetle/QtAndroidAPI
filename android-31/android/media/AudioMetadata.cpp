#include "./AudioMetadata.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	AudioMetadata::AudioMetadata(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass AudioMetadata::createMap()
	{
		return callStaticObjectMethod(
			"android.media.AudioMetadata",
			"createMap",
			"()Landroid/media/AudioMetadataMap;"
		);
	}
} // namespace android::media

