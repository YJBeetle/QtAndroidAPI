#include "../graphics/Bitmap_Config.hpp"
#include "./MediaMetadataRetriever_BitmapParams.hpp"

namespace android::media
{
	// Fields
	
	MediaMetadataRetriever_BitmapParams::MediaMetadataRetriever_BitmapParams(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaMetadataRetriever_BitmapParams::MediaMetadataRetriever_BitmapParams()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaMetadataRetriever$BitmapParams",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject MediaMetadataRetriever_BitmapParams::getActualConfig()
	{
		return __thiz.callObjectMethod(
			"getActualConfig",
			"()Landroid/graphics/Bitmap$Config;"
		);
	}
	QAndroidJniObject MediaMetadataRetriever_BitmapParams::getPreferredConfig()
	{
		return __thiz.callObjectMethod(
			"getPreferredConfig",
			"()Landroid/graphics/Bitmap$Config;"
		);
	}
	void MediaMetadataRetriever_BitmapParams::setPreferredConfig(android::graphics::Bitmap_Config arg0)
	{
		__thiz.callMethod<void>(
			"setPreferredConfig",
			"(Landroid/graphics/Bitmap$Config;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::media

