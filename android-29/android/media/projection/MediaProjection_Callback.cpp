#include "./MediaProjection_Callback.hpp"

namespace android::media::projection
{
	// Fields
	
	// QAndroidJniObject forward
	MediaProjection_Callback::MediaProjection_Callback(QAndroidJniObject obj) : JObject(obj) {}
	
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

