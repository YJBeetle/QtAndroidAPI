#include "./ColorSpace.hpp"
#include "./ImageDecoder.hpp"
#include "../util/Size.hpp"
#include "./ImageDecoder_ImageInfo.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	ImageDecoder_ImageInfo::ImageDecoder_ImageInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ImageDecoder_ImageInfo::getColorSpace()
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
	QAndroidJniObject ImageDecoder_ImageInfo::getSize()
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

