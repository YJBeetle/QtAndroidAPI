#pragma once

#ifndef ANDROID_GRAPHICS_DRAWABLE_CLIPDRAWABLE
#define ANDROID_GRAPHICS_DRAWABLE_CLIPDRAWABLE

#include "../../../__JniBaseClass.hpp"
#include "Drawable.hpp"
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
	class Canvas;
}

namespace __jni_impl::android::graphics::drawable
{
	class ClipDrawable : public __jni_impl::android::graphics::drawable::DrawableWrapper
	{
	public:
		// Fields
		static jint HORIZONTAL();
		static jint VERTICAL();
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::drawable::Drawable arg0, jint arg1, jint arg2);
		
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
#include "../Canvas.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	jint ClipDrawable::HORIZONTAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.ClipDrawable",
			"HORIZONTAL"
		);
	}
	jint ClipDrawable::VERTICAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.ClipDrawable",
			"VERTICAL"
		);
	}
	
	// Constructors
	void ClipDrawable::__constructor(__jni_impl::android::graphics::drawable::Drawable arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.ClipDrawable",
			"(Landroid/graphics/drawable/Drawable;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	
	// Methods
	void ClipDrawable::inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3)
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
	void ClipDrawable::applyTheme(__jni_impl::android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	jint ClipDrawable::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	void ClipDrawable::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class ClipDrawable : public __jni_impl::android::graphics::drawable::ClipDrawable
	{
	public:
		ClipDrawable(QAndroidJniObject obj) { __thiz = obj; }
		ClipDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::graphics::drawable

#endif // ANDROID_GRAPHICS_DRAWABLE_CLIPDRAWABLE

