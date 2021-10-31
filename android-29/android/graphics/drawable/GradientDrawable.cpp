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
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"LINE"
		);
	}
	jint GradientDrawable::LINEAR_GRADIENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"LINEAR_GRADIENT"
		);
	}
	jint GradientDrawable::OVAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"OVAL"
		);
	}
	jint GradientDrawable::RADIAL_GRADIENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"RADIAL_GRADIENT"
		);
	}
	jint GradientDrawable::RECTANGLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"RECTANGLE"
		);
	}
	jint GradientDrawable::RING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"RING"
		);
	}
	jint GradientDrawable::SWEEP_GRADIENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"SWEEP_GRADIENT"
		);
	}
	
	GradientDrawable::GradientDrawable(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GradientDrawable::GradientDrawable()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.GradientDrawable",
			"()V"
		);
	}
	GradientDrawable::GradientDrawable(android::graphics::drawable::GradientDrawable_Orientation arg0, jintArray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.GradientDrawable",
			"(Landroid/graphics/drawable/GradientDrawable$Orientation;[I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void GradientDrawable::applyTheme(android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean GradientDrawable::canApplyTheme()
	{
		return __thiz.callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	void GradientDrawable::draw(android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	jint GradientDrawable::getAlpha()
	{
		return __thiz.callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	jint GradientDrawable::getChangingConfigurations()
	{
		return __thiz.callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	QAndroidJniObject GradientDrawable::getColor()
	{
		return __thiz.callObjectMethod(
			"getColor",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	QAndroidJniObject GradientDrawable::getColorFilter()
	{
		return __thiz.callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	jintArray GradientDrawable::getColors()
	{
		return __thiz.callObjectMethod(
			"getColors",
			"()[I"
		).object<jintArray>();
	}
	QAndroidJniObject GradientDrawable::getConstantState()
	{
		return __thiz.callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	jfloatArray GradientDrawable::getCornerRadii()
	{
		return __thiz.callObjectMethod(
			"getCornerRadii",
			"()[F"
		).object<jfloatArray>();
	}
	jfloat GradientDrawable::getCornerRadius()
	{
		return __thiz.callMethod<jfloat>(
			"getCornerRadius",
			"()F"
		);
	}
	jfloat GradientDrawable::getGradientCenterX()
	{
		return __thiz.callMethod<jfloat>(
			"getGradientCenterX",
			"()F"
		);
	}
	jfloat GradientDrawable::getGradientCenterY()
	{
		return __thiz.callMethod<jfloat>(
			"getGradientCenterY",
			"()F"
		);
	}
	jfloat GradientDrawable::getGradientRadius()
	{
		return __thiz.callMethod<jfloat>(
			"getGradientRadius",
			"()F"
		);
	}
	jint GradientDrawable::getGradientType()
	{
		return __thiz.callMethod<jint>(
			"getGradientType",
			"()I"
		);
	}
	jint GradientDrawable::getInnerRadius()
	{
		return __thiz.callMethod<jint>(
			"getInnerRadius",
			"()I"
		);
	}
	jfloat GradientDrawable::getInnerRadiusRatio()
	{
		return __thiz.callMethod<jfloat>(
			"getInnerRadiusRatio",
			"()F"
		);
	}
	jint GradientDrawable::getIntrinsicHeight()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint GradientDrawable::getIntrinsicWidth()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint GradientDrawable::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	QAndroidJniObject GradientDrawable::getOpticalInsets()
	{
		return __thiz.callObjectMethod(
			"getOpticalInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	QAndroidJniObject GradientDrawable::getOrientation()
	{
		return __thiz.callObjectMethod(
			"getOrientation",
			"()Landroid/graphics/drawable/GradientDrawable$Orientation;"
		);
	}
	void GradientDrawable::getOutline(android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean GradientDrawable::getPadding(android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object()
		);
	}
	jint GradientDrawable::getShape()
	{
		return __thiz.callMethod<jint>(
			"getShape",
			"()I"
		);
	}
	jint GradientDrawable::getThickness()
	{
		return __thiz.callMethod<jint>(
			"getThickness",
			"()I"
		);
	}
	jfloat GradientDrawable::getThicknessRatio()
	{
		return __thiz.callMethod<jfloat>(
			"getThicknessRatio",
			"()F"
		);
	}
	jboolean GradientDrawable::getUseLevel()
	{
		return __thiz.callMethod<jboolean>(
			"getUseLevel",
			"()Z"
		);
	}
	void GradientDrawable::inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3)
	{
		__thiz.callMethod<void>(
			"inflate",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jboolean GradientDrawable::isStateful()
	{
		return __thiz.callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	QAndroidJniObject GradientDrawable::mutate()
	{
		return __thiz.callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void GradientDrawable::setAlpha(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void GradientDrawable::setColor(android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setColor",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void GradientDrawable::setColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setColor",
			"(I)V",
			arg0
		);
	}
	void GradientDrawable::setColorFilter(android::graphics::ColorFilter arg0)
	{
		__thiz.callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.__jniObject().object()
		);
	}
	void GradientDrawable::setColors(jintArray arg0)
	{
		__thiz.callMethod<void>(
			"setColors",
			"([I)V",
			arg0
		);
	}
	void GradientDrawable::setColors(jintArray arg0, jfloatArray arg1)
	{
		__thiz.callMethod<void>(
			"setColors",
			"([I[F)V",
			arg0,
			arg1
		);
	}
	void GradientDrawable::setCornerRadii(jfloatArray arg0)
	{
		__thiz.callMethod<void>(
			"setCornerRadii",
			"([F)V",
			arg0
		);
	}
	void GradientDrawable::setCornerRadius(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setCornerRadius",
			"(F)V",
			arg0
		);
	}
	void GradientDrawable::setDither(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	void GradientDrawable::setGradientCenter(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setGradientCenter",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void GradientDrawable::setGradientRadius(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setGradientRadius",
			"(F)V",
			arg0
		);
	}
	void GradientDrawable::setGradientType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setGradientType",
			"(I)V",
			arg0
		);
	}
	void GradientDrawable::setInnerRadius(jint arg0)
	{
		__thiz.callMethod<void>(
			"setInnerRadius",
			"(I)V",
			arg0
		);
	}
	void GradientDrawable::setInnerRadiusRatio(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setInnerRadiusRatio",
			"(F)V",
			arg0
		);
	}
	void GradientDrawable::setOrientation(android::graphics::drawable::GradientDrawable_Orientation arg0)
	{
		__thiz.callMethod<void>(
			"setOrientation",
			"(Landroid/graphics/drawable/GradientDrawable$Orientation;)V",
			arg0.__jniObject().object()
		);
	}
	void GradientDrawable::setPadding(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
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
		__thiz.callMethod<void>(
			"setShape",
			"(I)V",
			arg0
		);
	}
	void GradientDrawable::setSize(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setSize",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GradientDrawable::setStroke(jint arg0, android::content::res::ColorStateList arg1)
	{
		__thiz.callMethod<void>(
			"setStroke",
			"(ILandroid/content/res/ColorStateList;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void GradientDrawable::setStroke(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setStroke",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GradientDrawable::setStroke(jint arg0, android::content::res::ColorStateList arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"setStroke",
			"(ILandroid/content/res/ColorStateList;FF)V",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void GradientDrawable::setStroke(jint arg0, jint arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
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
		__thiz.callMethod<void>(
			"setThickness",
			"(I)V",
			arg0
		);
	}
	void GradientDrawable::setThicknessRatio(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setThicknessRatio",
			"(F)V",
			arg0
		);
	}
	void GradientDrawable::setTintBlendMode(android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void GradientDrawable::setTintList(android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void GradientDrawable::setUseLevel(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setUseLevel",
			"(Z)V",
			arg0
		);
	}
} // namespace android::graphics::drawable

