#pragma once

#include "./Drawable.hpp"

class JIntArray;
namespace android::content::res
{
	class ColorStateList;
}
namespace android::content::res
{
	class Resources_Theme;
}
namespace android::graphics
{
	class BlendMode;
}
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
	class ColorStateListDrawable : public android::graphics::drawable::Drawable
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ColorStateListDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::Drawable(className, sig, std::forward<Ts>(agv)...) {}
		ColorStateListDrawable(QAndroidJniObject obj);
		
		// Constructors
		ColorStateListDrawable();
		ColorStateListDrawable(android::content::res::ColorStateList arg0);
		
		// Methods
		void applyTheme(android::content::res::Resources_Theme arg0);
		jboolean canApplyTheme();
		void clearAlpha();
		void draw(android::graphics::Canvas arg0);
		jint getAlpha();
		jint getChangingConfigurations();
		android::graphics::ColorFilter getColorFilter();
		android::content::res::ColorStateList getColorStateList();
		android::graphics::drawable::Drawable_ConstantState getConstantState();
		android::graphics::drawable::Drawable getCurrent();
		jint getOpacity();
		jboolean hasFocusStateSpecified();
		void invalidateDrawable(android::graphics::drawable::Drawable arg0);
		jboolean isStateful();
		android::graphics::drawable::Drawable mutate();
		void scheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1, jlong arg2);
		void setAlpha(jint arg0);
		void setColorFilter(android::graphics::ColorFilter arg0);
		void setColorStateList(android::content::res::ColorStateList arg0);
		void setTintBlendMode(android::graphics::BlendMode arg0);
		void setTintList(android::content::res::ColorStateList arg0);
		void unscheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1);
	};
} // namespace android::graphics::drawable

