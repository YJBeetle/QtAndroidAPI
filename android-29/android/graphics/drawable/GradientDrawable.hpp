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
	class GradientDrawable_Orientation;
}

namespace android::graphics::drawable
{
	class GradientDrawable : public android::graphics::drawable::Drawable
	{
	public:
		// Fields
		static jint LINE();
		static jint LINEAR_GRADIENT();
		static jint OVAL();
		static jint RADIAL_GRADIENT();
		static jint RECTANGLE();
		static jint RING();
		static jint SWEEP_GRADIENT();
		
		GradientDrawable(QAndroidJniObject obj);
		// Constructors
		GradientDrawable();
		GradientDrawable(android::graphics::drawable::GradientDrawable_Orientation &arg0, jintArray &arg1);
		
		// Methods
		void applyTheme(android::content::res::Resources_Theme arg0);
		jboolean canApplyTheme();
		void draw(android::graphics::Canvas arg0);
		jint getAlpha();
		jint getChangingConfigurations();
		QAndroidJniObject getColor();
		QAndroidJniObject getColorFilter();
		jintArray getColors();
		QAndroidJniObject getConstantState();
		jfloatArray getCornerRadii();
		jfloat getCornerRadius();
		jfloat getGradientCenterX();
		jfloat getGradientCenterY();
		jfloat getGradientRadius();
		jint getGradientType();
		jint getInnerRadius();
		jfloat getInnerRadiusRatio();
		jint getIntrinsicHeight();
		jint getIntrinsicWidth();
		jint getOpacity();
		QAndroidJniObject getOpticalInsets();
		QAndroidJniObject getOrientation();
		void getOutline(android::graphics::Outline arg0);
		jboolean getPadding(android::graphics::Rect arg0);
		jint getShape();
		jint getThickness();
		jfloat getThicknessRatio();
		jboolean getUseLevel();
		void inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3);
		jboolean isStateful();
		QAndroidJniObject mutate();
		void setAlpha(jint arg0);
		void setColor(android::content::res::ColorStateList arg0);
		void setColor(jint arg0);
		void setColorFilter(android::graphics::ColorFilter arg0);
		void setColors(jintArray arg0);
		void setColors(jintArray arg0, jfloatArray arg1);
		void setCornerRadii(jfloatArray arg0);
		void setCornerRadius(jfloat arg0);
		void setDither(jboolean arg0);
		void setGradientCenter(jfloat arg0, jfloat arg1);
		void setGradientRadius(jfloat arg0);
		void setGradientType(jint arg0);
		void setInnerRadius(jint arg0);
		void setInnerRadiusRatio(jfloat arg0);
		void setOrientation(android::graphics::drawable::GradientDrawable_Orientation arg0);
		void setPadding(jint arg0, jint arg1, jint arg2, jint arg3);
		void setShape(jint arg0);
		void setSize(jint arg0, jint arg1);
		void setStroke(jint arg0, android::content::res::ColorStateList arg1);
		void setStroke(jint arg0, jint arg1);
		void setStroke(jint arg0, android::content::res::ColorStateList arg1, jfloat arg2, jfloat arg3);
		void setStroke(jint arg0, jint arg1, jfloat arg2, jfloat arg3);
		void setThickness(jint arg0);
		void setThicknessRatio(jfloat arg0);
		void setTintBlendMode(android::graphics::BlendMode arg0);
		void setTintList(android::content::res::ColorStateList arg0);
		void setUseLevel(jboolean arg0);
	};
} // namespace android::graphics::drawable

