#include "./ColorSpace.hpp"
#include "../util/Size.hpp"
#include "./ImageDecoder_ImageInfo.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	ImageDecoder_ImageInfo::ImageDecoder_ImageInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::ColorSpace ImageDecoder_ImageInfo::getColorSpace()
	{
		return callObjectMethod(
			"getColorSpace",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	jstring ImageDecoder_ImageInfo::getMimeType()
	{
		return callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::util::Size ImageDecoder_ImageInfo::getSize()
	{
		return callObjectMethod(
			"getSize",
			"()Landroid/util/Size;"
		);
	}
	jboolean ImageDecoder_ImageInfo::isAnimated()
	{
		return callMethod<jboolean>(
			"isAnimated",
			"()Z"
		);
	}
} // namespace android::graphics

