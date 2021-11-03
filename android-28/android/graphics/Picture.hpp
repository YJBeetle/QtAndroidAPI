#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Canvas;
}
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}

namespace android::graphics
{
	class Picture : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Picture(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Picture(QJniObject obj);
		
		// Constructors
		Picture();
		Picture(android::graphics::Picture &arg0);
		
		// Methods
		static android::graphics::Picture createFromStream(java::io::InputStream arg0);
		android::graphics::Canvas beginRecording(jint arg0, jint arg1);
		void draw(android::graphics::Canvas arg0);
		void endRecording();
		jint getHeight();
		jint getWidth();
		jboolean requiresHardwareAcceleration();
		void writeToStream(java::io::OutputStream arg0);
	};
} // namespace android::graphics

