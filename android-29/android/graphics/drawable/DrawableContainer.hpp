#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Drawable.hpp"

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
	class Insets;
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
	class DrawableContainer_DrawableContainerState;
}

namespace android::graphics::drawable
{
	class DrawableContainer : public android::graphics::drawable::Drawable
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DrawableContainer(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::Drawable(className, sig, std::forward<Ts>(agv)...) {}
		DrawableContainer(QJniObject obj);
		
		// Constructors
		DrawableContainer();
		
		// Methods
		void applyTheme(android::content::res::Resources_Theme arg0);
		jboolean canApplyTheme();
		void draw(android::graphics::Canvas arg0);
		jint getAlpha();
		jint getChangingConfigurations();
		android::graphics::drawable::Drawable_ConstantState getConstantState();
		android::graphics::drawable::Drawable getCurrent();
		void getHotspotBounds(android::graphics::Rect arg0);
		jint getIntrinsicHeight();
		jint getIntrinsicWidth();
		jint getMinimumHeight();
		jint getMinimumWidth();
		jint getOpacity();
		android::graphics::Insets getOpticalInsets();
		void getOutline(android::graphics::Outline arg0);
		jboolean getPadding(android::graphics::Rect arg0);
		void invalidateDrawable(android::graphics::drawable::Drawable arg0);
		jboolean isAutoMirrored();
		jboolean isStateful();
		void jumpToCurrentState();
		android::graphics::drawable::Drawable mutate();
		jboolean onLayoutDirectionChanged(jint arg0);
		void scheduleDrawable(android::graphics::drawable::Drawable arg0, __JniBaseClass arg1, jlong arg2);
		jboolean selectDrawable(jint arg0);
		void setAlpha(jint arg0);
		void setAutoMirrored(jboolean arg0);
		void setColorFilter(android::graphics::ColorFilter arg0);
		void setDither(jboolean arg0);
		void setEnterFadeDuration(jint arg0);
		void setExitFadeDuration(jint arg0);
		void setHotspot(jfloat arg0, jfloat arg1);
		void setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3);
		void setTintBlendMode(android::graphics::BlendMode arg0);
		void setTintList(android::content::res::ColorStateList arg0);
		jboolean setVisible(jboolean arg0, jboolean arg1);
		void unscheduleDrawable(android::graphics::drawable::Drawable arg0, __JniBaseClass arg1);
	};
} // namespace android::graphics::drawable

