#pragma once

#include "./LayerDrawable.hpp"

class JIntArray;
namespace android::content::res
{
	class ColorStateList;
}
namespace android::content::res
{
	class Resources;
}
namespace android::content::res
{
	class Resources_Theme;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Outline;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::graphics::drawable
{
	class Drawable_ConstantState;
}

namespace android::graphics::drawable
{
	class RippleDrawable : public android::graphics::drawable::LayerDrawable
	{
	public:
		// Fields
		static jint RADIUS_AUTO();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RippleDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::LayerDrawable(className, sig, std::forward<Ts>(agv)...) {}
		RippleDrawable(QAndroidJniObject obj);
		
		// Constructors
		RippleDrawable(android::content::res::ColorStateList arg0, android::graphics::drawable::Drawable arg1, android::graphics::drawable::Drawable arg2);
		
		// Methods
		void applyTheme(android::content::res::Resources_Theme arg0) const;
		jboolean canApplyTheme() const;
		void draw(android::graphics::Canvas arg0) const;
		android::graphics::drawable::Drawable_ConstantState getConstantState() const;
		android::graphics::Rect getDirtyBounds() const;
		void getHotspotBounds(android::graphics::Rect arg0) const;
		jint getOpacity() const;
		void getOutline(android::graphics::Outline arg0) const;
		jint getRadius() const;
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const;
		void invalidateSelf() const;
		jboolean isStateful() const;
		void jumpToCurrentState() const;
		android::graphics::drawable::Drawable mutate() const;
		void setColor(android::content::res::ColorStateList arg0) const;
		jboolean setDrawableByLayerId(jint arg0, android::graphics::drawable::Drawable arg1) const;
		void setHotspot(jfloat arg0, jfloat arg1) const;
		void setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setPaddingMode(jint arg0) const;
		void setRadius(jint arg0) const;
		jboolean setVisible(jboolean arg0, jboolean arg1) const;
	};
} // namespace android::graphics::drawable

