#pragma once

#include "./Drawable.hpp"

class JFloatArray;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit GradientDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::Drawable(className, sig, std::forward<Ts>(agv)...) {}
		GradientDrawable(QJniObject obj);
		
		// Constructors
		GradientDrawable();
		GradientDrawable(android::graphics::drawable::GradientDrawable_Orientation arg0, JIntArray arg1);
		
		// Methods
		void applyTheme(android::content::res::Resources_Theme arg0) const;
		jboolean canApplyTheme() const;
		void draw(android::graphics::Canvas arg0) const;
		jint getAlpha() const;
		jint getChangingConfigurations() const;
		android::content::res::ColorStateList getColor() const;
		android::graphics::ColorFilter getColorFilter() const;
		JIntArray getColors() const;
		android::graphics::drawable::Drawable_ConstantState getConstantState() const;
		JFloatArray getCornerRadii() const;
		jfloat getCornerRadius() const;
		jfloat getGradientCenterX() const;
		jfloat getGradientCenterY() const;
		jfloat getGradientRadius() const;
		jint getGradientType() const;
		jint getInnerRadius() const;
		jfloat getInnerRadiusRatio() const;
		jint getIntrinsicHeight() const;
		jint getIntrinsicWidth() const;
		jint getOpacity() const;
		android::graphics::Insets getOpticalInsets() const;
		android::graphics::drawable::GradientDrawable_Orientation getOrientation() const;
		void getOutline(android::graphics::Outline arg0) const;
		jboolean getPadding(android::graphics::Rect arg0) const;
		jint getShape() const;
		jint getThickness() const;
		jfloat getThicknessRatio() const;
		jboolean getUseLevel() const;
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const;
		jboolean isStateful() const;
		android::graphics::drawable::Drawable mutate() const;
		void setAlpha(jint arg0) const;
		void setColor(android::content::res::ColorStateList arg0) const;
		void setColor(jint arg0) const;
		void setColorFilter(android::graphics::ColorFilter arg0) const;
		void setColors(JIntArray arg0) const;
		void setColors(JIntArray arg0, JFloatArray arg1) const;
		void setCornerRadii(JFloatArray arg0) const;
		void setCornerRadius(jfloat arg0) const;
		void setDither(jboolean arg0) const;
		void setGradientCenter(jfloat arg0, jfloat arg1) const;
		void setGradientRadius(jfloat arg0) const;
		void setGradientType(jint arg0) const;
		void setInnerRadius(jint arg0) const;
		void setInnerRadiusRatio(jfloat arg0) const;
		void setOrientation(android::graphics::drawable::GradientDrawable_Orientation arg0) const;
		void setPadding(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setShape(jint arg0) const;
		void setSize(jint arg0, jint arg1) const;
		void setStroke(jint arg0, android::content::res::ColorStateList arg1) const;
		void setStroke(jint arg0, jint arg1) const;
		void setStroke(jint arg0, android::content::res::ColorStateList arg1, jfloat arg2, jfloat arg3) const;
		void setStroke(jint arg0, jint arg1, jfloat arg2, jfloat arg3) const;
		void setThickness(jint arg0) const;
		void setThicknessRatio(jfloat arg0) const;
		void setTintBlendMode(android::graphics::BlendMode arg0) const;
		void setTintList(android::content::res::ColorStateList arg0) const;
		void setUseLevel(jboolean arg0) const;
	};
} // namespace android::graphics::drawable

