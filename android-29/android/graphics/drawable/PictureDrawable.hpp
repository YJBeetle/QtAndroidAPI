#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Drawable.hpp"

namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class ColorFilter;
}
namespace android::graphics
{
	class Picture;
}

namespace android::graphics::drawable
{
	class PictureDrawable : public android::graphics::drawable::Drawable
	{
	public:
		// Fields
		
		PictureDrawable(QAndroidJniObject obj);
		// Constructors
		PictureDrawable(android::graphics::Picture arg0);
		PictureDrawable() = default;
		
		// Methods
		void draw(android::graphics::Canvas arg0);
		jint getIntrinsicHeight();
		jint getIntrinsicWidth();
		jint getOpacity();
		QAndroidJniObject getPicture();
		void setAlpha(jint arg0);
		void setColorFilter(android::graphics::ColorFilter arg0);
		void setPicture(android::graphics::Picture arg0);
	};
} // namespace android::graphics::drawable

