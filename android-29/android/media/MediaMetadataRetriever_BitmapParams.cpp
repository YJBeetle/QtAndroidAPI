#include "../graphics/Bitmap_Config.hpp"
#include "./MediaMetadataRetriever_BitmapParams.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaMetadataRetriever_BitmapParams::MediaMetadataRetriever_BitmapParams(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaMetadataRetriever_BitmapParams::MediaMetadataRetriever_BitmapParams()
		: __JniBaseClass(
			"android.media.MediaMetadataRetriever$BitmapParams",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject MediaMetadataRetriever_BitmapParams::getActualConfig()
	{
		return callObjectMethod(
			"getActualConfig",
			"()Landroid/graphics/Bitmap$Config;"
		);
	}
	QAndroidJniObject MediaMetadataRetriever_BitmapParams::getPreferredConfig()
	{
		return callObjectMethod(
			"getPreferredConfig",
			"()Landroid/graphics/Bitmap$Config;"
		);
	}
	void MediaMetadataRetriever_BitmapParams::setPreferredConfig(android::graphics::Bitmap_Config arg0)
	{
		callMethod<void>(
			"setPreferredConfig",
			"(Landroid/graphics/Bitmap$Config;)V",
			arg0.object()
		);
	}
} // namespace android::media

