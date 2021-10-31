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
		
		// QJniObject forward
		template<typename ...Ts> explicit Image(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Image(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		android::graphics::Rect getCropRect();
		jint getFormat();
		android::hardware::HardwareBuffer getHardwareBuffer();
		jint getHeight();
		jarray getPlanes();
		jlong getTimestamp();
		jint getWidth();
		void setCropRect(android::graphics::Rect arg0);
		void setTimestamp(jlong arg0);
	};
} // namespace android::media

