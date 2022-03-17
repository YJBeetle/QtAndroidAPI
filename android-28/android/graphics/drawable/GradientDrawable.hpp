#pragma once

#include "../../../JFloatArray.hpp"
#include "../../../JIntArray.hpp"
#include "../../content/res/ColorStateList.def.hpp"
#include "../../content/res/Resources.def.hpp"
#include "../../content/res/Resources_Theme.def.hpp"
#include "../Canvas.def.hpp"
#include "../ColorFilter.def.hpp"
#include "../Outline.def.hpp"
#include "../PorterDuff_Mode.def.hpp"
#include "../Rect.def.hpp"
#include "./Drawable.def.hpp"
#include "./Drawable_ConstantState.def.hpp"
#include "./GradientDrawable_Orientation.def.hpp"
#include "./GradientDrawable.def.hpp"

namespace android::graphics::drawable
{
	// Fields
	inline jint GradientDrawable::LINE()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"LINE"
		);
	}
	inline jint GradientDrawable::LINEAR_GRADIENT()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"LINEAR_GRADIENT"
		);
	}
	inline jint GradientDrawable::OVAL()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"OVAL"
		);
	}
	inline jint GradientDrawable::RADIAL_GRADIENT()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"RADIAL_GRADIENT"
		);
	}
	inline jint GradientDrawable::RECTANGLE()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"RECTANGLE"
		);
	}
	inline jint GradientDrawable::RING()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"RING"
		);
	}
	inline jint GradientDrawable::SWEEP_GRADIENT()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"SWEEP_GRADIENT"
		);
	}
	
	// Constructors
	inline GradientDrawable::GradientDrawable()
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.GradientDrawable",
			"()V"
		) {}
	inline GradientDrawable::GradientDrawable(android::graphics::drawable::GradientDrawable_Orientation arg0, JIntArray arg1)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.GradientDrawable",
			"(Landroid/graphics/drawable/GradientDrawable$Orientation;[I)V",
			arg0.object(),
			arg1.object<jintArray>()
		) {}
	
	// Methods
	inline void GradientDrawable::applyTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	inline jboolean GradientDrawable::canApplyTheme() const
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	inline void GradientDrawable::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline jint GradientDrawable::getAlpha() const
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	inline jint GradientDrawable::getChangingConfigurations() const
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	inline android::content::res::ColorStateList GradientDrawable::getColor() const
	{
		return callObjectMethod(
			"getColor",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	inline android::graphics::ColorFilter GradientDrawable::getColorFilter() const
	{
		return callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	inline JIntArray GradientDrawable::getColors() const
	{
		return callObjectMethod(
			"getColors",
			"()[I"
		);
	}
	inline android::graphics::drawable::Drawable_ConstantState GradientDrawable::getConstantState() const
	{
		return callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	inline JFloatArray GradientDrawable::getCornerRadii() const
	{
		return callObjectMethod(
			"getCornerRadii",
			"()[F"
		);
	}
	inline jfloat GradientDrawable::getCornerRadius() const
	{
		return callMethod<jfloat>(
			"getCornerRadius",
			"()F"
		);
	}
	inline jfloat GradientDrawable::getGradientCenterX() const
	{
		return callMethod<jfloat>(
			"getGradientCenterX",
			"()F"
		);
	}
	inline jfloat GradientDrawable::getGradientCenterY() const
	{
		return callMethod<jfloat>(
			"getGradientCenterY",
			"()F"
		);
	}
	inline jfloat GradientDrawable::getGradientRadius() const
	{
		return callMethod<jfloat>(
			"getGradientRadius",
			"()F"
		);
	}
	inline jint GradientDrawable::getGradientType() const
	{
		return callMethod<jint>(
			"getGradientType",
			"()I"
		);
	}
	inline jint GradientDrawable::getIntrinsicHeight() const
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	inline jint GradientDrawable::getIntrinsicWidth() const
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	inline jint GradientDrawable::getOpacity() const
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	inline android::graphics::drawable::GradientDrawable_Orientation GradientDrawable::getOrientation() const
	{
		return callObjectMethod(
			"getOrientation",
			"()Landroid/graphics/drawable/GradientDrawable$Orientation;"
		);
	}
	inline void GradientDrawable::getOutline(android::graphics::Outline arg0) const
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	inline jboolean GradientDrawable::getPadding(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	inline jint GradientDrawable::getShape() const
	{
		return callMethod<jint>(
			"getShape",
			"()I"
		);
	}
	inline jboolean GradientDrawable::getUseLevel() const
	{
		return callMethod<jboolean>(
			"getUseLevel",
			"()Z"
		);
	}
	inline void GradientDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const
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
	inline jboolean GradientDrawable::isStateful() const
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	inline android::graphics::drawable::Drawable GradientDrawable::mutate() const
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline void GradientDrawable::setAlpha(jint arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	inline void GradientDrawable::setColor(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setColor",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void GradientDrawable::setColor(jint arg0) const
	{
		callMethod<void>(
			"setColor",
			"(I)V",
			arg0
		);
	}
	inline void GradientDrawable::setColorFilter(android::graphics::ColorFilter arg0) const
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	inline void GradientDrawable::setColors(JIntArray arg0) const
	{
		callMethod<void>(
			"setColors",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	inline void GradientDrawable::setCornerRadii(JFloatArray arg0) const
	{
		callMethod<void>(
			"setCornerRadii",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	inline void GradientDrawable::setCornerRadius(jfloat arg0) const
	{
		callMethod<void>(
			"setCornerRadius",
			"(F)V",
			arg0
		);
	}
	inline void GradientDrawable::setDither(jboolean arg0) const
	{
		callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	inline void GradientDrawable::setGradientCenter(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setGradientCenter",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void GradientDrawable::setGradientRadius(jfloat arg0) const
	{
		callMethod<void>(
			"setGradientRadius",
			"(F)V",
			arg0
		);
	}
	inline void GradientDrawable::setGradientType(jint arg0) const
	{
		callMethod<void>(
			"setGradientType",
			"(I)V",
			arg0
		);
	}
	inline void GradientDrawable::setOrientation(android::graphics::drawable::GradientDrawable_Orientation arg0) const
	{
		callMethod<void>(
			"setOrientation",
			"(Landroid/graphics/drawable/GradientDrawable$Orientation;)V",
			arg0.object()
		);
	}
	inline void GradientDrawable::setShape(jint arg0) const
	{
		callMethod<void>(
			"setShape",
			"(I)V",
			arg0
		);
	}
	inline void GradientDrawable::setSize(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setSize",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void GradientDrawable::setStroke(jint arg0, android::content::res::ColorStateList arg1) const
	{
		callMethod<void>(
			"setStroke",
			"(ILandroid/content/res/ColorStateList;)V",
			arg0,
			arg1.object()
		);
	}
	inline void GradientDrawable::setStroke(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setStroke",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void GradientDrawable::setStroke(jint arg0, android::content::res::ColorStateList arg1, jfloat arg2, jfloat arg3) const
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
	inline void GradientDrawable::setStroke(jint arg0, jint arg1, jfloat arg2, jfloat arg3) const
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
	inline void GradientDrawable::setTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void GradientDrawable::setTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	inline void GradientDrawable::setUseLevel(jboolean arg0) const
	{
		callMethod<void>(
			"setUseLevel",
			"(Z)V",
			arg0
		);
	}
} // namespace android::graphics::drawable

// Base class headers
#include "./Drawable.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::drawable;
#endif
