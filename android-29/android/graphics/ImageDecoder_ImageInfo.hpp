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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ImageDecoder_ImageInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ImageDecoder_ImageInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::graphics::ColorSpace getColorSpace();
		jstring getMimeType();
		android::util::Size getSize();
		jboolean isAnimated();
	};
} // namespace android::graphics

