#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class ColorSpace;
}
namespace android::graphics
{
	class ImageDecoder;
}
namespace android::util
{
	class Size;
}

namespace android::graphics
{
	class ImageDecoder_ImageInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		ImageDecoder_ImageInfo(QAndroidJniObject obj);
		// Constructors
		ImageDecoder_ImageInfo() = default;
		
		// Methods
		QAndroidJniObject getColorSpace();
		jstring getMimeType();
		QAndroidJniObject getSize();
		jboolean isAnimated();
	};
} // namespace android::graphics

