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
		ColorStateListDrawable(QAndroidJniObject obj) : android::graphics::drawable::Drawable(obj) {}
		
		// Constructors
		ColorStateListDrawable();
		ColorStateListDrawable(android::content::res::ColorStateList arg0);
		
		// Methods
		void applyTheme(android::content::res::Resources_Theme arg0) const;
		jboolean canApplyTheme() const;
		void clearAlpha() const;
		void draw(android::graphics::Canvas arg0) const;
		jint getAlpha() const;
		jint getChangingConfigurations() const;
		android::graphics::ColorFilter getColorFilter() const;
		android::content::res::ColorStateList getColorStateList() const;
		android::graphics::drawable::Drawable_ConstantState getConstantState() const;
		android::graphics::drawable::Drawable getCurrent() const;
		jint getOpacity() const;
		jboolean hasFocusStateSpecified() const;
		void invalidateDrawable(android::graphics::drawable::Drawable arg0) const;
		jboolean isStateful() const;
		android::graphics::drawable::Drawable mutate() const;
		void scheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1, jlong arg2) const;
		void setAlpha(jint arg0) const;
		void setColorFilter(android::graphics::ColorFilter arg0) const;
		void setColorStateList(android::content::res::ColorStateList arg0) const;
		void setTintBlendMode(android::graphics::BlendMode arg0) const;
		void setTintList(android::content::res::ColorStateList arg0) const;
		void unscheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1) const;
	};
} // namespace android::graphics::drawable

