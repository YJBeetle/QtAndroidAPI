#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::nio
{
	class ByteBuffer;
}

namespace android::media
{
	class Image_Plane : public __JniBaseClass
	{
	public:
		// Fields
		
		Image_Plane(QAndroidJniObject obj);
		// Constructors
		Image_Plane() = default;
		
		// Methods
		QAndroidJniObject getBuffer();
		jint getPixelStride();
		jint getRowStride();
	};
} // namespace android::media

