#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../../content/res/ColorStateList.hpp"
#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../BlendMode.hpp"
#include "../Canvas.hpp"
#include "../ColorFilter.hpp"
#include "../Outline.hpp"
#include "../Rect.hpp"
#include "./Drawable.hpp"
#include "./Drawable_ConstantState.hpp"
#include "./LayerDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	jint LayerDrawable::INSET_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.LayerDrawable",
			"INSET_UNDEFINED"
		);
	}
	jint LayerDrawable::PADDING_MODE_NEST()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.LayerDrawable",
			"PADDING_MODE_NEST"
		);
	}
	jint LayerDrawable::PADDING_MODE_STACK()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.LayerDrawable",
			"PADDING_MODE_STACK"
		);
	}
	
	// Constructors
	LayerDrawable::LayerDrawable(JArray arg0)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.LayerDrawable",
			"([Landroid/graphics/drawable/Drawable;)V",
			arg0.object<jarray>()
		) {}
	
	// Methods
	jint LayerDrawable::addLayer(android::graphics::drawable::Drawable arg0) const
	{
		return callMethod<jint>(
			"addLayer",
			"(Landroid/graphics/drawable/Drawable;)I",
			arg0.object()
		);
	}
	void LayerDrawable::applyTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	jboolean LayerDrawable::canApplyTheme() const
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	void LayerDrawable::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	android::graphics::drawable::Drawable LayerDrawable::findDrawableByLayerId(jint arg0) const
	{
		return callObjectMethod(
			"findDrawableByLayerId",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	jint LayerDrawable::findIndexByLayerId(jint arg0) const
	{
		return callMethod<jint>(
			"findIndexByLayerId",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getAlpha() const
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	jint LayerDrawable::getBottomPadding() const
	{
		return callMethod<jint>(
			"getBottomPadding",
			"()I"
		);
	}
	jint LayerDrawable::getChangingConfigurations() const
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	android::graphics::drawable::Drawable_ConstantState LayerDrawable::getConstantState() const
	{
		return callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	android::graphics::drawable::Drawable LayerDrawable::getDrawable(jint arg0) const
	{
		return callObjectMethod(
			"getDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	jint LayerDrawable::getEndPadding() const
	{
		return callMethod<jint>(
			"getEndPadding",
			"()I"
		);
	}
	void LayerDrawable::getHotspotBounds(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"getHotspotBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	jint LayerDrawable::getId(jint arg0) const
	{
		return callMethod<jint>(
			"getId",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getIntrinsicHeight() const
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint LayerDrawable::getIntrinsicWidth() const
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint LayerDrawable::getLayerGravity(jint arg0) const
	{
		return callMethod<jint>(
			"getLayerGravity",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLayerHeight(jint arg0) const
	{
		return callMethod<jint>(
			"getLayerHeight",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLayerInsetBottom(jint arg0) const
	{
		return callMethod<jint>(
			"getLayerInsetBottom",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLayerInsetEnd(jint arg0) const
	{
		return callMethod<jint>(
			"getLayerInsetEnd",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLayerInsetLeft(jint arg0) const
	{
		return callMethod<jint>(
			"getLayerInsetLeft",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLayerInsetRight(jint arg0) const
	{
		return callMethod<jint>(
			"getLayerInsetRight",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLayerInsetStart(jint arg0) const
	{
		return callMethod<jint>(
			"getLayerInsetStart",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLayerInsetTop(jint arg0) const
	{
		return callMethod<jint>(
			"getLayerInsetTop",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLayerWidth(jint arg0) const
	{
		return callMethod<jint>(
			"getLayerWidth",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLeftPadding() const
	{
		return callMethod<jint>(
			"getLeftPadding",
			"()I"
		);
	}
	jint LayerDrawable::getNumberOfLayers() const
	{
		return callMethod<jint>(
			"getNumberOfLayers",
			"()I"
		);
	}
	jint LayerDrawable::getOpacity() const
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	void LayerDrawable::getOutline(android::graphics::Outline arg0) const
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	jboolean LayerDrawable::getPadding(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jint LayerDrawable::getPaddingMode() const
	{
		return callMethod<jint>(
			"getPaddingMode",
			"()I"
		);
	}
	jint LayerDrawable::getRightPadding() const
	{
		return callMethod<jint>(
			"getRightPadding",
			"()I"
		);
	}
	jint LayerDrawable::getStartPadding() const
	{
		return callMethod<jint>(
			"getStartPadding",
			"()I"
		);
	}
	jint LayerDrawable::getTopPadding() const
	{
		return callMethod<jint>(
			"getTopPadding",
			"()I"
		);
	}
	void LayerDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const
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
	void LayerDrawable::invalidateDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	jboolean LayerDrawable::isAutoMirrored() const
	{
		return callMethod<jboolean>(
			"isAutoMirrored",
			"()Z"
		);
	}
	jboolean LayerDrawable::isProjected() const
	{
		return callMethod<jboolean>(
			"isProjected",
			"()Z"
		);
	}
	jboolean LayerDrawable::isStateful() const
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	void LayerDrawable::jumpToCurrentState() const
	{
		callMethod<void>(
			"jumpToCurrentState",
			"()V"
		);
	}
	android::graphics::drawable::Drawable LayerDrawable::mutate() const
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jboolean LayerDrawable::onLayoutDirectionChanged(jint arg0) const
	{
		return callMethod<jboolean>(
			"onLayoutDirectionChanged",
			"(I)Z",
			arg0
		);
	}
	void LayerDrawable::scheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1, jlong arg2) const
	{
		callMethod<void>(
			"scheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void LayerDrawable::setAlpha(jint arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void LayerDrawable::setAutoMirrored(jboolean arg0) const
	{
		callMethod<void>(
			"setAutoMirrored",
			"(Z)V",
			arg0
		);
	}
	void LayerDrawable::setColorFilter(android::graphics::ColorFilter arg0) const
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	void LayerDrawable::setDither(jboolean arg0) const
	{
		callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	void LayerDrawable::setDrawable(jint arg0, android::graphics::drawable::Drawable arg1) const
	{
		callMethod<void>(
			"setDrawable",
			"(ILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1.object()
		);
	}
	jboolean LayerDrawable::setDrawableByLayerId(jint arg0, android::graphics::drawable::Drawable arg1) const
	{
		return callMethod<jboolean>(
			"setDrawableByLayerId",
			"(ILandroid/graphics/drawable/Drawable;)Z",
			arg0,
			arg1.object()
		);
	}
	void LayerDrawable::setHotspot(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setHotspot",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	void LayerDrawable::setId(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setId",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerGravity(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setLayerGravity",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerHeight(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setLayerHeight",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerInset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
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
	void LayerDrawable::setLayerInsetBottom(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setLayerInsetBottom",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerInsetEnd(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setLayerInsetEnd",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerInsetLeft(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setLayerInsetLeft",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerInsetRelative(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
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
	void LayerDrawable::setLayerInsetRight(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setLayerInsetRight",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerInsetStart(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setLayerInsetStart",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerInsetTop(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setLayerInsetTop",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerSize(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setLayerSize",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void LayerDrawable::setLayerWidth(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setLayerWidth",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setOpacity(jint arg0) const
	{
		callMethod<void>(
			"setOpacity",
			"(I)V",
			arg0
		);
	}
	void LayerDrawable::setPadding(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	void LayerDrawable::setPaddingMode(jint arg0) const
	{
		callMethod<void>(
			"setPaddingMode",
			"(I)V",
			arg0
		);
	}
	void LayerDrawable::setPaddingRelative(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	void LayerDrawable::setTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void LayerDrawable::setTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	jboolean LayerDrawable::setVisible(jboolean arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	void LayerDrawable::unscheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1) const
	{
		callMethod<void>(
			"unscheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::graphics::drawable

