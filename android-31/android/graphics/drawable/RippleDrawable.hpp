#pragma once

#include "../../../JObject.hpp"
#include "./Drawable.hpp"
#include "./LayerDrawable.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit RippleDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::LayerDrawable(className, sig, std::forward<Ts>(agv)...) {}
		RippleDrawable(QJniObject obj);
		
		// Constructors
		RippleDrawable(android::content::res::ColorStateList arg0, android::graphics::drawable::Drawable arg1, android::graphics::drawable::Drawable arg2);
		
		// Methods
		void applyTheme(android::content::res::Resources_Theme arg0);
		jboolean canApplyTheme();
		void draw(android::graphics::Canvas arg0);
		android::graphics::drawable::Drawable_ConstantState getConstantState();
		android::graphics::Rect getDirtyBounds();
		android::content::res::ColorStateList getEffectColor();
		void getHotspotBounds(android::graphics::Rect arg0);
		jint getOpacity();
		void getOutline(android::graphics::Outline arg0);
		jint getRadius();
		jboolean hasFocusStateSpecified();
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3);
		void invalidateSelf();
		jboolean isProjected();
		jboolean isStateful();
		void jumpToCurrentState();
		android::graphics::drawable::Drawable mutate();
		void setColor(android::content::res::ColorStateList arg0);
		jboolean setDrawableByLayerId(jint arg0, android::graphics::drawable::Drawable arg1);
		void setEffectColor(android::content::res::ColorStateList arg0);
		void setHotspot(jfloat arg0, jfloat arg1);
		void setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3);
		void setPaddingMode(jint arg0);
		void setRadius(jint arg0);
		jboolean setVisible(jboolean arg0, jboolean arg1);
	};
} // namespace android::graphics::drawable

