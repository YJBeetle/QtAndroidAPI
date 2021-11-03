#include "./AudioMetadata.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	AudioMetadata::AudioMetadata(QJniObject obj) : JObject(obj) {}
	
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

