#pragma once

#ifndef ANDROID_GRAPHICS_DRAWABLE_DRAWABLEWRAPPER
#define ANDROID_GRAPHICS_DRAWABLE_DRAWABLEWRAPPER

#include "../../../__JniBaseClass.hpp"
#include "Drawable.hpp"

namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
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
	class ColorFilter;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics
{
	class Insets;
}
namespace __jni_impl::android::graphics
{
	class Outline;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable_ConstantState;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::content::res
{
	class ColorStateList;
}
namespace __jni_impl::android::graphics
{
	class BlendMode;
}

namespace __jni_impl::android::graphics::drawable
{
	class DrawableWrapper : public __jni_impl::android::graphics::drawable::Drawable
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::drawable::Drawable arg0);
		
		// Methods
		void inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3);
		QAndroidJniObject getColorFilter();
		void setColorFilter(__jni_impl::android::graphics::ColorFilter arg0);
		jint getChangingConfigurations();
		jboolean setVisible(jboolean arg0, jboolean arg1);
		jboolean onLayoutDirectionChanged(jint arg0);
		void setHotspot(jfloat arg0, jfloat arg1);
		void setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3);
		void getHotspotBounds(__jni_impl::android::graphics::Rect arg0);
		jboolean isStateful();
		void applyTheme(__jni_impl::android::content::res::Resources_Theme arg0);
		jboolean canApplyTheme();
		jint getOpacity();
		jint getIntrinsicWidth();
		jint getIntrinsicHeight();
		jboolean getPadding(__jni_impl::android::graphics::Rect arg0);
		QAndroidJniObject getOpticalInsets();
		void getOutline(__jni_impl::android::graphics::Outline arg0);
		QAndroidJniObject mutate();
		QAndroidJniObject getConstantState();
		QAndroidJniObject getDrawable();
		jint getAlpha();
		void draw(__jni_impl::android::graphics::Canvas arg0);
		void invalidateDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void scheduleDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::__JniBaseClass arg1, jlong arg2);
		void unscheduleDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::__JniBaseClass arg1);
		void setDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setTintList(__jni_impl::android::content::res::ColorStateList arg0);
		void setTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		void setAlpha(jint arg0);
	};
} // namespace __jni_impl::android::graphics::drawable

#include "Drawable.hpp"
#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../ColorFilter.hpp"
#include "../Rect.hpp"
#include "../Insets.hpp"
#include "../Outline.hpp"
#include "Drawable_ConstantState.hpp"
#include "../Canvas.hpp"
#include "../../content/res/ColorStateList.hpp"
#include "../BlendMode.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	
	// Constructors
	void DrawableWrapper::__constructor(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.DrawableWrapper",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void DrawableWrapper::inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3)
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
	QAndroidJniObject DrawableWrapper::getColorFilter()
	{
		return __thiz.callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	void DrawableWrapper::setColorFilter(__jni_impl::android::graphics::ColorFilter arg0)
	{
		__thiz.callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.__jniObject().object()
		);
	}
	jint DrawableWrapper::getChangingConfigurations()
	{
		return __thiz.callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	jboolean DrawableWrapper::setVisible(jboolean arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	jboolean DrawableWrapper::onLayoutDirectionChanged(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onLayoutDirectionChanged",
			"(I)Z",
			arg0
		);
	}
	void DrawableWrapper::setHotspot(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setHotspot",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void DrawableWrapper::setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void DrawableWrapper::getHotspotBounds(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"getHotspotBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean DrawableWrapper::isStateful()
	{
		return __thiz.callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	void DrawableWrapper::applyTheme(__jni_impl::android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean DrawableWrapper::canApplyTheme()
	{
		return __thiz.callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	jint DrawableWrapper::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	jint DrawableWrapper::getIntrinsicWidth()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint DrawableWrapper::getIntrinsicHeight()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jboolean DrawableWrapper::getPadding(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DrawableWrapper::getOpticalInsets()
	{
		return __thiz.callObjectMethod(
			"getOpticalInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	void DrawableWrapper::getOutline(__jni_impl::android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DrawableWrapper::mutate()
	{
		return __thiz.callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject DrawableWrapper::getConstantState()
	{
		return __thiz.callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	QAndroidJniObject DrawableWrapper::getDrawable()
	{
		return __thiz.callObjectMethod(
			"getDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint DrawableWrapper::getAlpha()
	{
		return __thiz.callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	void DrawableWrapper::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	void DrawableWrapper::invalidateDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void DrawableWrapper::scheduleDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::__JniBaseClass arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"scheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void DrawableWrapper::unscheduleDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"unscheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DrawableWrapper::setDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void DrawableWrapper::setTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void DrawableWrapper::setTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void DrawableWrapper::setAlpha(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class DrawableWrapper : public __jni_impl::android::graphics::drawable::DrawableWrapper
	{
	public:
		DrawableWrapper(QAndroidJniObject obj) { __thiz = obj; }
		DrawableWrapper(__jni_impl::android::graphics::drawable::Drawable arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::graphics::drawable

#endif // ANDROID_GRAPHICS_DRAWABLE_DRAWABLEWRAPPER

