#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Canvas;
}

namespace android::graphics
{
	class Picture : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Picture(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Picture(QJniObject obj);
		
		// Constructors
		Picture();
		Picture(android::graphics::Picture &arg0);
		
		// Methods
		android::graphics::Canvas beginRecording(jint arg0, jint arg1);
		void draw(android::graphics::Canvas arg0);
		void endRecording();
		jint getHeight();
		jint getWidth();
		jboolean requiresHardwareAcceleration();
	};
} // namespace android::graphics

