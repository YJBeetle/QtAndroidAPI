#include "../../../JFloatArray.hpp"
#include "../../../JIntArray.hpp"
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
	GradientDrawable::GradientDrawable(android::graphics::drawable::GradientDrawable_Orientation arg0, JIntArray arg1)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.GradientDrawable",
			"(Landroid/graphics/drawable/GradientDrawable$Orientation;[I)V",
			arg0.object(),
			arg1.object<jintArray>()
		) {}
	
	// Methods
	void GradientDrawable::applyTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	jboolean GradientDrawable::canApplyTheme() const
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	void GradientDrawable::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jint GradientDrawable::getAlpha() const
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	jint GradientDrawable::getChangingConfigurations() const
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	android::content::res::ColorStateList GradientDrawable::getColor() const
	{
		return callObjectMethod(
			"getColor",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::ColorFilter GradientDrawable::getColorFilter() const
	{
		return callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	JIntArray GradientDrawable::getColors() const
	{
		return callObjectMethod(
			"getColors",
			"()[I"
		);
	}
	android::graphics::drawable::Drawable_ConstantState GradientDrawable::getConstantState() const
	{
		return callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	JFloatArray GradientDrawable::getCornerRadii() const
	{
		return callObjectMethod(
			"getCornerRadii",
			"()[F"
		);
	}
	jfloat GradientDrawable::getCornerRadius() const
	{
		return callMethod<jfloat>(
			"getCornerRadius",
			"()F"
		);
	}
	jfloat GradientDrawable::getGradientCenterX() const
	{
		return callMethod<jfloat>(
			"getGradientCenterX",
			"()F"
		);
	}
	jfloat GradientDrawable::getGradientCenterY() const
	{
		return callMethod<jfloat>(
			"getGradientCenterY",
			"()F"
		);
	}
	jfloat GradientDrawable::getGradientRadius() const
	{
		return callMethod<jfloat>(
			"getGradientRadius",
			"()F"
		);
	}
	jint GradientDrawable::getGradientType() const
	{
		return callMethod<jint>(
			"getGradientType",
			"()I"
		);
	}
	jint GradientDrawable::getInnerRadius() const
	{
		return callMethod<jint>(
			"getInnerRadius",
			"()I"
		);
	}
	jfloat GradientDrawable::getInnerRadiusRatio() const
	{
		return callMethod<jfloat>(
			"getInnerRadiusRatio",
			"()F"
		);
	}
	jint GradientDrawable::getIntrinsicHeight() const
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint GradientDrawable::getIntrinsicWidth() const
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint GradientDrawable::getOpacity() const
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	android::graphics::Insets GradientDrawable::getOpticalInsets() const
	{
		return callObjectMethod(
			"getOpticalInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	android::graphics::drawable::GradientDrawable_Orientation GradientDrawable::getOrientation() const
	{
		return callObjectMethod(
			"getOrientation",
			"()Landroid/graphics/drawable/GradientDrawable$Orientation;"
		);
	}
	void GradientDrawable::getOutline(android::graphics::Outline arg0) const
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	jboolean GradientDrawable::getPadding(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jint GradientDrawable::getShape() const
	{
		return callMethod<jint>(
			"getShape",
			"()I"
		);
	}
	jint GradientDrawable::getThickness() const
	{
		return callMethod<jint>(
			"getThickness",
			"()I"
		);
	}
	jfloat GradientDrawable::getThicknessRatio() const
	{
		return callMethod<jfloat>(
			"getThicknessRatio",
			"()F"
		);
	}
	jboolean GradientDrawable::getUseLevel() const
	{
		return callMethod<jboolean>(
			"getUseLevel",
			"()Z"
		);
	}
	jboolean GradientDrawable::hasFocusStateSpecified() const
	{
		return callMethod<jboolean>(
			"hasFocusStateSpecified",
			"()Z"
		);
	}
	void GradientDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const
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
	jboolean GradientDrawable::isStateful() const
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	android::graphics::drawable::Drawable GradientDrawable::mutate() const
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void GradientDrawable::setAlpha(jint arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void GradientDrawable::setColor(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setColor",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void GradientDrawable::setColor(jint arg0) const
	{
		callMethod<void>(
			"setColor",
			"(I)V",
			arg0
		);
	}
	void GradientDrawable::setColorFilter(android::graphics::ColorFilter arg0) const
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	void GradientDrawable::setColors(JIntArray arg0) const
	{
		callMethod<void>(
			"setColors",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	void GradientDrawable::setColors(JIntArray arg0, JFloatArray arg1) const
	{
		callMethod<void>(
			"setColors",
			"([I[F)V",
			arg0.object<jintArray>(),
			arg1.object<jfloatArray>()
		);
	}
	void GradientDrawable::setCornerRadii(JFloatArray arg0) const
	{
		callMethod<void>(
			"setCornerRadii",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	void GradientDrawable::setCornerRadius(jfloat arg0) const
	{
		callMethod<void>(
			"setCornerRadius",
			"(F)V",
			arg0
		);
	}
	void GradientDrawable::setDither(jboolean arg0) const
	{
		callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	void GradientDrawable::setGradientCenter(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setGradientCenter",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void GradientDrawable::setGradientRadius(jfloat arg0) const
	{
		callMethod<void>(
			"setGradientRadius",
			"(F)V",
			arg0
		);
	}
	void GradientDrawable::setGradientType(jint arg0) const
	{
		callMethod<void>(
			"setGradientType",
			"(I)V",
			arg0
		);
	}
	void GradientDrawable::setInnerRadius(jint arg0) const
	{
		callMethod<void>(
			"setInnerRadius",
			"(I)V",
			arg0
		);
	}
	void GradientDrawable::setInnerRadiusRatio(jfloat arg0) const
	{
		callMethod<void>(
			"setInnerRadiusRatio",
			"(F)V",
			arg0
		);
	}
	void GradientDrawable::setOrientation(android::graphics::drawable::GradientDrawable_Orientation arg0) const
	{
		callMethod<void>(
			"setOrientation",
			"(Landroid/graphics/drawable/GradientDrawable$Orientation;)V",
			arg0.object()
		);
	}
	void GradientDrawable::setPadding(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	void GradientDrawable::setShape(jint arg0) const
	{
		callMethod<void>(
			"setShape",
			"(I)V",
			arg0
		);
	}
	void GradientDrawable::setSize(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setSize",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GradientDrawable::setStroke(jint arg0, android::content::res::ColorStateList arg1) const
	{
		callMethod<void>(
			"setStroke",
			"(ILandroid/content/res/ColorStateList;)V",
			arg0,
			arg1.object()
		);
	}
	void GradientDrawable::setStroke(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setStroke",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GradientDrawable::setStroke(jint arg0, android::content::res::ColorStateList arg1, jfloat arg2, jfloat arg3) const
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
	void GradientDrawable::setStroke(jint arg0, jint arg1, jfloat arg2, jfloat arg3) const
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
	void GradientDrawable::setThickness(jint arg0) const
	{
		callMethod<void>(
			"setThickness",
			"(I)V",
			arg0
		);
	}
	void GradientDrawable::setThicknessRatio(jfloat arg0) const
	{
		callMethod<void>(
			"setThicknessRatio",
			"(F)V",
			arg0
		);
	}
	void GradientDrawable::setTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void GradientDrawable::setTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void GradientDrawable::setUseLevel(jboolean arg0) const
	{
		callMethod<void>(
			"setUseLevel",
			"(Z)V",
			arg0
		);
	}
} // namespace android::graphics::drawable

