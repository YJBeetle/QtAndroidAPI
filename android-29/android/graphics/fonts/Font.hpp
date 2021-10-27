#pragma once

#ifndef ANDROID_GRAPHICS_FONTS_FONT
#define ANDROID_GRAPHICS_FONTS_FONT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics::fonts
{
	class FontStyle;
}
namespace __jni_impl::android::os
{
	class LocaleList;
}
namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}

namespace __jni_impl::android::graphics::fonts
{
	class Font : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jarray getAxes();
		QAndroidJniObject getBuffer();
		QAndroidJniObject getFile();
		QAndroidJniObject getLocaleList();
		QAndroidJniObject getStyle();
		jint getTtcIndex();
		jint hashCode();
		jstring toString();
	};
} // namespace __jni_impl::android::graphics::fonts

#include "FontStyle.hpp"
#include "../../os/LocaleList.hpp"
#include "../../../java/io/File.hpp"
#include "../../../java/nio/ByteBuffer.hpp"

namespace __jni_impl::android::graphics::fonts
{
	// Fields
	
	// Constructors
	void Font::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.fonts.Font",
			"(V)V");
	}
	
	// Methods
	jboolean Font::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jarray Font::getAxes()
	{
		return __thiz.callObjectMethod(
			"getAxes",
			"()[Landroid/graphics/fonts/FontVariationAxis;"
		).object<jarray>();
	}
	QAndroidJniObject Font::getBuffer()
	{
		return __thiz.callObjectMethod(
			"getBuffer",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	QAndroidJniObject Font::getFile()
	{
		return __thiz.callObjectMethod(
			"getFile",
			"()Ljava/io/File;"
		);
	}
	QAndroidJniObject Font::getLocaleList()
	{
		return __thiz.callObjectMethod(
			"getLocaleList",
			"()Landroid/os/LocaleList;"
		);
	}
	QAndroidJniObject Font::getStyle()
	{
		return __thiz.callObjectMethod(
			"getStyle",
			"()Landroid/graphics/fonts/FontStyle;"
		);
	}
	jint Font::getTtcIndex()
	{
		return __thiz.callMethod<jint>(
			"getTtcIndex",
			"()I"
		);
	}
	jint Font::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Font::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::graphics::fonts

namespace android::graphics::fonts
{
	class Font : public __jni_impl::android::graphics::fonts::Font
	{
	public:
		Font(QAndroidJniObject obj) { __thiz = obj; }
		Font()
		{
			__constructor();
		}
	};
} // namespace android::graphics::fonts

#endif // ANDROID_GRAPHICS_FONTS_FONT

