#include "../../content/res/ColorStateList.hpp"
#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../BlendMode.hpp"
#include "../Canvas.hpp"
#include "../ColorFilter.hpp"
#include "../Insets.hpp"
#include "../Outline.hpp"
#include "../Rect.hpp"
#include "./Drawable.hpp"
#include "./Drawable_ConstantState.hpp"
#include "./GradientDrawable_Orientation.hpp"
#include "./GradientDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	jint GradientDrawable::LINE()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"LINE"
		);
	}
	jint GradientDrawable::LINEAR_GRADIENT()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"LINEAR_GRADIENT"
		);
	}
	jint GradientDrawable::OVAL()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"OVAL"
		);
	}
	jint GradientDrawable::RADIAL_GRADIENT()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"RADIAL_GRADIENT"
		);
	}
	jint GradientDrawable::RECTANGLE()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"RECTANGLE"
		);
	}
	jint GradientDrawable::RING()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"RING"
		);
	}
	jint GradientDrawable::SWEEP_GRADIENT()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"SWEEP_GRADIENT"
		);
	}
	
	// QAndroidJniObject forward
	GradientDrawable::GradientDrawable(QAndroidJniObject obj) : android::graphics::drawable::Drawable(obj) {}
	
	// Constructors
	GradientDrawable::GradientDrawable()
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.GradientDrawable",
			"()V"
		) {}
	GradientDrawable::GradientDrawable(android::graphics::drawable::GradientDrawable_Orientation arg0, jintArray arg1)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.GradientDrawable",
			"(Landroid/graphics/drawable/GradientDrawable$Orientation;[I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	void GradientDrawable::applyTheme(android::content::res::Resources_Theme arg0)
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	jboolean GradientDrawable::canApplyTheme()
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	void GradientDrawable::draw(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jint GradientDrawable::getAlpha()
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	jint GradientDrawable::getChangingConfigurations()
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	android::content::res::ColorStateList GradientDrawable::getColor()
	{
		return callObjectMethod(
			"getColor",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::ColorFilter GradientDrawable::getColorFilter()
	{
		return callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	jintArray GradientDrawable::getColors()
	{
		return callObjectMethod(
			"getColors",
			"()[I"
		).object<jintArray>();
	}
	android::graphics::drawable::Drawable_ConstantState GradientDrawable::getConstantState()
	{
		return callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	jfloatArray GradientDrawable::getCornerRadii()
	{
		return callObjectMethod(
			"getCornerRadii",
			"()[F"
		).object<jfloatArray>();
	}
	jfloat GradientDrawable::getCornerRadius()
	{
		return callMethod<jfloat>(
			"getCornerRadius",
			"()F"
		);
	}
	jfloat GradientDrawable::getGradientCenterX()
	{
		return callMethod<jfloat>(
			"getGradientCenterX",
			"()F"
		);
	}
	jfloat GradientDrawable::getGradientCenterY()
	{
		return callMethod<jfloat>(
			"getGradientCenterY",
			"()F"
		);
	}
	jfloat GradientDrawable::getGradientRadius()
	{
		return callMethod<jfloat>(
			"getGradientRadius",
			"()F"
		);
	}
	jint GradientDrawable::getGradientType()
	{
		return callMethod<jint>(
			"getGradientType",
			"()I"
		);
	}
	jint GradientDrawable::getInnerRadius()
	{
		return callMethod<jint>(
			"getInnerRadius",
			"()I"
		);
	}
	jfloat GradientDrawable::getInnerRadiusRatio()
	{
		return callMethod<jfloat>(
			"getInnerRadiusRatio",
			"()F"
		);
	}
	jint GradientDrawable::getIntrinsicHeight()
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint GradientDrawable::getIntrinsicWidth()
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint GradientDrawable::getOpacity()
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	android::graphics::Insets GradientDrawable::getOpticalInsets()
	{
		return callObjectMethod(
			"getOpticalInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	android::graphics::drawable::GradientDrawable_Orientation GradientDrawable::getOrientation()
	{
		return callObjectMethod(
			"getOrientation",
			"()Landroid/graphics/drawable/GradientDrawable$Orientation;"
		);
	}
	void GradientDrawable::getOutline(android::graphics::Outline arg0)
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	jboolean GradientDrawable::getPadding(android::graphics::Rect arg0)
	{
		return callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jint GradientDrawable::getShape()
	{
		return callMethod<jint>(
			"getShape",
			"()I"
		);
	}
	jint GradientDrawable::getThickness()
	{
		return callMethod<jint>(
			"getThickness",
			"()I"
		);
	}
	jfloat GradientDrawable::getThicknessRatio()
	{
		return callMethod<jfloat>(
			"getThicknessRatio",
			"()F"
		);
	}
	jboolean GradientDrawable::getUseLevel()
	{
		return callMethod<jboolean>(
			"getUseLevel",
			"()Z"
		);
	}
	void GradientDrawable::inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3)
	{
		callMethod<void>(
			"inflate",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;Landroid/content/res/Resources$Theme;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	jboolean GradientDrawable::isStateful()
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	android::graphics::drawable::Drawable GradientDrawable::mutate()
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void GradientDrawable::setAlpha(jint arg0)
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void GradientDrawable::setColor(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setColor",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void GradientDrawable::setColor(jint arg0)
	{
		callMethod<void>(
			"setColor",
			"(I)V",
			arg0
		);
	}
	void GradientDrawable::setColorFilter(android::graphics::ColorFilter arg0)
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	void GradientDrawable::setColors(jintArray arg0)
	{
		callMethod<void>(
			"setColors",
			"([I)V",
			arg0
		);
	}
	void GradientDrawable::setColors(jintArray arg0, jfloatArray arg1)
	{
		callMethod<void>(
			"setColors",
			"([I[F)V",
			arg0,
			arg1
		);
	}
	void GradientDrawable::setCornerRadii(jfloatArray arg0)
	{
		callMethod<void>(
			"setCornerRadii",
			"([F)V",
			arg0
		);
	}
	void GradientDrawable::setCornerRadius(jfloat arg0)
	{
		callMethod<void>(
			"setCornerRadius",
			"(F)V",
			arg0
		);
	}
	void GradientDrawable::setDither(jboolean arg0)
	{
		callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	void GradientDrawable::setGradientCenter(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"setGradientCenter",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void GradientDrawable::setGradientRadius(jfloat arg0)
	{
		callMethod<void>(
			"setGradientRadius",
			"(F)V",
			arg0
		);
	}
	void GradientDrawable::setGradientType(jint arg0)
	{
		callMethod<void>(
			"setGradientType",
			"(I)V",
			arg0
		);
	}
	void GradientDrawable::setInnerRadius(jint arg0)
	{
		callMethod<void>(
			"setInnerRadius",
			"(I)V",
			arg0
		);
	}
	void GradientDrawable::setInnerRadiusRatio(jfloat arg0)
	{
		callMethod<void>(
			"setInnerRadiusRatio",
			"(F)V",
			arg0
		);
	}
	void GradientDrawable::setOrientation(android::graphics::drawable::GradientDrawable_Orientation arg0)
	{
		callMethod<void>(
			"setOrientation",
			"(Landroid/graphics/drawable/GradientDrawable$Orientation;)V",
			arg0.object()
		);
	}
	void GradientDrawable::setPadding(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"setPadding",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GradientDrawable::setShape(jint arg0)
	{
		callMethod<void>(
			"setShape",
			"(I)V",
			arg0
		);
	}
	void GradientDrawable::setSize(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setSize",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GradientDrawable::setStroke(jint arg0, android::content::res::ColorStateList arg1)
	{
		callMethod<void>(
			"setStroke",
			"(ILandroid/content/res/ColorStateList;)V",
			arg0,
			arg1.object()
		);
	}
	void GradientDrawable::setStroke(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setStroke",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GradientDrawable::setStroke(jint arg0, android::content::res::ColorStateList arg1, jfloat arg2, jfloat arg3)
	{
		callMethod<void>(
			"setStroke",
			"(ILandroid/content/res/ColorStateList;FF)V",
			arg0,
			arg1.object(),
			arg2,
			arg3
		);
	}
	void GradientDrawable::setStroke(jint arg0, jint arg1, jfloat arg2, jfloat arg3)
	{
		callMethod<void>(
			"setStroke",
			"(IIFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GradientDrawable::setThickness(jint arg0)
	{
		callMethod<void>(
			"setThickness",
			"(I)V",
			arg0
		);
	}
	void GradientDrawable::setThicknessRatio(jfloat arg0)
	{
		callMethod<void>(
			"setThicknessRatio",
			"(F)V",
			arg0
		);
	}
	void GradientDrawable::setTintBlendMode(android::graphics::BlendMode arg0)
	{
		callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void GradientDrawable::setTintList(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void GradientDrawable::setUseLevel(jboolean arg0)
	{
		callMethod<void>(
			"setUseLevel",
			"(Z)V",
			arg0
		);
	}
} // namespace android::graphics::drawable

