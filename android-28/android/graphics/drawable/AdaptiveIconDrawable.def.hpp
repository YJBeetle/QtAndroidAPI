#pragma once

#include "./Drawable.def.hpp"

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
	class ColorFilter;
}
namespace android::graphics
{
	class Outline;
}
namespace android::graphics
{
	class Path;
}
namespace android::graphics
{
	class PorterDuff_Mode;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics
{
	class Region;
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
	class AdaptiveIconDrawable : public android::graphics::drawable::Drawable
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AdaptiveIconDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::Drawable(className, sig, std::forward<Ts>(agv)...) {}
		AdaptiveIconDrawable(QAndroidJniObject obj) : android::graphics::drawable::Drawable(obj) {}
		
		// Constructors
		AdaptiveIconDrawable(android::graphics::drawable::Drawable arg0, android::graphics::drawable::Drawable arg1);
		
		// Methods
		static jfloat getExtraInsetFraction();
		void applyTheme(android::content::res::Resources_Theme arg0) const;
		jboolean canApplyTheme() const;
		void draw(android::graphics::Canvas arg0) const;
		jint getAlpha() const;
		android::graphics::drawable::Drawable getBackground() const;
		jint getChangingConfigurations() const;
		android::graphics::drawable::Drawable_ConstantState getConstantState() const;
		android::graphics::drawable::Drawable getForeground() const;
		void getHotspotBounds(android::graphics::Rect arg0) const;
		android::graphics::Path getIconMask() const;
		jint getIntrinsicHeight() const;
		jint getIntrinsicWidth() const;
		jint getOpacity() const;
		void getOutline(android::graphics::Outline arg0) const;
		android::graphics::Region getTransparentRegion() const;
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const;
		void invalidateDrawable(android::graphics::drawable::Drawable arg0) const;
		void invalidateSelf() const;
		jboolean isAutoMirrored() const;
		jboolean isStateful() const;
		void jumpToCurrentState() const;
		android::graphics::drawable::Drawable mutate() const;
		void scheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1, jlong arg2) const;
		void setAlpha(jint arg0) const;
		void setAutoMirrored(jboolean arg0) const;
		void setColorFilter(android::graphics::ColorFilter arg0) const;
		void setDither(jboolean arg0) const;
		void setHotspot(jfloat arg0, jfloat arg1) const;
		void setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setOpacity(jint arg0) const;
		void setTintList(android::content::res::ColorStateList arg0) const;
		void setTintMode(android::graphics::PorterDuff_Mode arg0) const;
		jboolean setVisible(jboolean arg0, jboolean arg1) const;
		void unscheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1) const;
	};
} // namespace android::graphics::drawable

