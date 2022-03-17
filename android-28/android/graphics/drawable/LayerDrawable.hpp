#pragma once

#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
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
#include "./LayerDrawable.def.hpp"

namespace android::graphics::drawable
{
	// Fields
	inline jint LayerDrawable::INSET_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.LayerDrawable",
			"INSET_UNDEFINED"
		);
	}
	inline jint LayerDrawable::PADDING_MODE_NEST()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.LayerDrawable",
			"PADDING_MODE_NEST"
		);
	}
	inline jint LayerDrawable::PADDING_MODE_STACK()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.LayerDrawable",
			"PADDING_MODE_STACK"
		);
	}
	
	// Constructors
	inline LayerDrawable::LayerDrawable(JArray arg0)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.LayerDrawable",
			"([Landroid/graphics/drawable/Drawable;)V",
			arg0.object<jarray>()
		) {}
	
	// Methods
	inline jint LayerDrawable::addLayer(android::graphics::drawable::Drawable arg0) const
	{
		return callMethod<jint>(
			"addLayer",
			"(Landroid/graphics/drawable/Drawable;)I",
			arg0.object()
		);
	}
	inline void LayerDrawable::applyTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	inline jboolean LayerDrawable::canApplyTheme() const
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	inline void LayerDrawable::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Drawable LayerDrawable::findDrawableByLayerId(jint arg0) const
	{
		return callObjectMethod(
			"findDrawableByLayerId",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	inline jint LayerDrawable::findIndexByLayerId(jint arg0) const
	{
		return callMethod<jint>(
			"findIndexByLayerId",
			"(I)I",
			arg0
		);
	}
	inline jint LayerDrawable::getAlpha() const
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	inline jint LayerDrawable::getBottomPadding() const
	{
		return callMethod<jint>(
			"getBottomPadding",
			"()I"
		);
	}
	inline jint LayerDrawable::getChangingConfigurations() const
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	inline android::graphics::drawable::Drawable_ConstantState LayerDrawable::getConstantState() const
	{
		return callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	inline android::graphics::drawable::Drawable LayerDrawable::getDrawable(jint arg0) const
	{
		return callObjectMethod(
			"getDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	inline jint LayerDrawable::getEndPadding() const
	{
		return callMethod<jint>(
			"getEndPadding",
			"()I"
		);
	}
	inline void LayerDrawable::getHotspotBounds(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"getHotspotBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline jint LayerDrawable::getId(jint arg0) const
	{
		return callMethod<jint>(
			"getId",
			"(I)I",
			arg0
		);
	}
	inline jint LayerDrawable::getIntrinsicHeight() const
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	inline jint LayerDrawable::getIntrinsicWidth() const
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	inline jint LayerDrawable::getLayerGravity(jint arg0) const
	{
		return callMethod<jint>(
			"getLayerGravity",
			"(I)I",
			arg0
		);
	}
	inline jint LayerDrawable::getLayerHeight(jint arg0) const
	{
		return callMethod<jint>(
			"getLayerHeight",
			"(I)I",
			arg0
		);
	}
	inline jint LayerDrawable::getLayerInsetBottom(jint arg0) const
	{
		return callMethod<jint>(
			"getLayerInsetBottom",
			"(I)I",
			arg0
		);
	}
	inline jint LayerDrawable::getLayerInsetEnd(jint arg0) const
	{
		return callMethod<jint>(
			"getLayerInsetEnd",
			"(I)I",
			arg0
		);
	}
	inline jint LayerDrawable::getLayerInsetLeft(jint arg0) const
	{
		return callMethod<jint>(
			"getLayerInsetLeft",
			"(I)I",
			arg0
		);
	}
	inline jint LayerDrawable::getLayerInsetRight(jint arg0) const
	{
		return callMethod<jint>(
			"getLayerInsetRight",
			"(I)I",
			arg0
		);
	}
	inline jint LayerDrawable::getLayerInsetStart(jint arg0) const
	{
		return callMethod<jint>(
			"getLayerInsetStart",
			"(I)I",
			arg0
		);
	}
	inline jint LayerDrawable::getLayerInsetTop(jint arg0) const
	{
		return callMethod<jint>(
			"getLayerInsetTop",
			"(I)I",
			arg0
		);
	}
	inline jint LayerDrawable::getLayerWidth(jint arg0) const
	{
		return callMethod<jint>(
			"getLayerWidth",
			"(I)I",
			arg0
		);
	}
	inline jint LayerDrawable::getLeftPadding() const
	{
		return callMethod<jint>(
			"getLeftPadding",
			"()I"
		);
	}
	inline jint LayerDrawable::getNumberOfLayers() const
	{
		return callMethod<jint>(
			"getNumberOfLayers",
			"()I"
		);
	}
	inline jint LayerDrawable::getOpacity() const
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	inline void LayerDrawable::getOutline(android::graphics::Outline arg0) const
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	inline jboolean LayerDrawable::getPadding(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	inline jint LayerDrawable::getPaddingMode() const
	{
		return callMethod<jint>(
			"getPaddingMode",
			"()I"
		);
	}
	inline jint LayerDrawable::getRightPadding() const
	{
		return callMethod<jint>(
			"getRightPadding",
			"()I"
		);
	}
	inline jint LayerDrawable::getStartPadding() const
	{
		return callMethod<jint>(
			"getStartPadding",
			"()I"
		);
	}
	inline jint LayerDrawable::getTopPadding() const
	{
		return callMethod<jint>(
			"getTopPadding",
			"()I"
		);
	}
	inline void LayerDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const
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
	inline void LayerDrawable::invalidateDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline jboolean LayerDrawable::isAutoMirrored() const
	{
		return callMethod<jboolean>(
			"isAutoMirrored",
			"()Z"
		);
	}
	inline jboolean LayerDrawable::isStateful() const
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	inline void LayerDrawable::jumpToCurrentState() const
	{
		callMethod<void>(
			"jumpToCurrentState",
			"()V"
		);
	}
	inline android::graphics::drawable::Drawable LayerDrawable::mutate() const
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jboolean LayerDrawable::onLayoutDirectionChanged(jint arg0) const
	{
		return callMethod<jboolean>(
			"onLayoutDirectionChanged",
			"(I)Z",
			arg0
		);
	}
	inline void LayerDrawable::scheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1, jlong arg2) const
	{
		callMethod<void>(
			"scheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void LayerDrawable::setAlpha(jint arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	inline void LayerDrawable::setAutoMirrored(jboolean arg0) const
	{
		callMethod<void>(
			"setAutoMirrored",
			"(Z)V",
			arg0
		);
	}
	inline void LayerDrawable::setColorFilter(android::graphics::ColorFilter arg0) const
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	inline void LayerDrawable::setDither(jboolean arg0) const
	{
		callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	inline void LayerDrawable::setDrawable(jint arg0, android::graphics::drawable::Drawable arg1) const
	{
		callMethod<void>(
			"setDrawable",
			"(ILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1.object()
		);
	}
	inline jboolean LayerDrawable::setDrawableByLayerId(jint arg0, android::graphics::drawable::Drawable arg1) const
	{
		return callMethod<jboolean>(
			"setDrawableByLayerId",
			"(ILandroid/graphics/drawable/Drawable;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void LayerDrawable::setHotspot(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setHotspot",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void LayerDrawable::setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"setHotspotBounds",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void LayerDrawable::setId(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setId",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void LayerDrawable::setLayerGravity(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setLayerGravity",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void LayerDrawable::setLayerHeight(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setLayerHeight",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void LayerDrawable::setLayerInset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
	{
		callMethod<void>(
			"setLayerInset",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void LayerDrawable::setLayerInsetBottom(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setLayerInsetBottom",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void LayerDrawable::setLayerInsetEnd(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setLayerInsetEnd",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void LayerDrawable::setLayerInsetLeft(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setLayerInsetLeft",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void LayerDrawable::setLayerInsetRelative(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
	{
		callMethod<void>(
			"setLayerInsetRelative",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void LayerDrawable::setLayerInsetRight(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setLayerInsetRight",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void LayerDrawable::setLayerInsetStart(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setLayerInsetStart",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void LayerDrawable::setLayerInsetTop(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setLayerInsetTop",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void LayerDrawable::setLayerSize(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setLayerSize",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void LayerDrawable::setLayerWidth(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setLayerWidth",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void LayerDrawable::setOpacity(jint arg0) const
	{
		callMethod<void>(
			"setOpacity",
			"(I)V",
			arg0
		);
	}
	inline void LayerDrawable::setPadding(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void LayerDrawable::setPaddingMode(jint arg0) const
	{
		callMethod<void>(
			"setPaddingMode",
			"(I)V",
			arg0
		);
	}
	inline void LayerDrawable::setPaddingRelative(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"setPaddingRelative",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void LayerDrawable::setTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void LayerDrawable::setTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	inline jboolean LayerDrawable::setVisible(jboolean arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	inline void LayerDrawable::unscheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1) const
	{
		callMethod<void>(
			"unscheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::graphics::drawable

// Base class headers
#include "./Drawable.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::drawable;
#endif
