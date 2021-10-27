#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::hardware
{
	class HardwareBuffer;
}

namespace android::media
{
	class Image : public __JniBaseClass
	{
	public:
		// Fields
		
		Image(QAndroidJniObject obj);
		// Constructors
		Image() = default;
		
		// Methods
		void close();
		QAndroidJniObject getCropRect();
		jint getFormat();
		QAndroidJniObject getHardwareBuffer();
		jint getHeight();
		jarray getPlanes();
		jlong getTimestamp();
		jint getWidth();
		void setCropRect(android::graphics::Rect arg0);
		void setTimestamp(jlong arg0);
	};
} // namespace android::media

