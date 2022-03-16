#pragma once

#include "./Drawable.def.hpp"

class JIntArray;
class JArray;
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
	class PorterDuff_Mode;
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
		LayerDrawable(QJniObject obj) : android::graphics::drawable::Drawable(obj) {}
		
		// Constructors
		LayerDrawable(JArray arg0);
		
		// Methods
		jint addLayer(android::graphics::drawable::Drawable arg0) const;
		void applyTheme(android::content::res::Resources_Theme arg0) const;
		jboolean canApplyTheme() const;
		void draw(android::graphics::Canvas arg0) const;
		android::graphics::drawable::Drawable findDrawableByLayerId(jint arg0) const;
		jint findIndexByLayerId(jint arg0) const;
		jint getAlpha() const;
		jint getBottomPadding() const;
		jint getChangingConfigurations() const;
		android::graphics::drawable::Drawable_ConstantState getConstantState() const;
		android::graphics::drawable::Drawable getDrawable(jint arg0) const;
		jint getEndPadding() const;
		void getHotspotBounds(android::graphics::Rect arg0) const;
		jint getId(jint arg0) const;
		jint getIntrinsicHeight() const;
		jint getIntrinsicWidth() const;
		jint getLayerGravity(jint arg0) const;
		jint getLayerHeight(jint arg0) const;
		jint getLayerInsetBottom(jint arg0) const;
		jint getLayerInsetEnd(jint arg0) const;
		jint getLayerInsetLeft(jint arg0) const;
		jint getLayerInsetRight(jint arg0) const;
		jint getLayerInsetStart(jint arg0) const;
		jint getLayerInsetTop(jint arg0) const;
		jint getLayerWidth(jint arg0) const;
		jint getLeftPadding() const;
		jint getNumberOfLayers() const;
		jint getOpacity() const;
		void getOutline(android::graphics::Outline arg0) const;
		jboolean getPadding(android::graphics::Rect arg0) const;
		jint getPaddingMode() const;
		jint getRightPadding() const;
		jint getStartPadding() const;
		jint getTopPadding() const;
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const;
		void invalidateDrawable(android::graphics::drawable::Drawable arg0) const;
		jboolean isAutoMirrored() const;
		jboolean isStateful() const;
		void jumpToCurrentState() const;
		android::graphics::drawable::Drawable mutate() const;
		jboolean onLayoutDirectionChanged(jint arg0) const;
		void scheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1, jlong arg2) const;
		void setAlpha(jint arg0) const;
		void setAutoMirrored(jboolean arg0) const;
		void setColorFilter(android::graphics::ColorFilter arg0) const;
		void setDither(jboolean arg0) const;
		void setDrawable(jint arg0, android::graphics::drawable::Drawable arg1) const;
		jboolean setDrawableByLayerId(jint arg0, android::graphics::drawable::Drawable arg1) const;
		void setHotspot(jfloat arg0, jfloat arg1) const;
		void setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setId(jint arg0, jint arg1) const;
		void setLayerGravity(jint arg0, jint arg1) const;
		void setLayerHeight(jint arg0, jint arg1) const;
		void setLayerInset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const;
		void setLayerInsetBottom(jint arg0, jint arg1) const;
		void setLayerInsetEnd(jint arg0, jint arg1) const;
		void setLayerInsetLeft(jint arg0, jint arg1) const;
		void setLayerInsetRelative(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const;
		void setLayerInsetRight(jint arg0, jint arg1) const;
		void setLayerInsetStart(jint arg0, jint arg1) const;
		void setLayerInsetTop(jint arg0, jint arg1) const;
		void setLayerSize(jint arg0, jint arg1, jint arg2) const;
		void setLayerWidth(jint arg0, jint arg1) const;
		void setOpacity(jint arg0) const;
		void setPadding(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setPaddingMode(jint arg0) const;
		void setPaddingRelative(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setTintList(android::content::res::ColorStateList arg0) const;
		void setTintMode(android::graphics::PorterDuff_Mode arg0) const;
		jboolean setVisible(jboolean arg0, jboolean arg1) const;
		void unscheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1) const;
	};
} // namespace android::graphics::drawable

