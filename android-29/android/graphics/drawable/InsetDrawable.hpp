#pragma once

#ifndef ANDROID_GRAPHICS_DRAWABLE_INSETDRAWABLE
#define ANDROID_GRAPHICS_DRAWABLE_INSETDRAWABLE

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
	class InsetDrawable : public __jni_impl::android::graphics::drawable::DrawableWrapper
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::drawable::Drawable arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4);
		void __constructor(__jni_impl::android::graphics::drawable::Drawable arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void __constructor(__jni_impl::android::graphics::drawable::Drawable arg0, jfloat arg1);
		void __constructor(__jni_impl::android::graphics::drawable::Drawable arg0, jint arg1);
		
		// Methods
		void inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3);
		void applyTheme(__jni_impl::android::content::res::Resources_Theme arg0);
		jint getOpacity();
		jint getIntrinsicWidth();
		jint getIntrinsicHeight();
		jboolean getPadding(__jni_impl::android::graphics::Rect arg0);
		QAndroidJniObject getOpticalInsets();
		void getOutline(__jni_impl::android::graphics::Outline arg0);
	};
} // namespace __jni_impl::android::graphics::drawable

#include "Drawable.hpp"
#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../Rect.hpp"
#include "../Insets.hpp"
#include "../Outline.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	
	// Constructors
	void InsetDrawable::__constructor(__jni_impl::android::graphics::drawable::Drawable arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.InsetDrawable",
			"(Landroid/graphics/drawable/Drawable;FFFF)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void InsetDrawable::__constructor(__jni_impl::android::graphics::drawable::Drawable arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.InsetDrawable",
			"(Landroid/graphics/drawable/Drawable;IIII)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void InsetDrawable::__constructor(__jni_impl::android::graphics::drawable::Drawable arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.InsetDrawable",
			"(Landroid/graphics/drawable/Drawable;F)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void InsetDrawable::__constructor(__jni_impl::android::graphics::drawable::Drawable arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.InsetDrawable",
			"(Landroid/graphics/drawable/Drawable;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
	void InsetDrawable::inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3)
	{
		__thiz.callMethod<void>(
			"inflate",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	void InsetDrawable::applyTheme(__jni_impl::android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object());
	}
	jint InsetDrawable::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I");
	}
	jint InsetDrawable::getIntrinsicWidth()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicWidth",
			"()I");
	}
	jint InsetDrawable::getIntrinsicHeight()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicHeight",
			"()I");
	}
	jboolean InsetDrawable::getPadding(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject InsetDrawable::getOpticalInsets()
	{
		return __thiz.callObjectMethod(
			"getOpticalInsets",
			"()Landroid/graphics/Insets;");
	}
	void InsetDrawable::getOutline(__jni_impl::android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class InsetDrawable : public __jni_impl::android::graphics::drawable::InsetDrawable
	{
	public:
		InsetDrawable(QAndroidJniObject obj) { __thiz = obj; }
		InsetDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		InsetDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		InsetDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, jfloat arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		InsetDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::graphics::drawable

#endif // ANDROID_GRAPHICS_DRAWABLE_INSETDRAWABLE

