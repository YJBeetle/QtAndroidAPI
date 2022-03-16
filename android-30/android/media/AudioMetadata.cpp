#include "./AudioMetadata.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	JObject AudioMetadata::createMap()
	{
		return callStaticObjectMethod(
			"android.media.AudioMetadata",
			"createMap",
			"()Landroid/media/AudioMetadataMap;"
		);
	}
} // namespace android::media

