#pragma once

#ifndef ANDROID_GRAPHICS_TYPEFACE_CUSTOMFALLBACKBUILDER
#define ANDROID_GRAPHICS_TYPEFACE_CUSTOMFALLBACKBUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics::fonts
{
	class FontFamily;
}
namespace __jni_impl::android::graphics
{
	class Typeface;
}
namespace __jni_impl::android::graphics::fonts
{
	class FontStyle;
}

namespace __jni_impl::android::graphics
{
	class Typeface_CustomFallbackBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::fonts::FontFamily arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setStyle(__jni_impl::android::graphics::fonts::FontStyle arg0);
		static jint getMaxCustomFallbackCount();
		QAndroidJniObject setSystemFallback(jstring arg0);
		QAndroidJniObject addCustomFallback(__jni_impl::android::graphics::fonts::FontFamily arg0);
	};
} // namespace __jni_impl::android::graphics

#include "fonts/FontFamily.hpp"
#include "Typeface.hpp"
#include "fonts/FontStyle.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void Typeface_CustomFallbackBuilder::__constructor(__jni_impl::android::graphics::fonts::FontFamily arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Typeface$CustomFallbackBuilder",
			"(Landroid/graphics/fonts/FontFamily;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject Typeface_CustomFallbackBuilder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/graphics/Typeface;"
		);
	}
	QAndroidJniObject Typeface_CustomFallbackBuilder::setStyle(__jni_impl::android::graphics::fonts::FontStyle arg0)
	{
		return __thiz.callObjectMethod(
			"setStyle",
			"(Landroid/graphics/fonts/FontStyle;)Landroid/graphics/Typeface$CustomFallbackBuilder;",
			arg0.__jniObject().object()
		);
	}
	jint Typeface_CustomFallbackBuilder::getMaxCustomFallbackCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Typeface$CustomFallbackBuilder",
			"getMaxCustomFallbackCount",
			"()I"
		);
	}
	QAndroidJniObject Typeface_CustomFallbackBuilder::setSystemFallback(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setSystemFallback",
			"(Ljava/lang/String;)Landroid/graphics/Typeface$CustomFallbackBuilder;",
			arg0
		);
	}
	QAndroidJniObject Typeface_CustomFallbackBuilder::addCustomFallback(__jni_impl::android::graphics::fonts::FontFamily arg0)
	{
		return __thiz.callObjectMethod(
			"addCustomFallback",
			"(Landroid/graphics/fonts/FontFamily;)Landroid/graphics/Typeface$CustomFallbackBuilder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Typeface_CustomFallbackBuilder : public __jni_impl::android::graphics::Typeface_CustomFallbackBuilder
	{
	public:
		Typeface_CustomFallbackBuilder(QAndroidJniObject obj) { __thiz = obj; }
		Typeface_CustomFallbackBuilder(__jni_impl::android::graphics::fonts::FontFamily arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_TYPEFACE_CUSTOMFALLBACKBUILDER

