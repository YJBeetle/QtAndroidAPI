#include "./ColorSpace.hpp"
#include "./ImageDecoder.hpp"
#include "../util/Size.hpp"
#include "../../JString.hpp"
#include "./ImageDecoder_ImageInfo.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	ImageDecoder_ImageInfo::ImageDecoder_ImageInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::ColorSpace ImageDecoder_ImageInfo::getColorSpace() const
	{
		return callObjectMethod(
			"getColorSpace",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	JString ImageDecoder_ImageInfo::getMimeType() const
	{
		return callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;"
		);
	}
	android::util::Size ImageDecoder_ImageInfo::getSize() const
	{
		return callObjectMethod(
			"getSize",
			"()Landroid/util/Size;"
		);
	}
	jboolean ImageDecoder_ImageInfo::isAnimated() const
	{
		return callMethod<jboolean>(
			"isAnimated",
			"()Z"
		);
	}
} // namespace android::graphics

