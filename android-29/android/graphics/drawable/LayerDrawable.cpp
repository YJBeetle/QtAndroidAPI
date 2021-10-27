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
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.LayerDrawable",
			"INSET_UNDEFINED"
		);
	}
	jint LayerDrawable::PADDING_MODE_NEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.LayerDrawable",
			"PADDING_MODE_NEST"
		);
	}
	jint LayerDrawable::PADDING_MODE_STACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.LayerDrawable",
			"PADDING_MODE_STACK"
		);
	}
	
	LayerDrawable::LayerDrawable(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LayerDrawable::LayerDrawable(jarray &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.LayerDrawable",
			"([Landroid/graphics/drawable/Drawable;)V",
			arg0
		);
	}
	
	// Methods
	jint LayerDrawable::addLayer(android::graphics::drawable::Drawable arg0)
	{
		return __thiz.callMethod<jint>(
			"addLayer",
			"(Landroid/graphics/drawable/Drawable;)I",
			arg0.__jniObject().object()
		);
	}
	void LayerDrawable::applyTheme(android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean LayerDrawable::canApplyTheme()
	{
		return __thiz.callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	void LayerDrawable::draw(android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LayerDrawable::findDrawableByLayerId(jint arg0)
	{
		return __thiz.callObjectMethod(
			"findDrawableByLayerId",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	jint LayerDrawable::findIndexByLayerId(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"findIndexByLayerId",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getAlpha()
	{
		return __thiz.callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	jint LayerDrawable::getBottomPadding()
	{
		return __thiz.callMethod<jint>(
			"getBottomPadding",
			"()I"
		);
	}
	jint LayerDrawable::getChangingConfigurations()
	{
		return __thiz.callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	QAndroidJniObject LayerDrawable::getConstantState()
	{
		return __thiz.callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	QAndroidJniObject LayerDrawable::getDrawable(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	jint LayerDrawable::getEndPadding()
	{
		return __thiz.callMethod<jint>(
			"getEndPadding",
			"()I"
		);
	}
	void LayerDrawable::getHotspotBounds(android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"getHotspotBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	jint LayerDrawable::getId(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getId",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getIntrinsicHeight()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint LayerDrawable::getIntrinsicWidth()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint LayerDrawable::getLayerGravity(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLayerGravity",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLayerHeight(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLayerHeight",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLayerInsetBottom(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLayerInsetBottom",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLayerInsetEnd(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLayerInsetEnd",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLayerInsetLeft(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLayerInsetLeft",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLayerInsetRight(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLayerInsetRight",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLayerInsetStart(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLayerInsetStart",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLayerInsetTop(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLayerInsetTop",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLayerWidth(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLayerWidth",
			"(I)I",
			arg0
		);
	}
	jint LayerDrawable::getLeftPadding()
	{
		return __thiz.callMethod<jint>(
			"getLeftPadding",
			"()I"
		);
	}
	jint LayerDrawable::getNumberOfLayers()
	{
		return __thiz.callMethod<jint>(
			"getNumberOfLayers",
			"()I"
		);
	}
	jint LayerDrawable::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	void LayerDrawable::getOutline(android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean LayerDrawable::getPadding(android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object()
		);
	}
	jint LayerDrawable::getPaddingMode()
	{
		return __thiz.callMethod<jint>(
			"getPaddingMode",
			"()I"
		);
	}
	jint LayerDrawable::getRightPadding()
	{
		return __thiz.callMethod<jint>(
			"getRightPadding",
			"()I"
		);
	}
	jint LayerDrawable::getStartPadding()
	{
		return __thiz.callMethod<jint>(
			"getStartPadding",
			"()I"
		);
	}
	jint LayerDrawable::getTopPadding()
	{
		return __thiz.callMethod<jint>(
			"getTopPadding",
			"()I"
		);
	}
	void LayerDrawable::inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3)
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
	void LayerDrawable::invalidateDrawable(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean LayerDrawable::isAutoMirrored()
	{
		return __thiz.callMethod<jboolean>(
			"isAutoMirrored",
			"()Z"
		);
	}
	jboolean LayerDrawable::isProjected()
	{
		return __thiz.callMethod<jboolean>(
			"isProjected",
			"()Z"
		);
	}
	jboolean LayerDrawable::isStateful()
	{
		return __thiz.callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	void LayerDrawable::jumpToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpToCurrentState",
			"()V"
		);
	}
	QAndroidJniObject LayerDrawable::mutate()
	{
		return __thiz.callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jboolean LayerDrawable::onLayoutDirectionChanged(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onLayoutDirectionChanged",
			"(I)Z",
			arg0
		);
	}
	void LayerDrawable::scheduleDrawable(android::graphics::drawable::Drawable arg0, __JniBaseClass arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"scheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void LayerDrawable::setAlpha(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void LayerDrawable::setAutoMirrored(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAutoMirrored",
			"(Z)V",
			arg0
		);
	}
	void LayerDrawable::setColorFilter(android::graphics::ColorFilter arg0)
	{
		__thiz.callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.__jniObject().object()
		);
	}
	void LayerDrawable::setDither(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	void LayerDrawable::setDrawable(jint arg0, android::graphics::drawable::Drawable arg1)
	{
		__thiz.callMethod<void>(
			"setDrawable",
			"(ILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean LayerDrawable::setDrawableByLayerId(jint arg0, android::graphics::drawable::Drawable arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setDrawableByLayerId",
			"(ILandroid/graphics/drawable/Drawable;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void LayerDrawable::setHotspot(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setHotspot",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
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
		__thiz.callMethod<void>(
			"setId",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerGravity(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setLayerGravity",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerHeight(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setLayerHeight",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerInset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz.callMethod<void>(
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
		__thiz.callMethod<void>(
			"setLayerInsetBottom",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerInsetEnd(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setLayerInsetEnd",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerInsetLeft(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setLayerInsetLeft",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerInsetRelative(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz.callMethod<void>(
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
		__thiz.callMethod<void>(
			"setLayerInsetRight",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerInsetStart(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setLayerInsetStart",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerInsetTop(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setLayerInsetTop",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setLayerSize(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setLayerSize",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void LayerDrawable::setLayerWidth(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setLayerWidth",
			"(II)V",
			arg0,
			arg1
		);
	}
	void LayerDrawable::setOpacity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOpacity",
			"(I)V",
			arg0
		);
	}
	void LayerDrawable::setPadding(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void LayerDrawable::setPaddingMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPaddingMode",
			"(I)V",
			arg0
		);
	}
	void LayerDrawable::setPaddingRelative(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
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
		__thiz.callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void LayerDrawable::setTintList(android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean LayerDrawable::setVisible(jboolean arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	void LayerDrawable::unscheduleDrawable(android::graphics::drawable::Drawable arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"unscheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::graphics::drawable

