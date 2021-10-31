#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Drawable.hpp"

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
	class Outline;
}
namespace android::graphics
{
	class Path;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit AdaptiveIconDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::Drawable(className, sig, std::forward<Ts>(agv)...) {}
		AdaptiveIconDrawable(QJniObject obj);
		
		// Constructors
		AdaptiveIconDrawable(android::graphics::drawable::Drawable arg0, android::graphics::drawable::Drawable arg1);
		
		// Methods
		static jfloat getExtraInsetFraction();
		void applyTheme(android::content::res::Resources_Theme arg0);
		jboolean canApplyTheme();
		void draw(android::graphics::Canvas arg0);
		jint getAlpha();
		android::graphics::drawable::Drawable getBackground();
		jint getChangingConfigurations();
		android::graphics::drawable::Drawable_ConstantState getConstantState();
		android::graphics::drawable::Drawable getForeground();
		void getHotspotBounds(android::graphics::Rect arg0);
		android::graphics::Path getIconMask();
		jint getIntrinsicHeight();
		jint getIntrinsicWidth();
		jint getOpacity();
		void getOutline(android::graphics::Outline arg0);
		android::graphics::Region getTransparentRegion();
		void inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3);
		void invalidateDrawable(android::graphics::drawable::Drawable arg0);
		void invalidateSelf();
		jboolean isAutoMirrored();
		jboolean isProjected();
		jboolean isStateful();
		void jumpToCurrentState();
		android::graphics::drawable::Drawable mutate();
		void scheduleDrawable(android::graphics::drawable::Drawable arg0, __JniBaseClass arg1, jlong arg2);
		void setAlpha(jint arg0);
		void setAutoMirrored(jboolean arg0);
		void setColorFilter(android::graphics::ColorFilter arg0);
		void setDither(jboolean arg0);
		void setHotspot(jfloat arg0, jfloat arg1);
		void setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3);
		void setOpacity(jint arg0);
		void setTintBlendMode(android::graphics::BlendMode arg0);
		void setTintList(android::content::res::ColorStateList arg0);
		jboolean setVisible(jboolean arg0, jboolean arg1);
		void unscheduleDrawable(android::graphics::drawable::Drawable arg0, __JniBaseClass arg1);
	};
} // namespace android::graphics::drawable

