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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Image_Plane(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Image_Plane(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		java::nio::ByteBuffer getBuffer();
		jint getPixelStride();
		jint getRowStride();
	};
} // namespace android::media

