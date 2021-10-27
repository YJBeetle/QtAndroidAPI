#pragma once

#include "../../../__JniBaseClass.hpp"
#include "Drawable.hpp"

namespace __jni_impl::android::content::res
{
	class ColorStateList;
}
namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::content::res
{
	class Resources_Theme;
}
namespace __jni_impl::android::graphics
{
	class BlendMode;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class ColorFilter;
}
namespace __jni_impl::android::graphics
{
	class Outline;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable_ConstantState;
}

namespace __jni_impl::android::graphics::drawable
{
	class LayerDrawable : public __jni_impl::android::graphics::drawable::Drawable
	{
	public:
		// Fields
		static jint INSET_UNDEFINED();
		static jint PADDING_MODE_NEST();
		static jint PADDING_MODE_STACK();
		
		// Constructors
		void __constructor(jarray arg0);
		
		// Methods
		jint addLayer(__jni_impl::android::graphics::drawable::Drawable arg0);
		void applyTheme(__jni_impl::android::content::res::Resources_Theme arg0);
		jboolean canApplyTheme();
		void draw(__jni_impl::android::graphics::Canvas arg0);
		QAndroidJniObject findDrawableByLayerId(jint arg0);
		jint findIndexByLayerId(jint arg0);
		jint getAlpha();
		jint getBottomPadding();
		jint getChangingConfigurations();
		QAndroidJniObject getConstantState();
		QAndroidJniObject getDrawable(jint arg0);
		jint getEndPadding();
		void getHotspotBounds(__jni_impl::android::graphics::Rect arg0);
		jint getId(jint arg0);
		jint getIntrinsicHeight();
		jint getIntrinsicWidth();
		jint getLayerGravity(jint arg0);
		jint getLayerHeight(jint arg0);
		jint getLayerInsetBottom(jint arg0);
		jint getLayerInsetEnd(jint arg0);
		jint getLayerInsetLeft(jint arg0);
		jint getLayerInsetRight(jint arg0);
		jint getLayerInsetStart(jint arg0);
		jint getLayerInsetTop(jint arg0);
		jint getLayerWidth(jint arg0);
		jint getLeftPadding();
		jint getNumberOfLayers();
		jint getOpacity();
		void getOutline(__jni_impl::android::graphics::Outline arg0);
		jboolean getPadding(__jni_impl::android::graphics::Rect arg0);
		jint getPaddingMode();
		jint getRightPadding();
		jint getStartPadding();
		jint getTopPadding();
		void inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3);
		void invalidateDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		jboolean isAutoMirrored();
		jboolean isProjected();
		jboolean isStateful();
		void jumpToCurrentState();
		QAndroidJniObject mutate();
		jboolean onLayoutDirectionChanged(jint arg0);
		void scheduleDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::__JniBaseClass arg1, jlong arg2);
		void setAlpha(jint arg0);
		void setAutoMirrored(jboolean arg0);
		void setColorFilter(__jni_impl::android::graphics::ColorFilter arg0);
		void setDither(jboolean arg0);
		void setDrawable(jint arg0, __jni_impl::android::graphics::drawable::Drawable arg1);
		jboolean setDrawableByLayerId(jint arg0, __jni_impl::android::graphics::drawable::Drawable arg1);
		void setHotspot(jfloat arg0, jfloat arg1);
		void setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3);
		void setId(jint arg0, jint arg1);
		void setLayerGravity(jint arg0, jint arg1);
		void setLayerHeight(jint arg0, jint arg1);
		void setLayerInset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void setLayerInsetBottom(jint arg0, jint arg1);
		void setLayerInsetEnd(jint arg0, jint arg1);
		void setLayerInsetLeft(jint arg0, jint arg1);
		void setLayerInsetRelative(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void setLayerInsetRight(jint arg0, jint arg1);
		void setLayerInsetStart(jint arg0, jint arg1);
		void setLayerInsetTop(jint arg0, jint arg1);
		void setLayerSize(jint arg0, jint arg1, jint arg2);
		void setLayerWidth(jint arg0, jint arg1);
		void setOpacity(jint arg0);
		void setPadding(jint arg0, jint arg1, jint arg2, jint arg3);
		void setPaddingMode(jint arg0);
		void setPaddingRelative(jint arg0, jint arg1, jint arg2, jint arg3);
		void setTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		void setTintList(__jni_impl::android::content::res::ColorStateList arg0);
		jboolean setVisible(jboolean arg0, jboolean arg1);
		void unscheduleDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::__JniBaseClass arg1);
	};
} // namespace __jni_impl::android::graphics::drawable

#include "../../content/res/ColorStateList.hpp"
#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../BlendMode.hpp"
#include "../Canvas.hpp"
#include "../ColorFilter.hpp"
#include "../Outline.hpp"
#include "../Rect.hpp"
#include "Drawable.hpp"
#include "Drawable_ConstantState.hpp"

namespace __jni_impl::android::graphics::drawable
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
	
	// Constructors
	void LayerDrawable::__constructor(jarray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.LayerDrawable",
			"([Landroid/graphics/drawable/Drawable;)V",
			arg0
		);
	}
	
	// Methods
	jint LayerDrawable::addLayer(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		return __thiz.callMethod<jint>(
			"addLayer",
			"(Landroid/graphics/drawable/Drawable;)I",
			arg0.__jniObject().object()
		);
	}
	void LayerDrawable::applyTheme(__jni_impl::android::content::res::Resources_Theme arg0)
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
	void LayerDrawable::draw(__jni_impl::android::graphics::Canvas arg0)
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
	void LayerDrawable::getHotspotBounds(__jni_impl::android::graphics::Rect arg0)
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
	void LayerDrawable::getOutline(__jni_impl::android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean LayerDrawable::getPadding(__jni_impl::android::graphics::Rect arg0)
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
	void LayerDrawable::inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3)
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
	void LayerDrawable::invalidateDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
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
	void LayerDrawable::scheduleDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::__JniBaseClass arg1, jlong arg2)
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
	void LayerDrawable::setColorFilter(__jni_impl::android::graphics::ColorFilter arg0)
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
	void LayerDrawable::setDrawable(jint arg0, __jni_impl::android::graphics::drawable::Drawable arg1)
	{
		__thiz.callMethod<void>(
			"setDrawable",
			"(ILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean LayerDrawable::setDrawableByLayerId(jint arg0, __jni_impl::android::graphics::drawable::Drawable arg1)
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
	void LayerDrawable::setTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void LayerDrawable::setTintList(__jni_impl::android::content::res::ColorStateList arg0)
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
	void LayerDrawable::unscheduleDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"unscheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class LayerDrawable : public __jni_impl::android::graphics::drawable::LayerDrawable
	{
	public:
		LayerDrawable(QAndroidJniObject obj) { __thiz = obj; }
		LayerDrawable(jarray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::graphics::drawable

