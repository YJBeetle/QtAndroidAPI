#include "./MediaProjection_Callback.hpp"

namespace android::media::projection
{
	// Fields
	
	// QJniObject forward
	MediaProjection_Callback::MediaProjection_Callback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaProjection_Callback::MediaProjection_Callback()
		: JObject(
			"android.media.projection.MediaProjection$Callback",
			"()V"
		) {}
	
	// Methods
	void MediaProjection_Callback::onStop()
	{
		callMethod<void>(
			"onStop",
			"()V"
		);
	}
} // namespace android::media::projection

