#pragma once

#include "../../JObject.hpp"

class JByteArray;
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
class JString;

namespace android::graphics
{
	class NinePatch : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NinePatch(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NinePatch(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		NinePatch(android::graphics::Bitmap arg0, JByteArray arg1);
		NinePatch(android::graphics::Bitmap arg0, JByteArray arg1, JString arg2);
		
		// Methods
		static jboolean isNinePatchChunk(JByteArray arg0);
		void draw(android::graphics::Canvas arg0, android::graphics::Rect arg1) const;
		void draw(android::graphics::Canvas arg0, android::graphics::RectF arg1) const;
		void draw(android::graphics::Canvas arg0, android::graphics::Rect arg1, android::graphics::Paint arg2) const;
		android::graphics::Bitmap getBitmap() const;
		jint getDensity() const;
		jint getHeight() const;
		JString getName() const;
		android::graphics::Paint getPaint() const;
		android::graphics::Region getTransparentRegion(android::graphics::Rect arg0) const;
		jint getWidth() const;
		jboolean hasAlpha() const;
		void setPaint(android::graphics::Paint arg0) const;
	};
} // namespace android::graphics

