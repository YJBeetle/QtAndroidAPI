#pragma once

#include "./Drawable.def.hpp"

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
		DrawableContainer(QJniObject obj) : android::graphics::drawable::Drawable(obj) {}
		
		// Constructors
		DrawableContainer();
		
		// Methods
		void applyTheme(android::content::res::Resources_Theme arg0) const;
		jboolean canApplyTheme() const;
		void draw(android::graphics::Canvas arg0) const;
		jint getAlpha() const;
		jint getChangingConfigurations() const;
		android::graphics::drawable::Drawable_ConstantState getConstantState() const;
		android::graphics::drawable::Drawable getCurrent() const;
		void getHotspotBounds(android::graphics::Rect arg0) const;
		jint getIntrinsicHeight() const;
		jint getIntrinsicWidth() const;
		jint getMinimumHeight() const;
		jint getMinimumWidth() const;
		jint getOpacity() const;
		android::graphics::Insets getOpticalInsets() const;
		void getOutline(android::graphics::Outline arg0) const;
		jboolean getPadding(android::graphics::Rect arg0) const;
		jboolean hasFocusStateSpecified() const;
		void invalidateDrawable(android::graphics::drawable::Drawable arg0) const;
		jboolean isAutoMirrored() const;
		jboolean isStateful() const;
		void jumpToCurrentState() const;
		android::graphics::drawable::Drawable mutate() const;
		jboolean onLayoutDirectionChanged(jint arg0) const;
		void scheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1, jlong arg2) const;
		jboolean selectDrawable(jint arg0) const;
		void setAlpha(jint arg0) const;
		void setAutoMirrored(jboolean arg0) const;
		void setColorFilter(android::graphics::ColorFilter arg0) const;
		void setDither(jboolean arg0) const;
		void setEnterFadeDuration(jint arg0) const;
		void setExitFadeDuration(jint arg0) const;
		void setHotspot(jfloat arg0, jfloat arg1) const;
		void setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setTintBlendMode(android::graphics::BlendMode arg0) const;
		void setTintList(android::content::res::ColorStateList arg0) const;
		jboolean setVisible(jboolean arg0, jboolean arg1) const;
		void unscheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1) const;
	};
} // namespace android::graphics::drawable

