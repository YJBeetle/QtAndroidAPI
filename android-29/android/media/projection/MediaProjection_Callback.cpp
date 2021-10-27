#include "./MediaProjection_Callback.hpp"

namespace android::media::projection
{
	// Fields
	
	MediaProjection_Callback::MediaProjection_Callback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaProjection_Callback::MediaProjection_Callback()
	{
		__thiz = QAndroidJniObject(
			"android.media.projection.MediaProjection$Callback",
			"()V"
		);
	}
	
	// Methods
	void MediaProjection_Callback::onStop()
	{
		__thiz.callMethod<void>(
			"onStop",
			"()V"
		);
	}
} // namespace android::media::projection

