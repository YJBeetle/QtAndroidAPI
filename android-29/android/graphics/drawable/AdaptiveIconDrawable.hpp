#pragma once

#ifndef ANDROID_GRAPHICS_DRAWABLE_ADAPTIVEICONDRAWABLE
#define ANDROID_GRAPHICS_DRAWABLE_ADAPTIVEICONDRAWABLE

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
	class Path;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics
{
	class Region;
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
	class AdaptiveIconDrawable : public __jni_impl::android::graphics::drawable::Drawable
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::android::graphics::drawable::Drawable arg1);
		
		// Methods
		static jfloat getExtraInsetFraction();
		void applyTheme(__jni_impl::android::content::res::Resources_Theme arg0);
		jboolean canApplyTheme();
		void draw(__jni_impl::android::graphics::Canvas arg0);
		jint getAlpha();
		QAndroidJniObject getBackground();
		jint getChangingConfigurations();
		QAndroidJniObject getConstantState();
		QAndroidJniObject getForeground();
		void getHotspotBounds(__jni_impl::android::graphics::Rect arg0);
		QAndroidJniObject getIconMask();
		jint getIntrinsicHeight();
		jint getIntrinsicWidth();
		jint getOpacity();
		void getOutline(__jni_impl::android::graphics::Outline arg0);
		QAndroidJniObject getTransparentRegion();
		void inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3);
		void invalidateDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void invalidateSelf();
		jboolean isAutoMirrored();
		jboolean isProjected();
		jboolean isStateful();
		void jumpToCurrentState();
		QAndroidJniObject mutate();
		void scheduleDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::__JniBaseClass arg1, jlong arg2);
		void setAlpha(jint arg0);
		void setAutoMirrored(jboolean arg0);
		void setColorFilter(__jni_impl::android::graphics::ColorFilter arg0);
		void setDither(jboolean arg0);
		void setHotspot(jfloat arg0, jfloat arg1);
		void setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3);
		void setOpacity(jint arg0);
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
#include "../Path.hpp"
#include "../Rect.hpp"
#include "../Region.hpp"
#include "Drawable.hpp"
#include "Drawable_ConstantState.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	
	// Constructors
	void AdaptiveIconDrawable::__constructor(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::android::graphics::drawable::Drawable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.AdaptiveIconDrawable",
			"(Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jfloat AdaptiveIconDrawable::getExtraInsetFraction()
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.graphics.drawable.AdaptiveIconDrawable",
			"getExtraInsetFraction",
			"()F"
		);
	}
	void AdaptiveIconDrawable::applyTheme(__jni_impl::android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean AdaptiveIconDrawable::canApplyTheme()
	{
		return __thiz.callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	void AdaptiveIconDrawable::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	jint AdaptiveIconDrawable::getAlpha()
	{
		return __thiz.callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	QAndroidJniObject AdaptiveIconDrawable::getBackground()
	{
		return __thiz.callObjectMethod(
			"getBackground",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint AdaptiveIconDrawable::getChangingConfigurations()
	{
		return __thiz.callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	QAndroidJniObject AdaptiveIconDrawable::getConstantState()
	{
		return __thiz.callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	QAndroidJniObject AdaptiveIconDrawable::getForeground()
	{
		return __thiz.callObjectMethod(
			"getForeground",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void AdaptiveIconDrawable::getHotspotBounds(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"getHotspotBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AdaptiveIconDrawable::getIconMask()
	{
		return __thiz.callObjectMethod(
			"getIconMask",
			"()Landroid/graphics/Path;"
		);
	}
	jint AdaptiveIconDrawable::getIntrinsicHeight()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint AdaptiveIconDrawable::getIntrinsicWidth()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint AdaptiveIconDrawable::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	void AdaptiveIconDrawable::getOutline(__jni_impl::android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AdaptiveIconDrawable::getTransparentRegion()
	{
		return __thiz.callObjectMethod(
			"getTransparentRegion",
			"()Landroid/graphics/Region;"
		);
	}
	void AdaptiveIconDrawable::inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3)
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
	void AdaptiveIconDrawable::invalidateDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void AdaptiveIconDrawable::invalidateSelf()
	{
		__thiz.callMethod<void>(
			"invalidateSelf",
			"()V"
		);
	}
	jboolean AdaptiveIconDrawable::isAutoMirrored()
	{
		return __thiz.callMethod<jboolean>(
			"isAutoMirrored",
			"()Z"
		);
	}
	jboolean AdaptiveIconDrawable::isProjected()
	{
		return __thiz.callMethod<jboolean>(
			"isProjected",
			"()Z"
		);
	}
	jboolean AdaptiveIconDrawable::isStateful()
	{
		return __thiz.callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	void AdaptiveIconDrawable::jumpToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpToCurrentState",
			"()V"
		);
	}
	QAndroidJniObject AdaptiveIconDrawable::mutate()
	{
		return __thiz.callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void AdaptiveIconDrawable::scheduleDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::__JniBaseClass arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"scheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void AdaptiveIconDrawable::setAlpha(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void AdaptiveIconDrawable::setAutoMirrored(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAutoMirrored",
			"(Z)V",
			arg0
		);
	}
	void AdaptiveIconDrawable::setColorFilter(__jni_impl::android::graphics::ColorFilter arg0)
	{
		__thiz.callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.__jniObject().object()
		);
	}
	void AdaptiveIconDrawable::setDither(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	void AdaptiveIconDrawable::setHotspot(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setHotspot",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void AdaptiveIconDrawable::setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void AdaptiveIconDrawable::setOpacity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOpacity",
			"(I)V",
			arg0
		);
	}
	void AdaptiveIconDrawable::setTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void AdaptiveIconDrawable::setTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean AdaptiveIconDrawable::setVisible(jboolean arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	void AdaptiveIconDrawable::unscheduleDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::__JniBaseClass arg1)
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
	class AdaptiveIconDrawable : public __jni_impl::android::graphics::drawable::AdaptiveIconDrawable
	{
	public:
		AdaptiveIconDrawable(QAndroidJniObject obj) { __thiz = obj; }
		AdaptiveIconDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::android::graphics::drawable::Drawable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::graphics::drawable

#endif // ANDROID_GRAPHICS_DRAWABLE_ADAPTIVEICONDRAWABLE

