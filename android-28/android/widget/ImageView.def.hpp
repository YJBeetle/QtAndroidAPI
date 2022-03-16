#pragma once

#include "../view/View.def.hpp"

class JIntArray;
namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class ColorStateList;
}
namespace android::graphics
{
	class Bitmap;
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
	class Matrix;
}
namespace android::graphics
{
	class PorterDuff_Mode;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::graphics::drawable
{
	class Icon;
}
namespace android::net
{
	class Uri;
}
namespace android::widget
{
	class ImageView_ScaleType;
}
class JString;

namespace android::widget
{
	class ImageView : public android::view::View
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ImageView(const char *className, const char *sig, Ts...agv) : android::view::View(className, sig, std::forward<Ts>(agv)...) {}
		ImageView(QJniObject obj) : android::view::View(obj) {}
		
		// Constructors
		ImageView(android::content::Context arg0);
		ImageView(android::content::Context arg0, JObject arg1);
		ImageView(android::content::Context arg0, JObject arg1, jint arg2);
		ImageView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void clearColorFilter() const;
		void drawableHotspotChanged(jfloat arg0, jfloat arg1) const;
		JString getAccessibilityClassName() const;
		jboolean getAdjustViewBounds() const;
		jint getBaseline() const;
		jboolean getBaselineAlignBottom() const;
		android::graphics::ColorFilter getColorFilter() const;
		jboolean getCropToPadding() const;
		android::graphics::drawable::Drawable getDrawable() const;
		jint getImageAlpha() const;
		android::graphics::Matrix getImageMatrix() const;
		android::content::res::ColorStateList getImageTintList() const;
		android::graphics::PorterDuff_Mode getImageTintMode() const;
		jint getMaxHeight() const;
		jint getMaxWidth() const;
		android::widget::ImageView_ScaleType getScaleType() const;
		jboolean hasOverlappingRendering() const;
		void invalidateDrawable(android::graphics::drawable::Drawable arg0) const;
		jboolean isOpaque() const;
		void jumpDrawablesToCurrentState() const;
		JIntArray onCreateDrawableState(jint arg0) const;
		void onRtlPropertiesChanged(jint arg0) const;
		void onVisibilityAggregated(jboolean arg0) const;
		void setAdjustViewBounds(jboolean arg0) const;
		void setAlpha(jint arg0) const;
		void setBaseline(jint arg0) const;
		void setBaselineAlignBottom(jboolean arg0) const;
		void setColorFilter(android::graphics::ColorFilter arg0) const;
		void setColorFilter(jint arg0) const;
		void setColorFilter(jint arg0, android::graphics::PorterDuff_Mode arg1) const;
		void setCropToPadding(jboolean arg0) const;
		void setImageAlpha(jint arg0) const;
		void setImageBitmap(android::graphics::Bitmap arg0) const;
		void setImageDrawable(android::graphics::drawable::Drawable arg0) const;
		void setImageIcon(android::graphics::drawable::Icon arg0) const;
		void setImageLevel(jint arg0) const;
		void setImageMatrix(android::graphics::Matrix arg0) const;
		void setImageResource(jint arg0) const;
		void setImageState(JIntArray arg0, jboolean arg1) const;
		void setImageTintList(android::content::res::ColorStateList arg0) const;
		void setImageTintMode(android::graphics::PorterDuff_Mode arg0) const;
		void setImageURI(android::net::Uri arg0) const;
		void setMaxHeight(jint arg0) const;
		void setMaxWidth(jint arg0) const;
		void setScaleType(android::widget::ImageView_ScaleType arg0) const;
		void setSelected(jboolean arg0) const;
		void setVisibility(jint arg0) const;
	};
} // namespace android::widget

