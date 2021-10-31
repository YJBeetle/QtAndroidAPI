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
	
	// QAndroidJniObject forward
	LayerDrawable::LayerDrawable(QAndroidJniObject obj) : android::graphics::drawable::Drawable(obj) {}
	
	// Constructors
	LayerDrawable::LayerDrawable(jarray arg0)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.LayerDrawable",
			"([Landroid/graphics/drawable/Drawable;)V",
			arg0
		) {}
	
	// Methods
	jint LayerDrawable::addLayer(android::graphics::drawable::Drawable arg0)
	{
		return callMethod<jint>(
			"addLayer",
			"(Landroid/graphics/drawable/Drawable;)I",
			arg0.object()
		);
	}
	void LayerDrawable::applyTheme(android::content::res::Resources_Theme arg0)
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	jboolean LayerDrawable::canApplyTheme()
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	void LayerDrawable::draw(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	android::graphics::drawable::Drawable LayerDrawable::findDrawableByLayerId(jint arg0)
	{
		return callObjectMethod(
			"findDrawableByLayerId",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	jint LayerDrawable::findIndexByLayerId(jint arg0)
	{
		return callMethod<jint>(
			"findIndexByLayerId",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getAlpha()
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	jint LayerDrawable::getBottomPadding()
	{
		return callMethod<jint>(
			"getBottomPadding",
			"()I"
		);
	}
	jint LayerDrawable::getChangingConfigurations()
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	android::graphics::drawable::Drawable_ConstantState LayerDrawable::getConstantState()
	{
		return callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	android::graphics::drawable::Drawable LayerDrawable::getDrawable(jint arg0)
	{
		return callObjectMethod(
			"getDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	jint LayerDrawable::getEndPadding()
	{
		return callMethod<jint>(
			"getEndPadding",
			"()I"
		);
	}
	void LayerDrawable::getHotspotBounds(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"getHotspotBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	jint LayerDrawable::getId(jint arg0)
	{
		return callMethod<jint>(
			"getId",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getIntrinsicHeight()
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint LayerDrawable::getIntrinsicWidth()
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint LayerDrawable::getLayerGravity(jint arg0)
	{
		return callMethod<jint>(
			"getLayerGravity",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLayerHeight(jint arg0)
	{
		return callMethod<jint>(
			"getLayerHeight",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLayerInsetBottom(jint arg0)
	{
		return callMethod<jint>(
			"getLayerInsetBottom",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLayerInsetEnd(jint arg0)
	{
		return callMethod<jint>(
			"getLayerInsetEnd",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLayerInsetLeft(jint arg0)
	{
		return callMethod<jint>(
			"getLayerInsetLeft",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLayerInsetRight(jint arg0)
	{
		return callMethod<jint>(
			"getLayerInsetRight",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLayerInsetStart(jint arg0)
	{
		return callMethod<jint>(
			"getLayerInsetStart",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLayerInsetTop(jint arg0)
	{
		return callMethod<jint>(
			"getLayerInsetTop",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLayerWidth(jint arg0)
	{
		return callMethod<jint>(
			"getLayerWidth",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLeftPadding()
	{
		return callMethod<jint>(
			"getLeftPadding",
			"()I"
		);
	}
	jint LayerDrawable::getNumberOfLayers()
	{
		return callMethod<jint>(
			"getNumberOfLayers",
			"()I"
		);
	}
	jint LayerDrawable::getOpacity()
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	void LayerDrawable::getOutline(android::graphics::Outline arg0)
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	jboolean LayerDrawable::getPadding(android::graphics::Rect arg0)
	{
		return callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jint LayerDrawable::getPaddingMode()
	{
		return callMethod<jint>(
			"getPaddingMode",
			"()I"
		);
	}
	jint LayerDrawable::getRightPadding()
	{
		return callMethod<jint>(
			"getRightPadding",
			"()I"
		);
	}
	jint LayerDrawable::getStartPadding()
	{
		return callMethod<jint>(
			"getStartPadding",
			"()I"
		);
	}
	jint LayerDrawable::getTopPadding()
	{
		return callMethod<jint>(
			"getTopPadding",
			"()I"
		);
	}
	jboolean LayerDrawable::hasFocusStateSpecified()
	{
		return callMethod<jboolean>(
			"hasFocusStateSpecified",
			"()Z"
		);
	}
	void LayerDrawable::inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3)
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
	void LayerDrawable::invalidateDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	jboolean LayerDrawable::isAutoMirrored()
	{
		return callMethod<jboolean>(
			"isAutoMirrored",
			"()Z"
		);
	}
	jboolean LayerDrawable::isProjected()
	{
		return callMethod<jboolean>(
			"isProjected",
			"()Z"
		);
	}
	jboolean LayerDrawable::isStateful()
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	void LayerDrawable::jumpToCurrentState()
	{
		callMethod<void>(
			"jumpToCurrentState",
			"()V"
		);
	}
	android::graphics::drawable::Drawable LayerDrawable::mutate()
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jboolean LayerDrawable::onLayoutDirectionChanged(jint arg0)
	{
		return callMethod<jboolean>(
			"onLayoutDirectionChanged",
			"(I)Z",
			arg0
		);
	}
	void LayerDrawable::scheduleDrawable(android::graphics::drawable::Drawable arg0, __JniBaseClass arg1, jlong arg2)
	{
		callMethod<void>(
			"scheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void LayerDrawable::setAlpha(jint arg0)
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void LayerDrawable::setAutoMirrored(jboolean arg0)
	{
		callMethod<void>(
			"setAutoMirrored",
			"(Z)V",
			arg0
		);
	}
	void LayerDrawable::setColorFilter(android::graphics::ColorFilter arg0)
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	void LayerDrawable::setDither(jboolean arg0)
	{
		callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	void LayerDrawable::setDrawable(jint arg0, android::graphics::drawable::Drawable arg1)
	{
		callMethod<void>(
			"setDrawable",
			"(ILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1.object()
		);
	}
	jboolean LayerDrawable::setDrawableByLayerId(jint arg0, android::graphics::drawable::Drawable arg1)
	{
		return callMethod<jboolean>(
			"setDrawableByLayerId",
			"(ILandroid/graphics/drawable/Drawable;)Z",
			arg0,
			arg1.object()
		);
	}
	void LayerDrawable::setHotspot(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"setHotspot",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void LayerDrawable::setId(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setId",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerGravity(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setLayerGravity",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerHeight(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setLayerHeight",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerInset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
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
	void LayerDrawable::setLayerInsetBottom(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setLayerInsetBottom",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerInsetEnd(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setLayerInsetEnd",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerInsetLeft(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setLayerInsetLeft",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerInsetRelative(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
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
	void LayerDrawable::setLayerInsetRight(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setLayerInsetRight",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerInsetStart(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setLayerInsetStart",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerInsetTop(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setLayerInsetTop",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerSize(jint arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"setLayerSize",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void LayerDrawable::setLayerWidth(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setLayerWidth",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setOpacity(jint arg0)
	{
		callMethod<void>(
			"setOpacity",
			"(I)V",
			arg0
		);
	}
	void LayerDrawable::setPadding(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void LayerDrawable::setPaddingMode(jint arg0)
	{
		callMethod<void>(
			"setPaddingMode",
			"(I)V",
			arg0
		);
	}
	void LayerDrawable::setPaddingRelative(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void LayerDrawable::setTintBlendMode(android::graphics::BlendMode arg0)
	{
		callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void LayerDrawable::setTintList(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	jboolean LayerDrawable::setVisible(jboolean arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	void LayerDrawable::unscheduleDrawable(android::graphics::drawable::Drawable arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"unscheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::graphics::drawable

