#pragma once

#ifndef ANDROID_GRAPHICS_DRAWABLE_PICTUREDRAWABLE
#define ANDROID_GRAPHICS_DRAWABLE_PICTUREDRAWABLE

#include "../../../__JniBaseClass.hpp"
#include "Drawable.hpp"

namespace __jni_impl::android::graphics
{
	class Picture;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class ColorFilter;
}

namespace __jni_impl::android::graphics::drawable
{
	class PictureDrawable : public __jni_impl::android::graphics::drawable::Drawable
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::Picture arg0);
		
		// Methods
		void setAlpha(jint arg0);
		QAndroidJniObject getPicture();
		void setPicture(__jni_impl::android::graphics::Picture arg0);
		jint getOpacity();
		jint getIntrinsicWidth();
		jint getIntrinsicHeight();
		void draw(__jni_impl::android::graphics::Canvas arg0);
		void setColorFilter(__jni_impl::android::graphics::ColorFilter arg0);
	};
} // namespace __jni_impl::android::graphics::drawable

#include "../Picture.hpp"
#include "../Canvas.hpp"
#include "../ColorFilter.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	
	// Constructors
	void PictureDrawable::__constructor(__jni_impl::android::graphics::Picture arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.PictureDrawable",
			"(Landroid/graphics/Picture;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void PictureDrawable::setAlpha(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0);
	}
	QAndroidJniObject PictureDrawable::getPicture()
	{
		return __thiz.callObjectMethod(
			"getPicture",
			"()Landroid/graphics/Picture;");
	}
	void PictureDrawable::setPicture(__jni_impl::android::graphics::Picture arg0)
	{
		__thiz.callMethod<void>(
			"setPicture",
			"(Landroid/graphics/Picture;)V",
			arg0.__jniObject().object());
	}
	jint PictureDrawable::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I");
	}
	jint PictureDrawable::getIntrinsicWidth()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicWidth",
			"()I");
	}
	jint PictureDrawable::getIntrinsicHeight()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicHeight",
			"()I");
	}
	void PictureDrawable::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object());
	}
	void PictureDrawable::setColorFilter(__jni_impl::android::graphics::ColorFilter arg0)
	{
		__thiz.callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class PictureDrawable : public __jni_impl::android::graphics::drawable::PictureDrawable
	{
	public:
		PictureDrawable(QAndroidJniObject obj) { __thiz = obj; }
		PictureDrawable(__jni_impl::android::graphics::Picture arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::graphics::drawable

#endif // ANDROID_GRAPHICS_DRAWABLE_PICTUREDRAWABLE

