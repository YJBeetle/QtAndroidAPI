#pragma once

#ifndef ANDROID_GRAPHICS_DRAWABLE_COLORSTATELISTDRAWABLE
#define ANDROID_GRAPHICS_DRAWABLE_COLORSTATELISTDRAWABLE

#include "../../../__JniBaseClass.hpp"
#include "Drawable.hpp"

namespace __jni_impl::android::content::res
{
	class ColorStateList;
}
namespace __jni_impl::android::graphics
{
	class ColorFilter;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::graphics
{
	class BlendMode;
}
namespace __jni_impl::android::content::res
{
	class Resources_Theme;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable_ConstantState;
}

namespace __jni_impl::android::graphics::drawable
{
	class ColorStateListDrawable : public __jni_impl::android::graphics::drawable::Drawable
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::res::ColorStateList arg0);
		
		// Methods
		QAndroidJniObject getColorFilter();
		void setColorFilter(__jni_impl::android::graphics::ColorFilter arg0);
		void setAlpha(jint arg0);
		jint getAlpha();
		void draw(__jni_impl::android::graphics::Canvas arg0);
		void invalidateDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void scheduleDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::__JniBaseClass arg1, jlong arg2);
		void unscheduleDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::__JniBaseClass arg1);
		void setTintList(__jni_impl::android::content::res::ColorStateList arg0);
		void setTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		QAndroidJniObject getColorStateList();
		jint getChangingConfigurations();
		jboolean isStateful();
		QAndroidJniObject getCurrent();
		void applyTheme(__jni_impl::android::content::res::Resources_Theme arg0);
		jboolean canApplyTheme();
		jint getOpacity();
		QAndroidJniObject mutate();
		QAndroidJniObject getConstantState();
		jboolean hasFocusStateSpecified();
		void clearAlpha();
		void setColorStateList(__jni_impl::android::content::res::ColorStateList arg0);
	};
} // namespace __jni_impl::android::graphics::drawable

#include "../../content/res/ColorStateList.hpp"
#include "../ColorFilter.hpp"
#include "../Canvas.hpp"
#include "Drawable.hpp"
#include "../BlendMode.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../Rect.hpp"
#include "Drawable_ConstantState.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	
	// Constructors
	void ColorStateListDrawable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.ColorStateListDrawable",
			"()V"
		);
	}
	void ColorStateListDrawable::__constructor(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.ColorStateListDrawable",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject ColorStateListDrawable::getColorFilter()
	{
		return __thiz.callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	void ColorStateListDrawable::setColorFilter(__jni_impl::android::graphics::ColorFilter arg0)
	{
		__thiz.callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.__jniObject().object()
		);
	}
	void ColorStateListDrawable::setAlpha(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	jint ColorStateListDrawable::getAlpha()
	{
		return __thiz.callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	void ColorStateListDrawable::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	void ColorStateListDrawable::invalidateDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ColorStateListDrawable::scheduleDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::__JniBaseClass arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"scheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void ColorStateListDrawable::unscheduleDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"unscheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ColorStateListDrawable::setTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void ColorStateListDrawable::setTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ColorStateListDrawable::getColorStateList()
	{
		return __thiz.callObjectMethod(
			"getColorStateList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	jint ColorStateListDrawable::getChangingConfigurations()
	{
		return __thiz.callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	jboolean ColorStateListDrawable::isStateful()
	{
		return __thiz.callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	QAndroidJniObject ColorStateListDrawable::getCurrent()
	{
		return __thiz.callObjectMethod(
			"getCurrent",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void ColorStateListDrawable::applyTheme(__jni_impl::android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean ColorStateListDrawable::canApplyTheme()
	{
		return __thiz.callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	jint ColorStateListDrawable::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	QAndroidJniObject ColorStateListDrawable::mutate()
	{
		return __thiz.callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject ColorStateListDrawable::getConstantState()
	{
		return __thiz.callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	jboolean ColorStateListDrawable::hasFocusStateSpecified()
	{
		return __thiz.callMethod<jboolean>(
			"hasFocusStateSpecified",
			"()Z"
		);
	}
	void ColorStateListDrawable::clearAlpha()
	{
		__thiz.callMethod<void>(
			"clearAlpha",
			"()V"
		);
	}
	void ColorStateListDrawable::setColorStateList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setColorStateList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class ColorStateListDrawable : public __jni_impl::android::graphics::drawable::ColorStateListDrawable
	{
	public:
		ColorStateListDrawable(QAndroidJniObject obj) { __thiz = obj; }
		ColorStateListDrawable()
		{
			__constructor();
		}
		ColorStateListDrawable(__jni_impl::android::content::res::ColorStateList arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::graphics::drawable

#endif // ANDROID_GRAPHICS_DRAWABLE_COLORSTATELISTDRAWABLE

