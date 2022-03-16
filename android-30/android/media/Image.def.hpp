#pragma once

#include "../../JObject.hpp"

class JArray;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit Image(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Image(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void close() const;
		android::graphics::Rect getCropRect() const;
		jint getFormat() const;
		android::hardware::HardwareBuffer getHardwareBuffer() const;
		jint getHeight() const;
		JArray getPlanes() const;
		jlong getTimestamp() const;
		jint getWidth() const;
		void setCropRect(android::graphics::Rect arg0) const;
		void setTimestamp(jlong arg0) const;
	};
} // namespace android::media

