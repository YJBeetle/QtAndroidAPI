#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"

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

namespace android::widget
{
	class ImageView : public android::view::View
	{
	public:
		// Fields
		
		ImageView(QAndroidJniObject obj);
		// Constructors
		ImageView(android::content::Context arg0);
		ImageView(android::content::Context arg0, __JniBaseClass arg1);
		ImageView(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		ImageView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		ImageView() = default;
		
		// Methods
		void animateTransform(android::graphics::Matrix arg0);
		void clearColorFilter();
		void drawableHotspotChanged(jfloat arg0, jfloat arg1);
		jstring getAccessibilityClassName();
		jboolean getAdjustViewBounds();
		jint getBaseline();
		jboolean getBaselineAlignBottom();
		QAndroidJniObject getColorFilter();
		jboolean getCropToPadding();
		QAndroidJniObject getDrawable();
		jint getImageAlpha();
		QAndroidJniObject getImageMatrix();
		QAndroidJniObject getImageTintBlendMode();
		QAndroidJniObject getImageTintList();
		QAndroidJniObject getImageTintMode();
		jint getMaxHeight();
		jint getMaxWidth();
		QAndroidJniObject getScaleType();
		jboolean hasOverlappingRendering();
		void invalidateDrawable(android::graphics::drawable::Drawable arg0);
		jboolean isOpaque();
		void jumpDrawablesToCurrentState();
		jintArray onCreateDrawableState(jint arg0);
		void onRtlPropertiesChanged(jint arg0);
		void onVisibilityAggregated(jboolean arg0);
		void setAdjustViewBounds(jboolean arg0);
		void setAlpha(jint arg0);
		void setBaseline(jint arg0);
		void setBaselineAlignBottom(jboolean arg0);
		void setColorFilter(android::graphics::ColorFilter arg0);
		void setColorFilter(jint arg0);
		void setColorFilter(jint arg0, android::graphics::PorterDuff_Mode arg1);
		void setCropToPadding(jboolean arg0);
		void setImageAlpha(jint arg0);
		void setImageBitmap(android::graphics::Bitmap arg0);
		void setImageDrawable(android::graphics::drawable::Drawable arg0);
		void setImageIcon(android::graphics::drawable::Icon arg0);
		void setImageLevel(jint arg0);
		void setImageMatrix(android::graphics::Matrix arg0);
		void setImageResource(jint arg0);
		void setImageState(jintArray arg0, jboolean arg1);
		void setImageTintBlendMode(android::graphics::BlendMode arg0);
		void setImageTintList(android::content::res::ColorStateList arg0);
		void setImageTintMode(android::graphics::PorterDuff_Mode arg0);
		void setImageURI(android::net::Uri arg0);
		void setMaxHeight(jint arg0);
		void setMaxWidth(jint arg0);
		void setScaleType(android::widget::ImageView_ScaleType arg0);
		void setSelected(jboolean arg0);
		void setVisibility(jint arg0);
	};
} // namespace android::widget

