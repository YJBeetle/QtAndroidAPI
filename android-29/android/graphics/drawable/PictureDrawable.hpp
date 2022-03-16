#pragma once

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PictureDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::Drawable(className, sig, std::forward<Ts>(agv)...) {}
		PictureDrawable(QAndroidJniObject obj) : android::graphics::drawable::Drawable(obj) {}
		
		// Constructors
		PictureDrawable(android::graphics::Picture arg0);
		
		// Methods
		void draw(android::graphics::Canvas arg0) const;
		jint getIntrinsicHeight() const;
		jint getIntrinsicWidth() const;
		jint getOpacity() const;
		android::graphics::Picture getPicture() const;
		void setAlpha(jint arg0) const;
		void setColorFilter(android::graphics::ColorFilter arg0) const;
		void setPicture(android::graphics::Picture arg0) const;
	};
} // namespace android::graphics::drawable

