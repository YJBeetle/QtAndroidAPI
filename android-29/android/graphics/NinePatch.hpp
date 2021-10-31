#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Paint;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics
{
	class RectF;
}
namespace android::graphics
{
	class Region;
}

namespace android::graphics
{
	class NinePatch : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NinePatch(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NinePatch(QJniObject obj);
		
		// Constructors
		NinePatch(android::graphics::Bitmap arg0, jbyteArray arg1);
		NinePatch(android::graphics::Bitmap arg0, jbyteArray arg1, jstring arg2);
		
		// Methods
		static jboolean isNinePatchChunk(jbyteArray arg0);
		void draw(android::graphics::Canvas arg0, android::graphics::Rect arg1);
		void draw(android::graphics::Canvas arg0, android::graphics::RectF arg1);
		void draw(android::graphics::Canvas arg0, android::graphics::Rect arg1, android::graphics::Paint arg2);
		android::graphics::Bitmap getBitmap();
		jint getDensity();
		jint getHeight();
		jstring getName();
		android::graphics::Paint getPaint();
		android::graphics::Region getTransparentRegion(android::graphics::Rect arg0);
		jint getWidth();
		jboolean hasAlpha();
		void setPaint(android::graphics::Paint arg0);
	};
} // namespace android::graphics

