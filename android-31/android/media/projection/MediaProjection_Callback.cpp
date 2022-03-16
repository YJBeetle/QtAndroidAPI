#include "./MediaProjection_Callback.hpp"

namespace android::media::projection
{
	// Fields
	
	// Constructors
	MediaProjection_Callback::MediaProjection_Callback()
		: JObject(
			"android.media.projection.MediaProjection$Callback",
			"()V"
		) {}
	
	// Methods
	void MediaProjection_Callback::onStop() const
	{
		callMethod<void>(
			"onStop",
			"()V"
		);
	}
} // namespace android::media::projection

