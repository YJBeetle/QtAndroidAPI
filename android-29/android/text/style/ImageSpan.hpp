#pragma once

#ifndef ANDROID_TEXT_STYLE_IMAGESPAN
#define ANDROID_TEXT_STYLE_IMAGESPAN

#include "../../../__JniBaseClass.hpp"
#include "CharacterStyle.hpp"
#include "MetricAffectingSpan.hpp"
#include "ReplacementSpan.hpp"
#include "DynamicDrawableSpan.hpp"

namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}

namespace __jni_impl::android::text::style
{
	class ImageSpan : public __jni_impl::android::text::style::DynamicDrawableSpan
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::drawable::Drawable arg0, jstring arg1);
		void __constructor(__jni_impl::android::graphics::drawable::Drawable arg0, jstring arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1);
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1, jint arg2);
		void __constructor(__jni_impl::android::graphics::Bitmap arg0);
		void __constructor(__jni_impl::android::graphics::Bitmap arg0, jint arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::graphics::Bitmap arg1);
		void __constructor(__jni_impl::android::graphics::drawable::Drawable arg0, jint arg1);
		void __constructor(__jni_impl::android::graphics::drawable::Drawable arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::graphics::Bitmap arg1, jint arg2);
		
		// Methods
		QAndroidJniObject getSource();
		QAndroidJniObject getDrawable();
	};
} // namespace __jni_impl::android::text::style

#include "../../graphics/drawable/Drawable.hpp"
#include "../../content/Context.hpp"
#include "../../net/Uri.hpp"
#include "../../graphics/Bitmap.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void ImageSpan::__constructor(__jni_impl::android::graphics::drawable::Drawable arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ImageSpan",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void ImageSpan::__constructor(__jni_impl::android::graphics::drawable::Drawable arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ImageSpan",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/String;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void ImageSpan::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ImageSpan",
			"(Landroid/content/Context;Landroid/net/Uri;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ImageSpan::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ImageSpan",
			"(Landroid/content/Context;Landroid/net/Uri;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void ImageSpan::__constructor(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ImageSpan",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void ImageSpan::__constructor(__jni_impl::android::content::Context arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ImageSpan",
			"(Landroid/content/Context;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void ImageSpan::__constructor(__jni_impl::android::graphics::Bitmap arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ImageSpan",
			"(Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object());
	}
	void ImageSpan::__constructor(__jni_impl::android::graphics::Bitmap arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ImageSpan",
			"(Landroid/graphics/Bitmap;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void ImageSpan::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::graphics::Bitmap arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ImageSpan",
			"(Landroid/content/Context;Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ImageSpan::__constructor(__jni_impl::android::graphics::drawable::Drawable arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ImageSpan",
			"(Landroid/graphics/drawable/Drawable;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void ImageSpan::__constructor(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ImageSpan",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object());
	}
	void ImageSpan::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::graphics::Bitmap arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ImageSpan",
			"(Landroid/content/Context;Landroid/graphics/Bitmap;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	
	// Methods
	QAndroidJniObject ImageSpan::getSource()
	{
		return __thiz.callObjectMethod(
			"getSource",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ImageSpan::getDrawable()
	{
		return __thiz.callObjectMethod(
			"getDrawable",
			"()Landroid/graphics/drawable/Drawable;");
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class ImageSpan : public __jni_impl::android::text::style::ImageSpan
	{
	public:
		ImageSpan(QAndroidJniObject obj) { __thiz = obj; }
		ImageSpan(__jni_impl::android::graphics::drawable::Drawable arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ImageSpan(__jni_impl::android::graphics::drawable::Drawable arg0, jstring arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ImageSpan(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ImageSpan(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ImageSpan(__jni_impl::android::content::Context arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ImageSpan(__jni_impl::android::content::Context arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ImageSpan(__jni_impl::android::graphics::Bitmap arg0)
		{
			__constructor(
				arg0);
		}
		ImageSpan(__jni_impl::android::graphics::Bitmap arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ImageSpan(__jni_impl::android::content::Context arg0, __jni_impl::android::graphics::Bitmap arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ImageSpan(__jni_impl::android::graphics::drawable::Drawable arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ImageSpan(__jni_impl::android::graphics::drawable::Drawable arg0)
		{
			__constructor(
				arg0);
		}
		ImageSpan(__jni_impl::android::content::Context arg0, __jni_impl::android::graphics::Bitmap arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_IMAGESPAN

