#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Canvas;
}

namespace android::graphics
{
	class Picture : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Picture(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Picture(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Picture();
		Picture(android::graphics::Picture &arg0);
		
		// Methods
		android::graphics::Canvas beginRecording(jint arg0, jint arg1) const;
		void draw(android::graphics::Canvas arg0) const;
		void endRecording() const;
		jint getHeight() const;
		jint getWidth() const;
		jboolean requiresHardwareAcceleration() const;
	};
} // namespace android::graphics

