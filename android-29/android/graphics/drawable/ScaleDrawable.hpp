#pragma once

#ifndef ANDROID_GRAPHICS_DRAWABLE_SCALEDRAWABLE
#define ANDROID_GRAPHICS_DRAWABLE_SCALEDRAWABLE

#include "DrawableWrapper.hpp"

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
	class Rect;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}

namespace __jni_impl::android::graphics::drawable
{
	class ScaleDrawable : public __jni_impl::android::graphics::drawable::DrawableWrapper
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::drawable::Drawable arg0, jint arg1, jfloat arg2, jfloat arg3);
		
		// Methods
		void inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3);
		void applyTheme(__jni_impl::android::content::res::Resources_Theme arg0);
		jint getOpacity();
		void draw(__jni_impl::android::graphics::Canvas arg0);
	};
} // namespace __jni_impl::android::graphics::drawable

#include "Drawable.hpp"
#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../Rect.hpp"
#include "../Canvas.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	
	// Constructors
	void ScaleDrawable::__constructor(__jni_impl::android::graphics::drawable::Drawable arg0, jint arg1, jfloat arg2, jfloat arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.ScaleDrawable",
			"(Landroid/graphics/drawable/Drawable;IFF)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3);
	}
	
	// Methods
	void ScaleDrawable::inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3)
	{
		__thiz.callMethod<void>(
			"inflate",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	void ScaleDrawable::applyTheme(__jni_impl::android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object());
	}
	jint ScaleDrawable::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I");
	}
	void ScaleDrawable::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class ScaleDrawable : public __jni_impl::android::graphics::drawable::ScaleDrawable
	{
	public:
		ScaleDrawable(QAndroidJniObject obj) { __thiz = obj; }
		ScaleDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, jint arg1, jfloat arg2, jfloat arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::graphics::drawable

#endif // ANDROID_GRAPHICS_DRAWABLE_SCALEDRAWABLE

