#pragma once

#include "../../../JObject.hpp"
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
	class LayerDrawable : public android::graphics::drawable::Drawable
	{
	public:
		// Fields
		static jint INSET_UNDEFINED();
		static jint PADDING_MODE_NEST();
		static jint PADDING_MODE_STACK();
		
		// QJniObject forward
		template<typename ...Ts> explicit LayerDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::Drawable(className, sig, std::forward<Ts>(agv)...) {}
		LayerDrawable(QJniObject obj);
		
		// Constructors
		LayerDrawable(jarray arg0);
		
		// Methods
		jint addLayer(android::graphics::drawable::Drawable arg0);
		void applyTheme(android::content::res::Resources_Theme arg0);
		jboolean canApplyTheme();
		void draw(android::graphics::Canvas arg0);
		android::graphics::drawable::Drawable findDrawableByLayerId(jint arg0);
		jint findIndexByLayerId(jint arg0);
		jint getAlpha();
		jint getBottomPadding();
		jint getChangingConfigurations();
		android::graphics::drawable::Drawable_ConstantState getConstantState();
		android::graphics::drawable::Drawable getDrawable(jint arg0);
		jint getEndPadding();
		void getHotspotBounds(android::graphics::Rect arg0);
		jint getId(jint arg0);
		jint getIntrinsicHeight();
		jint getIntrinsicWidth();
		jint getLayerGravity(jint arg0);
		jint getLayerHeight(jint arg0);
		jint getLayerInsetBottom(jint arg0);
		jint getLayerInsetEnd(jint arg0);
		jint getLayerInsetLeft(jint arg0);
		jint getLayerInsetRight(jint arg0);
		jint getLayerInsetStart(jint arg0);
		jint getLayerInsetTop(jint arg0);
		jint getLayerWidth(jint arg0);
		jint getLeftPadding();
		jint getNumberOfLayers();
		jint getOpacity();
		void getOutline(android::graphics::Outline arg0);
		jboolean getPadding(android::graphics::Rect arg0);
		jint getPaddingMode();
		jint getRightPadding();
		jint getStartPadding();
		jint getTopPadding();
		jboolean hasFocusStateSpecified();
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3);
		void invalidateDrawable(android::graphics::drawable::Drawable arg0);
		jboolean isAutoMirrored();
		jboolean isProjected();
		jboolean isStateful();
		void jumpToCurrentState();
		android::graphics::drawable::Drawable mutate();
		jboolean onLayoutDirectionChanged(jint arg0);
		void scheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1, jlong arg2);
		void setAlpha(jint arg0);
		void setAutoMirrored(jboolean arg0);
		void setColorFilter(android::graphics::ColorFilter arg0);
		void setDither(jboolean arg0);
		void setDrawable(jint arg0, android::graphics::drawable::Drawable arg1);
		jboolean setDrawableByLayerId(jint arg0, android::graphics::drawable::Drawable arg1);
		void setHotspot(jfloat arg0, jfloat arg1);
		void setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3);
		void setId(jint arg0, jint arg1);
		void setLayerGravity(jint arg0, jint arg1);
		void setLayerHeight(jint arg0, jint arg1);
		void setLayerInset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void setLayerInsetBottom(jint arg0, jint arg1);
		void setLayerInsetEnd(jint arg0, jint arg1);
		void setLayerInsetLeft(jint arg0, jint arg1);
		void setLayerInsetRelative(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void setLayerInsetRight(jint arg0, jint arg1);
		void setLayerInsetStart(jint arg0, jint arg1);
		void setLayerInsetTop(jint arg0, jint arg1);
		void setLayerSize(jint arg0, jint arg1, jint arg2);
		void setLayerWidth(jint arg0, jint arg1);
		void setOpacity(jint arg0);
		void setPadding(jint arg0, jint arg1, jint arg2, jint arg3);
		void setPaddingMode(jint arg0);
		void setPaddingRelative(jint arg0, jint arg1, jint arg2, jint arg3);
		void setTintBlendMode(android::graphics::BlendMode arg0);
		void setTintList(android::content::res::ColorStateList arg0);
		jboolean setVisible(jboolean arg0, jboolean arg1);
		void unscheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1);
	};
} // namespace android::graphics::drawable

