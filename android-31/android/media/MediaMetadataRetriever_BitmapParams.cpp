#include "../graphics/Bitmap_Config.hpp"
#include "./MediaMetadataRetriever_BitmapParams.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaMetadataRetriever_BitmapParams::MediaMetadataRetriever_BitmapParams(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaMetadataRetriever_BitmapParams::MediaMetadataRetriever_BitmapParams()
		: JObject(
			"android.media.MediaMetadataRetriever$BitmapParams",
			"()V"
		) {}
	
	// Methods
	android::graphics::Bitmap_Config MediaMetadataRetriever_BitmapParams::getActualConfig() const
	{
		return callObjectMethod(
			"getActualConfig",
			"()Landroid/graphics/Bitmap$Config;"
		);
	}
	android::graphics::Bitmap_Config MediaMetadataRetriever_BitmapParams::getPreferredConfig() const
	{
		return callObjectMethod(
			"getPreferredConfig",
			"()Landroid/graphics/Bitmap$Config;"
		);
	}
	void MediaMetadataRetriever_BitmapParams::setPreferredConfig(android::graphics::Bitmap_Config arg0) const
	{
		callMethod<void>(
			"setPreferredConfig",
			"(Landroid/graphics/Bitmap$Config;)V",
			arg0.object()
		);
	}
} // namespace android::media

