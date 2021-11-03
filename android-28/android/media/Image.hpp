#pragma once

#include "../../JObject.hpp"

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
	class Image : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Image(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Image(QAndroidJniObject obj);
		
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

