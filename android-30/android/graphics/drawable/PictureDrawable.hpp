#pragma once

#include "../../../JObject.hpp"
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
		
		// QJniObject forward
		template<typename ...Ts> explicit PictureDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::Drawable(className, sig, std::forward<Ts>(agv)...) {}
		PictureDrawable(QJniObject obj);
		
		// Constructors
		PictureDrawable(android::graphics::Picture arg0);
		
		// Methods
		void draw(android::graphics::Canvas arg0);
		jint getIntrinsicHeight();
		jint getIntrinsicWidth();
		jint getOpacity();
		android::graphics::Picture getPicture();
		void setAlpha(jint arg0);
		void setColorFilter(android::graphics::ColorFilter arg0);
		void setPicture(android::graphics::Picture arg0);
	};
} // namespace android::graphics::drawable

